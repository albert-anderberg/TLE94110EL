#pragma once

const uint8_t LABT = 0b1;  // No daisy chaining

/*
 * Register addresses
 */
const uint8_t HB_ACT_1_CTRL = 0b00000001 | (LABT << 1);
const uint8_t HB_ACT_2_CTRL = 0b01000001 | (LABT << 1);
const uint8_t HB_ACT_3_CTRL = 0b00100001 | (LABT << 1);
const uint8_t HB_MODE_1_CTRL = 0b01100001 | (LABT << 1);
const uint8_t HB_MODE_2_CTRL = 0b00010001 | (LABT << 1);
const uint8_t HB_MODE_3_CTRL = 0b01010001 | (LABT << 1);
const uint8_t PWM_CH_FREQ_CTRL = 0b00110001 | (LABT << 1);
const uint8_t PWM1_DC_CTRL = 0b01110001 | (LABT << 1);
const uint8_t PWM2_DC_CTRL = 0b00001001 | (LABT << 1);
const uint8_t PWM3_DC_CTRL = 0b01001001 | (LABT << 1);
const uint8_t FW_OL_CTRL = 0b00101001 | (LABT << 1);
const uint8_t FW_CTRL = 0b01101001 | (LABT << 1);
const uint8_t CONFIG_CTRL = 0b01100101 | (LABT << 1);
const uint8_t SYS_DIAG_1 = 0b00011001 | (LABT << 1);
const uint8_t SYS_DIAG_2 = 0b01011001 | (LABT << 1);
const uint8_t SYS_DIAG_3 = 0b00111001 | (LABT << 1);
const uint8_t SYS_DIAG_4 = 0b01111001 | (LABT << 1);
const uint8_t SYS_DIAG_5 = 0b00000101 | (LABT << 1);
const uint8_t SYS_DIAG_6 = 0b01000101 | (LABT << 1);
const uint8_t SYS_DIAG_7 = 0b00100101 | (LABT << 1);
const uint8_t ERROR_1_STAT = SYS_DIAG_2;
const uint8_t ERROR_2_STAT = SYS_DIAG_3;
const uint8_t ERROR_3_STAT = SYS_DIAG_4;
const uint8_t ERROR_4_STAT = SYS_DIAG_5;
const uint8_t ERROR_5_STAT = SYS_DIAG_6;
const uint8_t ERROR_6_STAT = SYS_DIAG_7;

/*
 * Control registers
 */

// HB_ACT_1_CTRL
const uint8_t HB4_HS_EN = 7;
const uint8_t HB4_LS_EN = 6;
const uint8_t HB3_HS_EN = 5;
const uint8_t HB3_LS_EN = 4;
const uint8_t HB2_HS_EN = 3;
const uint8_t HB2_LS_EN = 2;
const uint8_t HB1_HS_EN = 1;
const uint8_t HB1_LS_EN = 0;

// HB_ACT_2_CTRL
const uint8_t HB8_HS_EN = 7;
const uint8_t HB8_LS_EN = 6;
const uint8_t HB7_HS_EN = 5;
const uint8_t HB7_LS_EN = 4;
const uint8_t HB6_HS_EN = 3;
const uint8_t HB6_LS_EN = 2;
const uint8_t HB5_HS_EN = 1;
const uint8_t HB5_LS_EN = 0;

// HB_ACT_3_CTRL
const uint8_t HB10_HS_EN = 3;
const uint8_t HB10_LS_EN = 2;
const uint8_t HB9_HS_EN = 1;
const uint8_t HB9_LS_EN = 0;

// HB_MODE_1_CTRL
const uint8_t HB4_MODE1 = 7;
const uint8_t HB4_MODE0 = 6;
const uint8_t HB4_MODE = HB4_MODE0;
const uint8_t HB3_MODE1 = 5;
const uint8_t HB3_MODE0 = 4;
const uint8_t HB3_MODE = HB3_MODE0;
const uint8_t HB2_MODE1 = 3;
const uint8_t HB2_MODE0 = 2;
const uint8_t HB2_MODE = HB2_MODE0;
const uint8_t HB1_MODE1 = 1;
const uint8_t HB1_MODE0 = 0;
const uint8_t HB1_MODE = HB1_MODE0;

// HB_MODE_2_CTRL
const uint8_t HB8_MODE1 = 7;
const uint8_t HB8_MODE0 = 6;
const uint8_t HB8_MODE = HB8_MODE0;
const uint8_t HB7_MODE1 = 5;
const uint8_t HB7_MODE0 = 4;
const uint8_t HB7_MODE = HB7_MODE0;
const uint8_t HB6_MODE1 = 3;
const uint8_t HB6_MODE0 = 2;
const uint8_t HB6_MODE = HB6_MODE0;
const uint8_t HB5_MODE1 = 1;
const uint8_t HB5_MODE0 = 0;
const uint8_t HB5_MODE = HB5_MODE0;

// HB_MODE_3_CTRL
const uint8_t HB10_MODE1 = 3;
const uint8_t HB10_MODE0 = 2;
const uint8_t HB10_MODE = HB10_MODE0;
const uint8_t HB9_MODE1 = 1;
const uint8_t HB9_MODE0 = 0;
const uint8_t HB9_MODE = HB9_MODE0;

