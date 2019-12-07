/**
* ************** How to use this firmware - READ THIS, yes actually read this. *********************************
*
* This is for beta machine testing only. Enable the beta machine below and set the other options in Configuration.h
*
*/

#ifndef CONFIGURATION_BETA_H
#define CONFIGURATION_BETA_H
#define CONFIGURATION_BETA_H_VERSION 010109


//===========================================================================
// ***********************   COPYMASTER PRINTERS    *************************
//===========================================================================

//===========================================================================
// Copymaster 3D 300 Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define COPYMASTER3D_300

// EZABL Probe Mounts
//#define CUSTOM_PROBE

//===========================================================================
// *************************   CREALITY PRINTERS    *************************
//===========================================================================

//===========================================================================
// Creality CR-10 Max Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define CR10_MAX

// What LCD are you using? (Only 12864 LCD is supported)
//#define RR_LCD_UPGRADE
// Stock Touch LCD is not supported at this time.
// Info on converting the LCD can be found here: COMING SOON

// EZABL/ABL Probe Mounts
//#define CUSTOM_PROBE

// If you are using the stock BL Touch sensor uncomment the below line
// If you are using a BL Touch but with a different mount uncomment the below line and the above CUSTOM_PROBE then enter the offsets below.
//#define CR10_MAX_BLTOUCH


//===========================================================================
// Creality Ender 5 PLUS Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
//#define ENDER5_PLUS

// What LCD are you using? (Only 12864 LCD is supported)
//#define RR_LCD_UPGRADE
// Stock Touch LCD is not supported at this time.
// Info on converting the LCD can be found here: COMING SOON

// EZABL/ABL Probe Mounts
//#define CUSTOM_PROBE

// If you are using the stock BL Touch sensor uncomment the below line
// If you are using a BL Touch but with a different mount uncomment the below line and the above CUSTOM_PROBE then enter the offsets below.
//#define ENDER5_PLUS_BLTOUCH

#endif // CONFIGURATION_H
