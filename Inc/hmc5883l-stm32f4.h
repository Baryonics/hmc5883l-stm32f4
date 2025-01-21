#ifndef HMC5883L5883L_STM32F4_H
#define HMC5883L5883L_STM32F4_H


typedef enum {
    HMC5883L_OK = 0,
    HMC5883L_TIMEOUT = -1,
    HMC5883L_ERR = -2,
} HMC5883L_Status;



/**
 * Enumeration for Averaging Modes.
 */
typedef enum {
    HMC5883L_MA1    =  0b00000000,  // 1 sample
    HMC5883L_MA2    =  0b00000010,  // 2 samples
    HMC5883L_MA4    =  0b00000100,  // 4 samples
    HMC5883L_MA8    =  0b00000110   // 8 samples
} HMC5883L_MA_t;



/**
 * Enumeration for Data Output rate
 */
typedef enum {
    HMC5883L_DO_0_75HZ =  0b00000000,  // 0.75 Hz
    HMC5883L_DO_1_5HZ  =  0b00001000,  // 1.5 Hz
    HMC5883L_DO_3HZ    =  0b00010000,  // 3 Hz
    HMC5883L_DO_7_5HZ  =  0b00011000,  // 7.5 Hz
    HMC5883L_DO_15HZ   =  0b00100000,  // 15 Hz
    HMC5883L_DO_30HZ   =  0b00101000,  // 30 Hz
    HMC5883L_DO_75HZ   =  0b00111000   // 75 Hz
} HMC5883L_DO_t;


/**
 * Enumeration for Measurement configuration. 
 * P generates a positive field on X,Y,Z Axis
 * N generates a negative field on X,Y,Z Axis
 * Interesting for offset calculations
 */
typedef enum {
    HMC5883L_MS_S   =   0b00000000,     // Standard (Normal) mode
    HMC5883L_MS_P   =   0b01000000,     // Positive mode
    HMC5883L_MS_N   =   0b10000000      // Negative mode
} HMC5883L_DO_t;




HMC5883L_Status HMC5883L_init();

#endif