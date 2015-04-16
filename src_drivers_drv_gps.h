--- Firmware/src/drivers/drv_gps.h	2015-04-07 12:50:25.782575941 +0530
+++ pandapilot_v4/src/drivers/drv_gps.h	2015-04-07 14:59:15.130231333 +0530
@@ -1,5 +1,5 @@
 /****************************************************************************
- *
+ *   Copyright (c) 2014 NavStik Development Team. All rights reserved.
  *   Copyright (C) 2012 PX4 Development Team. All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without
@@ -49,7 +49,7 @@
 #include "drv_orb_dev.h"
 
 #ifndef GPS_DEFAULT_UART_PORT
-#define GPS_DEFAULT_UART_PORT "/dev/ttyS3"
+#define GPS_DEFAULT_UART_PORT "/dev/ttyS1"
 #endif
 
 #define GPS0_DEVICE_PATH	"/dev/gps0"
