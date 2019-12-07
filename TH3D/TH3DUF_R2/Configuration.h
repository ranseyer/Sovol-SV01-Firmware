/**
* ************** How to use this firmware - READ THIS, yes actually read this. *********************************
*
* Uncomment means removing the 2 // in front of #define.
* 
* FLASHING NOTES:
* ALL slicers (Simplify3D, Cura, Slic3r, etc) or anything else that connects to the COM port must be CLOSED for the firmware to be flash.
* If anything is connected to the COM port when flashing it will fail, typically "access denied" is listed in the error section of the Arduino IDE.
* You MUST use the Included Arduino IDE to flash the firmware if on Windows and if you are on a Mac or Linux follow the guide in our knowledgebase to setup your IDE to work with the firmware.
* 
* EZABL SETUP NOTES: 
* If you have EZABL uncomment the mount you are using with the printer. 
* If you have a custom/unsupported mount uncomment #define CUSTOM_MOUNT and enter your offsets 
* below in the CUSTOM MOUNT section. Refer to the EZABL guide to get your offsets.
* 
* STEP 1:
* Select the correct board from the tools menu for the printer you are flashing.
* Read the printer title for the model you are flashing, it will show what board to select.
*
* STEP 2:
* Uncomment the printer you want to flash. The printers are sorted A-Z by brand name.
* If you are using the Creality Dual board with the Ender 3/Ender 5/CR-20 then read the specific section below in that printer section on how to do this.
*
* STEP 3: 
* Select the COM port your printer is on from the Tools menu. If you do not see the COM port try
* downloading the latest drivers from the manufacturer or TH3D site on our knowledgebase.
* 
* STEP 4:
* Verify you have the correct board selected, printer model uncommented, and if you are using EZOUT and/or EZABL
* the lines you need to use them are also uncommented.
*
* STEP 5:
* Once you have your settings verified click the arrow in the upper left to upload to the board.
*
* STEP 6:
* Reset your eeprom. You can send M502 then M500 to reset the EEPROM OR on the printer LCD go to 
* Control > Reset EEPROM to clear out the EEPROM to defaults.
*
* BOOTLOADER FLASHING NOTES:
* For flashing your bootloader with an Uno make sure to select Arduino as ISP for the programmer
* 
* There are other features in the TH3D Extras section so look there for V6 Hotend,
* Bootscreen settings, Titan Extruder and more. You only need to edit this file.
* 
* ERROR NOTES:
* If you get errors flashing READ the message it gives you and double check that you selected
* the correct board from the Tools menu in Arduino. Turn off any AV systems and reboot the computer.
* 
* COMMUNITY REQUESTED FEATURES NOTE:
* All features in the community requested features section are provided as-is with no support from TH3D.
*/

#ifndef CONFIGURATION_H
#define CONFIGURATION_H
#define CONFIGURATION_H_VERSION 010109

//===========================================================================
//============================ TH3D Configuration ===========================
//===========================================================================

// ONLY UNCOMMENT THINGS IN ONE PRINTER SECTION!!! IF YOU HAVE MULTIPLE MACHINES FLASH THEM ONE AT A TIME.

//===========================================================================
// SOVOL SV01 Options - Select 'Arduino Mega 2560' from Tools > Board
//===========================================================================
#define SOVOL_SV01

// EZABL Probe Mounts
//#define SV01_OEM_MOUNT
#define CUSTOM_PROBE


//===========================================================================
// ***********************  MKS Gen L Based Printer   ***********************
// *************  Select 'Arduino Mega 2560' from Tools > Board *************
// **** Please refer to the TH3D MKS Gen L Documentation Guide for Setup ****
// *Endstop/Motors/Homing: changing from 0 to 1 inverts the logic/direction *
// ****** We have a detailed guide here: http://mksguide.th3dstudio.com *****
// ******** Use the code GENLGUIDEHALFOFF for 50% off our PDF Guide *********
//===========================================================================

