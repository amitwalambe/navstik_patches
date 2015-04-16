--- Firmware/src/drivers/drv_led.h	2015-04-07 12:50:25.782575941 +0530
+++ pandapilot_v4/src/drivers/drv_led.h	2015-04-07 14:59:15.130231333 +0530
@@ -1,5 +1,5 @@
 /****************************************************************************
- *
+ *   Copyright (c) 2014 NavStik Development Team. All rights reserved.
  *   Copyright (C) 2012 PX4 Development Team. All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without
@@ -51,6 +51,7 @@
 #define LED_RED			1	/* some boards have red rather than amber */
 #define LED_BLUE		0
 #define LED_SAFETY		2
+#define LED_GREEN		0	/* NAVSTIK board */ 
 
 #define LED_ON			_IOC(_LED_BASE, 0)
 #define LED_OFF			_IOC(_LED_BASE, 1)
