#ifndef HMC5883L5883L_STM32F4_H
#define HMC5883L5883L_STM32F4_H
#include "stm32f4xx_hal.h"
#include <stdint.h>

typedef enum {
    HMC5883L_OK = 0,
    HMC5883L_TIMEOUT = -1,
    HMC5883L_ERR = -2,
} HMC5883L_Status_t;



/*-----------------------------
 |  Control Register A config
 -----------------------------*/

/**
 * CRA_MA: Enumeration for Averaging Modes.
 */
typedef enum {
    MA1    =  0x00,  // 1 sample
    MA2    =  0x01,  // 2 samples
    MA4    =  0x02,  // 4 samples
    MA8    =  0x03   // 8 samples
} HMC5883L_MA_t;



/**
 * CRA_MA: Enumeration for Data Output rate
 */
typedef enum {
    DO_0_75HZ =  0x00,  // 0.75 Hz
    DO_1_5HZ  =  0x01,  // 1.5 Hz
    DO_3HZ    =  0x02,  // 3 Hz
    DO_7_5HZ  =  0x03,  // 7.5 Hz
    DO_15HZ   =  0x04,  // 15 Hz
    DO_30HZ   =  0x05,  // 30 Hz
    DO_75HZ   =  0x06   // 75 Hz
} HMC5883L_DO_t;


/**
 * CRA_MA: Enumeration for Measurement configuration. 
 * P generates a positive field on X,Y,Z Axis
 * N generates a negative field on X,Y,Z Axis
 * Interesting for offset calculations
 */
typedef enum {
    MS_S   =   0x00,     // Standard (Normal) mode
    MS_P   =   0x01,     // Positive mode
    MS_N   =   0x03      // Negative mode
} HMC5883L_MS_t;



typedef struct HMC5883L_Reg_cra_conf
{
  HMC5883L_MA_t ma_c;
  HMC5883L_DO_t do_c;
  HMC5883L_MS_t ms_c;   
} HMC5883L_Reg_cra_conf_t;



/*-----------------------------
 |  Control Register B config
 -----------------------------*/

/**
 * CRB_GCB: Enumeration for Gain Control Bits.
 */
typedef enum {
    GCB_1370    =   0x00,   // 
    GCB_1090    =   0x01,   // Gain 1090 default
    GCB_820     =   0x02,   //
    GCB_660     =   0x03,   //
    GCB_440     =   0x04,   //
    GCB_390     =   0x05,   //
    GCB_330     =   0x06,   //
    GCB_230     =   0x07    //
} HMC5883L_GCB_t;





HMC5883L_Status_t HMC5883L_init_standard(I2C_HandleTypeDef *hi2c);
#endif