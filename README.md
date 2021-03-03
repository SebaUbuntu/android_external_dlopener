# dlopener

## A tool to test if a shared library is dlopen'ble (you should use this to check if all needed dependency libs are there)

# DO NOT SHIP IN A PRODUCTION BUILD

## How to build

-   Lunch your device
-   ```make dlopener``` for the system variant else ```make dlopener.vendor``` for the vendor binary (useful for devices with runtime isolation enabled)
