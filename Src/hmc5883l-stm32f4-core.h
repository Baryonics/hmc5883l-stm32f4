#ifndef HMC5883L_STM32F4_CORE_H
#define HMC5883L_STM32F4_CORE_H

#include <stdint.h>

#define     HMC5883L_ADDR            (0x1E)      /* HMC5883L Address */

#define HMC5883L_ID_READ             (0x0D)
#define HMC5883L_ID_WRITE            (0x0C)


// Register definitions
#define     HMC5883L_REG_CRA        (0x00)      /* Config Register A */
#define     HMC5883L_REG_CRB        (0x01)      /* Config Register B */
#define     HMC5883L_REG_MR         (0x02)      /* Mode Register */
#define     HMC5883L_REG_DXRA       (0x03)      /* X-Data MSB Register */
#define     HMC5883L_REG_DXRB       (0x04)      /* X-Data LSB Register */
#define     HMC5883L_REG_DZRA       (0x05)      /* Z-Data MSB Register */
#define     HMC5883L_REG_DZRB       (0x06)      /* Z-Data LSB Register */
#define     HMC5883L_REG_DYRA       (0x07)      /* Y-Data MSB Register */
#define     HMC5883L_REG_DYRB       (0x08)      /* Y-Data LSB Register */
#define     HMC5883L_REG_SR         (0x09)      /* Status Register */
#define     HMC5883L_REG_IRA        (0x0A)      /* Identification Register A */
#define     HMC5883L_REG_IRB        (0x0B)      /* Identification Register B */
#define     HMC5883L_REG_IRC        (0x0C)      /* Identification Register C */


// Control bit locations and size in register
#define     HMC5883L_CRA_MA_P       (7-2)
#define     HMC5993L_CRA_MA_S       (2)   

#define     HMC5883L_CRA_DO_P       (7-3)
#define     HMC5388L_CRA_DO_S       (3)

#define     HMC5883L_CRA_MS_P       (8-1)
#define     HMC5883L_CRA_MS_S       (2)


void set_register_bits(uint8_t val, uint8_t pos, uint8_t len, uint8_t *reg);


#endif