//#define MKS_PRINTER

// Build Area Size Settings
#define MKS_X_SIZE 300
#define MKS_Y_SIZE 300
#define MKS_Z_SIZE 300

// Endstop Logic Settings
#define MKS_X_ENDSTOP 0
#define MKS_Y_ENDSTOP 0
#define MKS_Z_ENDSTOP 0

// Homing Settings
#define X_HOME_LOCATION 0
#define Y_HOME_LOCATION 0

// Steps per MM Settings
#define MKS_X_STEPS 80
#define MKS_Y_STEPS 80
#define MKS_Z_STEPS 400
#define MKS_E0_STEPS 95
#define MKS_E1_STEPS 95

// Motor Direction Settings
#define MKS_X_DIRECTION 0
#define MKS_Y_DIRECTION 0
#define MKS_Z_DIRECTION 0
#define MKS_E0_DIRECTION 0
#define MKS_E1_DIRECTION 0

// Stepper Driver Settings
#define MKS_X_DRIVER TMC2208_STANDALONE
#define MKS_Y_DRIVER TMC2208_STANDALONE
#define MKS_Z_DRIVER A4988
#define MKS_E0_DRIVER A4988
#define MKS_E1_DRIVER A4988

// Thermistor Settings (uses standard Marlin Thermistor numbers)
#define MKS_E_THERMISTOR 1
#define MKS_BED_THERMISTOR 1

// EZOut V2 Filament Sensor Settings
//#define MKS_EZOUT_V2_X_PLUS
//#define MKS_EZOUT_V2_Y_PLUS

// EZABL & ABL Probe Settings
// If you are using a pre-supported mount that is available already then uncomment it above in that printer section.
// For example if you are using CR-10 with the OEM mount then scroll up and uncomment the #define CR10_OEM line like you would normally.
// If you are using a probe mount that is not supported then use the CUSTOM_PROBE option and enter in your probe offsets below.
//#define CUSTOM_PROBE

// If you are using a single hotend with the 2 into 1 adapter OR mixing nozzle uncomment the below line
//#define DUAL_EXTRUDER_SINGLE_HOTEND

// If you are using a dual hotend with dual nozzles uncomment the below line
//#define DUAL_HOTEND_DUAL_NOZZLES

// While recommend the 12864 LCD we carry as it has a SD slot you can use a CR-10/Ender 3/Ender 5 LCD connected to EXP1 (rotate 180 degrees instead of aligning the pin)
// Uncomment the below line to use the single cable Creality (Melzi) LCD instead of a standard 12864 LCD
//#define CR10_STOCKDISPLAY

// If your lcd knob moves the wrong direction uncomment the below line to reverse it
//#define MKS_KNOB_REVERSE

// If you are using the RepRap 2004 LCD Controller Use the below line to enable that display
//#define REPRAP_DISCOUNT_SMART_CONTROLLER

//===========================================================================
// *************************  END PRINTER SECTION   *************************
//===========================================================================

//===========================================================================
// EZABL Advanced Settings
//===========================================================================

// If you want more or less EZABL probe points change the number below (only used if EZABL enabled)
// Default is 3 which gives you 3x3 grid for a total of 9 points. STICK WITH ODD NUMBERS
#define EZABL_POINTS 3

// If you want to probe in on the bed more than 15mm change this below. 
// Do not use 30mm for the Standard CR-10/s or the S4 as you will be on the bed screws.
// Try 50mm to avoid the binder clips if you use them. Do NOT go under 15mm here.
// You can do down to 10mm on the Wanhao i3 since it cannot print on the entire bed.
// You can do down to 5mm on the Wanhao i3 Mini since it cannot print on the entire bed.
// (only used if EZABL enabled)
#define EZABL_PROBE_EDGE 15

// If you have issues with your machine running the faster probe setting disable the #define EZABL_FASTPROBE below.
// DO NOTE: Most machines will work with the fast probe enabled. Use M48 to verify accuracy.
#define EZABL_FASTPROBE

