#include <stdio.h>
#include "battery.h"

// Function to check if the temperature is within range
int Batterytemprange(float temp) {  
  if(temp < 0 || temp > 45) {
    printf("Temperature out of range\n");
    return 0;
  }
  return 1;
}

// Function to check if the state of charge is within range
int Batterysoc(float soc) {  
  if(soc < 20 || soc > 80) {
    printf("State of Charge out of range\n");
    return 0;
  }
  return 1;
}

// Function to check if the charge rate is within range
int Batterychargerate(float chargeRate) {   
  if(chargeRate > 0.8) {
    printf("Charge Rate out of range\n");
    return 0;
  }
  return 1;
}

// Function to check if the battery is okay
int batteryIsOk(float temp, float soc, float chargeRate) {
    return ((Batterytemprange(temp)) && (Batterysoc(soc)) && (Batterychargerate(chargeRate)));
}

