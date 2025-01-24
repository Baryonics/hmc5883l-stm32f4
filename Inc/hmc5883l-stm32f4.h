#ifndef HMC5883L5883L_STM32F4_H
#define HMC5883L5883L_STM32F4_H
#include "stm32f4xx_hal.h"
#include <stdint.h>

typedef enum {
    HMC5883L_OK = 0,
    HMC5883L_TIMEOUT = -1,
    HMC5883L_ERR = -2,
} HMC5883L_Status_t;



/**
 * CRA_MA: Enumeration for Averaging Modes.
 */
typedef enum {
    HMC5883L_MA1    =  0x00,  // 1 sample
    HMC5883L_MA2    =  0x02,  // 2 samples
    HMC5883L_MA4    =  0x04,  // 4 samples
    HMC5883L_MA8    =  0x06   // 8 samples
} HMC5883L_MA_t;



/**
 * CRA_MA: Enumeration for Data Output rate
 */
typedef enum {
    HMC5883L_DO_0_75HZ =  0x00,  // 0.75 Hz
    HMC5883L_DO_1_5HZ  =  0x08,  // 1.5 Hz
    HMC5883L_DO_3HZ    =  0x10,  // 3 Hz
    HMC5883L_DO_7_5HZ  =  0x18,  // 7.5 Hz
    HMC5883L_DO_15HZ   =  0x20,  // 15 Hz
    HMC5883L_DO_30HZ   =  0x28,  // 30 Hz
    HMC5883L_DO_75HZ   =  0x38   // 75 Hz
} HMC5883L_DO_t;


/**
 * CRA_MA: Enumeration for Measurement configuration. 
 * P generates a positive field on X,Y,Z Axis
 * N generates a negative field on X,Y,Z Axis
 * Interesting for offset calculations
 */
typedef enum {
    HMC5883L_MS_S   =   0x00,     // Standard (Normal) mode
    HMC5883L_MS_P   =   0x40,     // Positive mode
    HMC5883L_MS_N   =   0x80      // Negative mode
} HMC5883L_MS_t;



typedef struct HMC5883L_Reg_cra_conf
{
  HMC5883L_MA_t ma_c;
  HMC5883L_DO_t do_c;
  HMC5883L_MS_t ms_c;   
} HMC5883L_Reg_cra_conf_t;




HMC5883L_Status_t HMC5883L_init(HMC5883L_Reg_cra_conf_t *cra_c, I2C_HandleTypeDef *hi2c);

#endif