// This will disable the XYE motors during probing. Can be useful if you have stepper motors causing interference issues with the EZABL sensor.
//#define PROBING_MOTORS_OFF

// Heaters will stay on during probing - only use if directed to by support. Do not use on AC beds.
//#define HEATERS_ON_DURING_PROBING

// Letting the bed heat recover between probes can increase accuracy due to the bed warping during cooling/heating
// Enabling the below option will let the bed get back to temperature during probing but will increase probing times.
//#define WAIT_FOR_BED_HEATER

// If you want a more granular control over the babystepping uncomment the below line.
// This will make the adjustment finer than the standard setting.
//#define FINE_BABYSTEPPING

// This will extrapolate the implied tilt of the bed outside of the probe area. Do not comment out unless directed by support.
#define EZABL_OUTSIDE_GRID_COMPENSATION

// Does your machine make weird noises/vibrations when it is probing the mesh? Enable this to slow down the speed between probe points.
//#define SLOWER_PROBE_MOVES

//================================================================================
// IF YOU HAVE A CUSTOM PROBE MOUNT OR ONE THAT IS NOT PRE-SUPPORTED UNCOMMENT THE
// CUSTOM_PROBE OPTION IN YOUR PRINTER SECTION AND ENTER YOUR PROBE LOCATION BELOW
//================================================================================
#if ENABLED(CUSTOM_PROBE)
  /**
  *   Z Probe to nozzle (X,Y) offset, relative to (0, 0).
  *   X and Y offsets must be whole numbers.
  *
  *   In the following example the X and Y offsets are both positive:
  *   #define X_PROBE_OFFSET_FROM_EXTRUDER 10
  *   #define Y_PROBE_OFFSET_FROM_EXTRUDER 10
  *
  *      +-- BACK ---+
  *      |           |
  *    L |    (+) P  | R <-- probe (10,10)
  *    E |           | I
  *    F | (-) N (+) | G <-- nozzle (0,0)
  *    T |           | H
  *      |    (-)    | T
  *      |           |
  *      O-- FRONT --+
  *    (0,0)
  */
  #define X_PROBE_OFFSET_FROM_EXTRUDER -33  // X offset: -left  +right  [of the nozzle]
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -11  // Y offset: -front +behind [the nozzle]
#endif

//===========================================================================
//******************** EXTRA FEATURES AND TWEAKS ****************************
//===========================================================================

// EXTRUDER SETTINGS -------------------------------
// Use to set custom esteps and/or reverse your E Motor direction if you are installing an extruder that needs the direction reversed.
// If you reversed the wiring on your E motor already (like the Bondtech Guide says to do) then you do not need to reverse it in the firmware here.

// If you want to change the Esteps for your printer you can uncomment the below line and set CUSTOM_ESTEPS_VALUE to what you want - USE WHOLE NUMBERS ONLY
// This option sets the esteps from the CUSTOM_ESTEPS_VALUE line below and does NOT reverse the E motor direction.
//#define CUSTOM_ESTEPS
#define CUSTOM_ESTEPS_VALUE 999

// If you are using an TH3D Tough Extruder or E3D Titan Extruder uncomment the below line to setup the firmware to the correct steps and direction. Also applicable to Tough Direct or Titan Aero setups.
// This option sets the esteps from the TITAN_EXTRUDER_STEPS line below and reverses the E motor direction.
//#define TITAN_EXTRUDER
#define TITAN_EXTRUDER_STEPS 463

// DUAL HOTEND SETTINGS ----------------------------

// This is the distance between each nozzle tip when using a dual hotend like the TH3D Tough Dual Hotend or the E3D Chimera or Dual hotends.
// This setting only applies to printers using a dual extruder board.
#define DUAL_HOTEND_X_DISTANCE 18.0

// HOTEND THERMISTOR SETTINGS ----------------------

