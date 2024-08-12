#ifndef BATTERY_H
#define BATTERY_H

// Function declarations
int Batterytemprange(float temp);
int Batterysoc(float soc);
int Batterychargerate(float chargeRate);
int batteryIsOk(float temp, float soc, float chargeRate);

#endif // BATTERY_H

