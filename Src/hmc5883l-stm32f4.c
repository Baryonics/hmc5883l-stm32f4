#include "hmc5883l-stm32f4.h"
#include "hmc5883l-stm32f4-core.h"


HMC5883L_Reg_cra_conf_t HMC5883L_standard_cra_conf = {
    MA1,
    DO_3HZ,
    MS_N
};


// Public Functions

HMC5883L_Status_t HMC5883L_init_standard(I2C_HandleTypeDef *hi2c)
{
    write_reg_cra(&HMC5883L_standard_cra_conf, hi2c);
}






// Private Functions

// CRA Functions

/**
 * @brief Writes the configuration for control register A to HMC5883L. 
 * @param cra_c: Pointer to a Control register A configuration TypeDef.
 * @param hi2c: Pointer to the used i2c interface
 */
void write_reg_cra(HMC5883L_Reg_cra_conf_t *cra_c, I2C_HandleTypeDef *hi2c) 
{
    uint8_t reg_val_buf = 0;
    set_reg_cra(cra_c, &reg_val_buf);
    write_val_to_reg(&reg_val_buf, CRA_REG, hi2c);
}


/**
 * @brief Sets the given configuration bits for Control Register A to a buffer.
 * @param cra_c: Pointer to a Control regoster A configuration TypeDef.
 * @param reg_buf: Pointer to a buffer to store the register value
 */
void set_reg_cra(HMC5883L_Reg_cra_conf_t *cra_c, uint8_t *reg_buf)
{
    set_register_bits(cra_c->ma_c, CRA_MA_P, CRA_MA_S, reg_buf);
    set_register_bits(cra_c->do_c, CRA_DO_P, CRA_DO_S, reg_buf);
    set_register_bits(cra_c->ms_c, CRA_MS_P, CRA_MS_S, reg_buf);
}



//CRB Functions

void write_reg_crb(); // under construction

void set_reg_crb(); // under construction


// general functins

void write_val_to_reg(uint8_t *val, uint8_t reg, I2C_HandleTypeDef *hi2c)
{
    uint8_t buf[3];
    buf[0] = ID_WRITE;
    buf[1] = reg;
    buf[2] = *val;

    HAL_I2C_Master_Transmit(hi2c, ADDR, buf, 3, 100);
}


void set_register_bits(uint8_t val, uint8_t pos, uint8_t len, uint8_t *reg)
{
  uint8_t mask = (1 << len) - 1;
  *reg &= ~(mask << pos);
  *reg |= (val << pos); 
}