// If you are using an E3D V6 Hotend with their cartridge thermistor (not glass version) uncomment the below line.
//#define V6_HOTEND

// If you are using a Tough Hotend from TH3D or any thermistors TH3D sells for your hotend uncomment the below line.
//#define TH3D_HOTEND_THERMISTOR

// If you are using a known hotend thermistor value uncomment the below 2 lines and enter the thermistor number replacing the X after the #define KNOWN_HOTEND_THERMISTOR_VALUE
//#define KNOWN_HOTEND_THERMISTOR
//#define KNOWN_HOTEND_THERMISTOR_VALUE X

// BED THERMISTOR SETTINGS -------------------------

// If you are using a thermistor TH3D sells for your bed uncomment the below line.
//#define TH3D_BED_THERMISTOR

// If you are using a Keenovo with SSR and the Keenovo temperature sensor uncomment the below line.
//#define KEENOVO_TEMPSENSOR

// If you are using a known bed thermistor value uncomment the below 2 lines and enter the thermistor number replacing the X after the #define KNOWN_BED_THERMISTOR_VALUE
//#define KNOWN_BED_THERMISTOR
//#define KNOWN_BED_THERMISTOR_VALUE X

// THERMAL RUNAWAY PROTECTION SETTINGS -------------

// If you want to make thermal protection periods less or more adjust below. The number is in seconds.
// If you are getting false thermal runaway then increase the protection time. Do not make it over 300 for either setting.
#define HOTEND_THERMAL_PROTECTION_TIME 60
#define BED_THERMAL_PROTECTION_TIME 180

// BED SETTINGS ------------------------------------

// If you want PID tuning on your bed you can enable the below line. But PID on a bed is not typically needed. By default BED PID is disabled.
// This will be disabled when using automatic or manual mesh leveling with a 1284p board due to memory limitations.
//#define PIDBED_ENABLE

// If you are using an AC bed with a standalone controller (Keenovo) uncomment the below line to disable the heated bed in the firmware
//#define AC_BED

// Stock bed max is 120C for this firmware. Enable this to allow temps up to 150C. Your bed must support this temp for it to achieve the higher temperatures.
//#define BED_HIGHTEMP

// MISC --------------------------------------------

// If you have a 5015 fan that whines when under 100% speed uncomment the below line.
//#define FAN_FIX

// Use your own printer name
//#define USER_PRINTER_NAME "CHANGE ME" 

// If your printer is homing to the endstops hard uncomment this to change the homing speed/divisor to make it less aggressive.
//#define SLOWER_HOMING

// BOOT SCREEN OPTIONS -----------------------------

// Use TinyMachines Bootscreen instead of TH3D
//#define TM3D_BOOT

// Disable Bootscreen completely
//#define DISABLE_BOOT

//===========================================================================
//****************** COMMUNITY REQUESTED FEATURES ***************************
//===========================================================================

// HOME OFFSET ADJUSTMENT --------------------------
// If you need to adjust your XY home offsets from defaults then you can uncomment the HOME_ADJUST_LOCATION line below and enter your
// custom XY offsets. This is provided for convenience and is unsupported with included product support.
// How to use - measure (home XY then jog using the LCD 1mm at a time) the X and Y distance the nozzle is off
// the build plate and then put those as NEGATIVE values below, positive values will NOT work (move your endstops to fix a positve offset).
//#define HOME_ADJUST
#define X_HOME_ADJUST_LOCATION -10
#define Y_HOME_ADJUST_LOCATION -10

// LINEAR ADVANCE ----------------------------------
// See here on how to use Linear Advance: http://marlinfw.org/docs/features/lin_advance.html
// NOTE: Linear Advance does NOT work with the Creality Silent boards or the CR-10 V2.
//#define LINEAR_ADVANCE
// Change the K Value here or use M900 KX.XX in your starting code (recommended).
#define LINEAR_ADVANCE_K 0
// NOTE: If using linear advance along with EZABL on a printer with 1284p some Control > Motion menus will not be displayed due to space restrictions.
// You can still change these via GCode commands.

