#include <stdbool.h>

bool isBatteryTemperatureOk(float temperature) {
    return temperature >= 0 && temperature <= 45;
}

bool isBatteryStateOfChargeOk(float soc) {
    return soc >= 20 && soc <= 80;
}

bool isBatteryChargeRateOk(float chargeRate) {
    return chargeRate <= 0.8;
}

bool batteryIsOk(float temperature, float soc, float chargeRate) {
    return isBatteryTemperatureOk(temperature) &&
           isBatteryStateOfChargeOk(soc) &&
           isBatteryChargeRateOk(chargeRate);
}


