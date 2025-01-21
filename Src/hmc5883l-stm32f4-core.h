#ifndef HMC5883L_STM32F4_CORE_H
#define HMC5883L_STM32F4_CORE_H

#define     HMC5883L_ADDR            (0x1E)      /* HMC5883L Address */


#define HMC5883L_ID_READ             (0x0D)
#define HMC5883L_ID_WRITE            (0xC)


#define     HMC5883L_REG_CRA         (0x00)      /* Config Register A */
#define     HMC5883L_REG_CRB         (0x01)      /* Config Register B */
#define     HMC5883L_REG_MR          (0x02)      /* Mode Register */
#define     HMC5883L_REG_DXRA        (0x03)      /* X-Data MSB Register */
#define     HMC5883L_REG_DXRB        (0x04)      /* X-Data LSB Register */
#define     HMC5883L_REG_DZRA        (0x05)      /* Z-Data MSB Register */
#define     HMC5883L_REG_DZRB        (0x06)      /* Z-Data LSB Register */
#define     HMC5883L_REG_DYRA        (0x07)      /* Y-Data MSB Register */
#define     HMC5883L_REG_DYRB        (0x08)      /* Y-Data LSB Register */
#define     HMC5883L_REG_SR          (0x09)      /* Status Register */
#define     HMC5883L_REG_IRA         (0x0A)      /* Identification Register A */
#define     HMC5883L_REG_IRB         (0x0B)      /* Identification Register B */
#define     HMC5883L_REG_IRC         (0x0C)      /* Identification Register C */


#endif