// PWM_CH_FREQ_CTRL
const uint8_t FM_MOD_EN1 = 7;
const uint8_t FM_MOD_EN0 = 6;
const uint8_t FM_MOD_EN = FM_MOD_EN0;
const uint8_t PWM_CH3_FREQ_1 = 5;
const uint8_t PWM_CH3_FREQ_0 = 4;
const uint8_t PWM_CH3_FREQ = PWM_CH3_FREQ_0;
const uint8_t PWM_CH2_FREQ_1 = 3;
const uint8_t PWM_CH2_FREQ_0 = 2;
const uint8_t PWM_CH2_FREQ = PWM_CH2_FREQ_0;
const uint8_t PWM_CH1_FREQ_1 = 1;
const uint8_t PWM_CH1_FREQ_0 = 0;
const uint8_t PWM_CH1_FREQ = PWM_CH1_FREQ_0;

// PWM1_DC_CTRL
const uint8_t PWM1_DC_CTRL7 = 7;
const uint8_t PWM1_DC_CTRL6 = 6;
const uint8_t PWM1_DC_CTRL5 = 5;
const uint8_t PWM1_DC_CTRL4 = 4;
const uint8_t PWM1_DC_CTRL3 = 3;
const uint8_t PWM1_DC_CTRL2 = 2;
const uint8_t PWM1_DC_CTRL1 = 1;
const uint8_t PWM1_DC_CTRL0 = 0;

// PWM2_DC_CTRL
const uint8_t PWM2_DC_CTRL7 = 7;
const uint8_t PWM2_DC_CTRL6 = 6;
const uint8_t PWM2_DC_CTRL5 = 5;
const uint8_t PWM2_DC_CTRL4 = 4;
const uint8_t PWM2_DC_CTRL3 = 3;
const uint8_t PWM2_DC_CTRL2 = 2;
const uint8_t PWM2_DC_CTRL1 = 1;
const uint8_t PWM2_DC_CTRL0 = 0;

// PWM3_DC_CTRL
const uint8_t PWM3_DC_CTRL7 = 7;
const uint8_t PWM3_DC_CTRL6 = 6;
const uint8_t PWM3_DC_CTRL5 = 5;
const uint8_t PWM3_DC_CTRL4 = 4;
const uint8_t PWM3_DC_CTRL3 = 3;
const uint8_t PWM3_DC_CTRL2 = 2;
const uint8_t PWM3_DC_CTRL1 = 1;
const uint8_t PWM3_DC_CTRL0 = 0;

// FW_OL_CTRL
const uint8_t FW_HB6 = 7;
const uint8_t FW_HB5 = 6;
const uint8_t FW_HB4 = 5;
const uint8_t FW_HB3 = 4;
const uint8_t FW_HB2 = 3;
const uint8_t FW_HB1 = 2;
const uint8_t OL_SEL_HS2 = 1;
const uint8_t OL_SEL_HS1 = 0;

// FW_CTRL
const uint8_t FW_HB10 = 3;
const uint8_t FW_HB9 = 2;
const uint8_t FW_HB8 = 1;
const uint8_t FW_HB7 = 0;

// CONFIG_CTRL
const uint8_t DEV_ID2 = 2;
const uint8_t DEV_ID1 = 1;
const uint8_t DEV_ID0 = 0;
const uint8_t DEV_ID = DEV_ID0;

/*
 * Status registers
 */

// SYS_DIAG_1
const uint8_t SPI_ERR = 7;
const uint8_t LE = 6;
const uint8_t VS_UV = 5;
const uint8_t VS_OV = 4;
const uint8_t NPOR = 3;
const uint8_t TSD = 2;
const uint8_t TPW = 1;

// SYS_DIAG_2
const uint8_t HB4_HS_OC = 7;
const uint8_t HB4_LS_OC = 6;
const uint8_t HB3_HS_OC = 5;
const uint8_t HB3_LS_OC = 4;
const uint8_t HB2_HS_OC = 3;
const uint8_t HB2_LS_OC = 2;
const uint8_t HB1_HS_OC = 1;
const uint8_t HB1_LS_OC = 0;

// SYS_DIAG_3
const uint8_t HB8_HS_OC = 7;
const uint8_t HB8_LS_OC = 6;
const uint8_t HB7_HS_OC = 5;
const uint8_t HB7_LS_OC = 4;
const uint8_t HB6_HS_OC = 3;
const uint8_t HB6_LS_OC = 2;
const uint8_t HB5_HS_OC = 1;
const uint8_t HB5_LS_OC = 0;

// SYS_DIAG_4
const uint8_t HB10_HS_OC = 3;
const uint8_t HB10_LS_OC = 2;
const uint8_t HB9_HS_OC = 1;
const uint8_t HB9_LS_OC = 0;

// SYS_DIAG_5
const uint8_t HB4_HS_OL = 7;
const uint8_t HB4_LS_OL = 6;
const uint8_t HB3_HS_OL = 5;
const uint8_t HB3_LS_OL = 4;
const uint8_t HB2_HS_OL = 3;
const uint8_t HB2_LS_OL = 2;
const uint8_t HB1_HS_OL = 1;
const uint8_t HB1_LS_OL = 0;

// SYS_DIAG_6
const uint8_t HB8_HS_OL = 7;
const uint8_t HB8_LS_OL = 6;
const uint8_t HB7_HS_OL = 5;
const uint8_t HB7_LS_OL = 4;
const uint8_t HB6_HS_OL = 3;
const uint8_t HB6_LS_OL = 2;
const uint8_t HB5_HS_OL = 1;
const uint8_t HB5_LS_OL = 0;

// SYS_DIAG_7
const uint8_t HB10_HS_OL = 3;
const uint8_t HB10_LS_OL = 2;
const uint8_t HB9_HS_OL = 1;
const uint8_t HB9_LS_OL = 0;
