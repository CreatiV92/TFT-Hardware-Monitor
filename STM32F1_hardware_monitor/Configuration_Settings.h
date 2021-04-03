/*
  --------------------------------------------------------------------------------------
    ___ ___  _  _ ___ ___ ___ _   _ ___    _ _____ ___ ___  _  _
   / __/ _ \| \| | __|_ _/ __| | | | _ \  /_\_   _|_ _/ _ \| \| |
  | (_| (_) | .` | _| | | (_ | |_| |   / / _ \| |  | | (_) | .` |
   \___\___/|_|\_|_| |___\___|\___/|_|_\/_/ \_\_| |___\___/|_|\_|
     ___  ___ _____ ___ ___  _  _ ___
    / _ \| _ \_   _|_ _/ _ \| \| / __|
   | (_) |  _/ | |  | | (_) | .` \__ \
    \___/|_|   |_| |___\___/|_|\_|___/

  --------------------------------------------------------------------------------------
*/


/* Debug Screen, Update Erasers, */
//#define Debug
//-------------------------------------------------------

/* Uncomment your CPU,*/
#define AMD_CPU
//#define INTEL_CPU

/* Uncomment your GPU,*/
#define NVIDIA_GRAPHICS
//#define AMD_GRAPHICS

int drt = 0;           // (set display rotation 0, 1 = (0, 90 degrees))

//-------------------------------------------------------

/* CPU & GPU Thermal Junction Max Temperature before throttling,*/
#define CPU_TJMAX 80   //  TJ Max for the AMD Ryzen 3700x = 95c
#define GPU_TJMAX 80   //  TJ Max for the Nvidia RTX3060ti = 93c

/* CPU & GPU Turbo/Boost Frequency Values */
#define CPU_BOOST 4000  //  AMD Ryzen 3700x = 3600MHz Turbo to 4400MHz
#define GPU_BOOST 1665  //  Palit Nvidia RTX3060ti Dual = 1410MHz Turbo to 1665MHz

/* Remove Specific GPU items Power/Fan RPM/Fan% */
#define enable_gpuPowerStats // Nvidia Specific???
#define enable_gpuFanStats%
//#define enable_gpuFanStatsRPM
//-------------------------------------------------------

#define noDegree      // lose the "o"
#define smallPercent  // Use small percent symbol

/* Characters to delete from the start of the CPU/GPU name eg: Remove "Intel" or "Nvidia" to save space*/
#define cpuNameStartLength 10
#define gpuNameStartLength 26

//-------------------------------------------------------

/* Uncomment below to enable custom triggers,*/

//#define CPU_OverClocked           // Uncomment if your CPU is overclocked with Turbo boost disabled, to stop "TURBO" indicator

#define enable_ShowFrequencyGain 

/* Uncomment only one of the below,*/
//#define ShowFrequencyGainMHz       // Show Overlock/Turbo & Boost Clock Frequency Gains in MHZ  eg: "+24MHz"
//#define ShowFrequencyGain%           // Show Overlock/Turbo & Boost Clock Frequency Gains in Percent  eg: "+24%"

#define enable_ThrottleIndicator  // Show TJMax Indicator 
#define enable_BoostIndicator     // Show CPU & GPU Turbo/Boost Indicator

//-------------------------------------------------------

/* Define your Backlight PWM, Uncomment only one choice, */

/* PWM Using a Static fixed value, connected direct to the MCU PIN*/
#define Static_PWM        // use Fixed value for PWM screen brightness control with NPN Transistor . initial start brightness

/* PWM connected direct to the MCU PIN*/
//#define Encoder_PWM     // use rotary encoder for PWM screen brightness control with no Transistor 3.3v . initial start brightness

/* PWM Using a Rotary Encoder with a PNP transistor*/
/* 3906 PNP Transitor - VCC ((E)Emitter) - ((B)Base) MCU PIN Through Series Resistor 1k+ ((C)Collector)  TFT Back Light+ */
//#define Encoder_PWM_PNP // use rotary encoder for PWM screen brightness control with NPN Transistor 5v.

//-------------------------------------------------------

/* Direct MCU connection start-up level. Predefined Brightness Start-UP Level,*/
#ifdef Static_PWM
int TFT_brightness = 245; // 0 - 255
#endif

/* Do not adjust, it will affect the GUI % value */
#ifdef Encoder_PWM
int TFT_brightness = 100;

#endif
/* Do not adjust, it will affect the GUI % value */
#ifdef Encoder_PWM_PNP
int TFT_brightness = 155;
#endif

//-------------------------------------------------------

/* Uncomment below to blank the screen on serial timeout to retain info eg: PC crash fault diagnostics  */
#define enableActivityChecker

/* How long the display takes to timeout due to inactive serial data from the windows application */
#define lastActiveDelay 10000

//------------------------------------------------------------------------------------------------------------


/* Display screen rotation  0, 1, 2 or 3 = (0, 90, 180 or 270 degrees)*/
int ASPECT = 0; //Do not adjust,

/* Debounce Rotary Encoder Button,Sometimes it gets caught during a screen refresh and doesnt change*/
int debounceEncButton = 200; //  Use a 0.1uf/100nf/(104) ceramic capacitor from button Pin to GND and set at "0"

/* Delay screen event, to stop screen data corruption ESP8622 use 25, most others 5 will do*/
int Serial_eventDelay = 5; //