// BL TOUCH ----------------------------------------
// If you want to use the BL-Touch install your EZOut Board, uncomment the 2 lines below, uncomment the CUSTOM_PROBE option in your printer section, 
// and then enter your probe offsets in the CUSTOM_PROBE section above. The Pin 27 boards on other ecommerce sites are clones of our original EZOut.
// If you want to support the people that originally came up with the board you can get our EZOut breakout board here: http://EZOut.TH3DStudio.com
// Sales from our shop allow us to allocate time for community firmware development at no charge to you. <3
//
//#define BLTOUCH
// If you are having issues with the probe not deploying/stowing correctly enable the below BLTOUCH_FORCE_SW_MODE
//#define BLTOUCH_FORCE_SW_MODE
// For V3.0 or 3.1: Set default mode to 5V mode at Marlin startup.
//#define BLTOUCH_SET_5V_MODE
// Here is where you set your servo pin. EZOut Servo Pin Numbers: Anet(with 2004LCD)/Ender3/5/CR-10 - 27, Anet(with 12864LCD)/Ender 2 - 29. For 2560 boards look for the pin you connected the servo wire to and enter below.
//#define SERVO0_PIN 27
//
// NOTE: On 1284p boards due to space limitations and the large amount of code the BLTouch requires for the LCD Menus
// the Bootscreen and some Control > Motion menus will not be displayed due to space restrictions
// The BL Touch is NOT supported on the Wanhao i3 Plus, use the ADVi3++ Firmware instead if you want to use a BL Touch.

// MANUAL MESH LEVELING ----------------------------
// If you want to use manual mesh leveling you can enable the below option. This is for generating a MANUAL mesh WITHOUT a probe. 
// Mesh Bed Leveling Documentation: http://marlinfw.org/docs/gcode/G029-mbl.html If used with a 1284P board the bootscreen will be disabled to save space.
// NOTE: If you want to automate the leveling process our EZABL kits do this for you. Check them out here: http://EZABL.TH3DStudio.com
//#define MANUAL_MESH_LEVELING

// POWER LOSS RECOVERY -----------------------------
// Continue after Power-Loss feature will store the current state to the SD Card at the start of each layer
// during SD printing. If this is found at bootup it will ask you if you want to resume the print.
//
// NOTE: This feature causes excessive wear on your SD card. This will disable junction jerk,  SCurve Acceleration, and Linear Advance due to RAM limitations.
// Power Loss Recovery is NOT supported on the Wanhao i3 Plus at this time.
//#define POWER_LOSS_RECOVERY

// MOTION SETTINGS ---------------------------------
// There are 2 new acceleration/jerk controls available in this firmware that can result is better print quality and
// smoother movement. To try each out just enable them below.
// Junction Deviation is NOT supported on the Wanhao i3 Plus at this time.
//#define JUNCTION_DEVIATION_ON
//#define S_CURVE_ACCELERATION_ON

//================================================================================================
// Language - This is provided for convenience and is unsupported with included product support.
// We only test compile with English language. If you run into space issues disable some features.
//================================================================================================

/**
 * LCD LANGUAGE
 *
 * Select the language to display on the LCD. These languages are available:
 *
 *    en, an, bg, ca, cn, cz, cz_utf8, de, el, el-gr, es, eu, fi, fr, fr_utf8, gl,
 *    hr, it, kana, kana_utf8, nl, pl, pt, pt_utf8, pt-br, pt-br_utf8, ru, sk_utf8,
 *    tr, uk, zh_CN, zh_TW, test
 */

#define LCD_LANGUAGE de

#include "Configuration_beta.h"
#include "Configuration_backend.h"

#define UNIFIED_VERSION "TH3D U1.R2.18"

#endif // CONFIGURATION_H
