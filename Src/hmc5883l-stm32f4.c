#include "hmc5883l-stm32f4.h"
#include "hmc5883l-stm32f4-core.h"



HMC5883L_Status_t HMC5883L_init(HMC5883L_Reg_cra_conf_t *cra_c, I2C_HandleTypeDef *hi2c)
{
    uint8_t reg_buf = 0x0;
    // aa
    write_reg_cra(&reg_buf, hi2c);
}


void set_reg_cra(HMC5883L_Reg_cra_conf_t *cra_c, uint8_t *reg_buf)
{
    set_register_bits(cra_c->ma_c, HMC5883L_CRA_MA_P, HMC5883L_CRA_MA_S, reg_buf);
    set_register_bits(cra_c->do_c, HMC5883L_CRA_MA_P, HMC5883L_CRA_MA_S, reg_buf);
    set_register_bits(cra_c->ms_c, HMC5883L_CRA_MS_P, HMC5883L_CRA_MS_S, reg_buf);
}


void write_reg_cra(uint8_t *reg_buf, I2C_HandleTypeDef *hi2c) 
{
    set_reg_cra(cra_c, &reg_buf); //See what i wanna do
}


void set_register_bits(uint8_t val, uint8_t pos, uint8_t len, uint8_t *reg)
{
  uint8_t mask = (1 << len) - 1;
  *reg &= ~(mask << pos);
  *reg |= (val << pos); 
}



