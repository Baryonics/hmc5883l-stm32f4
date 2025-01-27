#ifndef HMC5883L_STM32F4_CORE_H
#define HMC5883L_STM32F4_CORE_H
#include "stm32f4xx_hal.h"
#include <stdint.h>

#define     ADDR            (0x1E)      /* HMC5883L Address */

#define ID_READ             (0x0D)
#define ID_WRITE            (0x0C)


// Register definitions
#define     CRA_REG        (0x00)      /* Config Register A */
#define     CRB_REG        (0x01)      /* Config Register B */
#define     MR_REG         (0x02)      /* Mode Register */
#define     DXRA_REG       (0x03)      /* X-Data MSB Register */
#define     DXRB_REG       (0x04)      /* X-Data LSB Register */
#define     DZRA_REG       (0x05)      /* Z-Data MSB Register */
#define     DZRB_REG       (0x06)      /* Z-Data LSB Register */
#define     DYRA_REG       (0x07)      /* Y-Data MSB Register */
#define     DYRB_REG       (0x08)      /* Y-Data LSB Register */
#define     SR_REG         (0x09)      /* Status Register */
#define     IRA_REG        (0x0A)      /* Identification Register A */
#define     IRB_REG        (0x0B)      /* Identification Register B */
#define     IRC_REG        (0x0C)      /* Identification Register C */


// Control bit locations and size in register CRA (Controll Register A)
#define     CRA_MA_P       (7-2)
#define     CRA_MA_S       (2)   

#define     CRA_DO_P       (7-3)
#define     CRA_DO_S       (3)

#define     CRA_MS_P       (8-1)
#define     CRA_MS_S       (2)


// Control bit locations and size in register CRA (Controll Register B)



void set_register_bits(uint8_t val, uint8_t pos, uint8_t len, uint8_t *reg);


void write_reg_cra(HMC5883L_Reg_cra_conf_t *cra_c, I2C_HandleTypeDef *hi2c) ;


void set_reg_cra(HMC5883L_Reg_cra_conf_t *cra_c, uint8_t *reg_buf);

#endif

