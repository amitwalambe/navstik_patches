--- Firmware/src/drivers/drv_rc_input.h	2015-04-07 12:50:25.782575941 +0530
+++ pandapilot_v4/src/drivers/drv_rc_input.h	2015-04-07 14:59:15.126231334 +0530
@@ -1,5 +1,5 @@
 /****************************************************************************
- *
+ *   Copyright (c) 2014 NavStik Development Team. All rights reserved.
  *   Copyright (c) 2012-2014 PX4 Development Team. All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without
@@ -61,7 +61,7 @@
  * Maximum number of R/C input channels in the system. S.Bus has up to 18 channels.
  */
 #define RC_INPUT_MAX_CHANNELS	18
-
+#define PWM_INPUT_CHANNELS      6    // NavStik has 6 PWM Inputs
 /**
  * Maximum RSSI value
  */
