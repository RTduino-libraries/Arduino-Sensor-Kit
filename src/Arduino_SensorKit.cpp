#include "Arduino_SensorKit.h"

//Declare component's classes
U8X8_SSD1306_128X64_NONAME_HW_I2C Oled(U8X8_PIN_NONE, U8X8_PIN_NONE, U8X8_PIN_NONE);
//DHT Environment(DHTPIN, DHTTYPE);
SensorKit_LIS3DHTR Accelerometer;
SensorKit_BMP280 Pressure;
