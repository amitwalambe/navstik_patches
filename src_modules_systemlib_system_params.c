--- Firmware/src/modules/systemlib/system_params.c	2015-04-07 12:50:25.914575935 +0530
+++ pandapilot_v4/src/modules/systemlib/system_params.c	2015-04-09 12:07:12.651942545 +0530
@@ -1,6 +1,6 @@
 /****************************************************************************
- *
- *   Copyright (c) 2013-2015 PX4 Development Team. All rights reserved.
+ *   Copyright (c) 2014 NavStik Development Team. All rights reserved.
+ *   Copyright (c) 2013 PX4 Development Team. All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without
  * modification, are permitted provided that the following conditions
@@ -52,9 +52,8 @@
 /**
  * Automatically configure default values.
  *
- * Set to 1 to reset parameters on next system startup (setting defaults).
- * Platform-specific values are used if available.
- * RC* parameters are preserved.
+ * Set to 1 to set platform-specific parameters to their default
+ * values on next system startup. 
  *
  * @min 0
  * @max 1
@@ -71,7 +70,7 @@
 * @max 1
 * @group System
 */
-PARAM_DEFINE_INT32(SYS_USE_IO, 1);
+PARAM_DEFINE_INT32(SYS_USE_IO, 0);
 
 /**
 * Set restart type
@@ -83,29 +82,3 @@
 * @group System
 */
 PARAM_DEFINE_INT32(SYS_RESTART_TYPE, 2);
-
-/**
-* Companion computer interface
-*
-* Configures the baud rate of the companion computer interface.
-* Set to zero to disable, set to 921600 to enable.
-* CURRENTLY ONLY SUPPORTS 921600 BAUD! Use extras.txt for
-* other baud rates.
-*
-* @min 0
-* @max 921600
-* @group System
-*/
-PARAM_DEFINE_INT32(SYS_COMPANION, 0);
-
-/**
-* Parameter version
-*
-* This monotonically increasing number encodes the parameter compatibility set.
-* whenever it increases parameters might not be backwards compatible and
-* ground control stations should suggest a fresh configuration.
-*
-* @min 0
-* @group System
-*/
-PARAM_DEFINE_INT32(SYS_PARAM_VER, 1);
