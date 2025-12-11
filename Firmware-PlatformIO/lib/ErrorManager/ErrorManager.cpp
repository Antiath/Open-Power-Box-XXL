#include "ErrorManager.h"
#include <Arduino.h>

const String ASCOM_err[30] = {
  "Out of index range",  //Err1: Switch number is out of range.
  "Out of value range",  //Err2: Switch value is out of range.
  "Unwritable",          //Err3: It is a sensor so it cannot be written to.
  "DC Switch Overcurrent",  //Err4: Overcurrent detected on individual DC switch, switch turned off.
  "DC Rail Overcurrent",        //Err5: Overcurrent detected on DC Rail, switch turned off.
  "PWM Switch Overcurrent",        //Err6: Overcurrent detected on individual PWM switch, switch turned off.
  "DC bank Overcurrent",                        //Err7:Global DC budget filled. Switching off switches until under budget. See current limiter function.
  "PWM bank Overcurrent",                        //Err8:Global PWM budget filled. Switching off switches until under budget. See current limiter function.
  "Global current budget exceeded",                        //Err9:Global current budget filled. Switching off switches until under budget. See current limiter function.
  "Undervoltage",                        //Err10:Undervoltage detected, cannot turn switches on.
  "",                        //Err11:
  "",                        //Err12:
  "",                        //Err13:
  "",                        //Err14:
  "",                        //Err15:
  "",                        //Err16:
  "",                        //Err17:
  "",                        //Err18:
  "",                        //Err19:
  "",                        //Err20:
  "",                        //Err21:
  "",                        //Err22:
  "",                        //Err23:
  "",                        //Err24:
  "",                        //Err25:
  "",                        //Err26:
  "",                        //Err27:
  "",                        //Err28:
  "",                        //Err29:
  ""                         //Err30:
};

 bool ASCOM_err_flag[30];