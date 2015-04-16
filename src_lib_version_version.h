--- Firmware/src/lib/version/version.h	2015-04-07 12:50:25.878575936 +0530
+++ pandapilot_v4/src/lib/version/version.h	2015-04-07 14:57:40.358235559 +0530
@@ -1,5 +1,5 @@
 /****************************************************************************
- *
+ *   Copyright (c) 2014 NavStik Development Team. All rights reserved.
  *   Copyright (c) 2013 PX4 Development Team. All rights reserved.
  *   Author: Anton Babushkin <anton.babushkin@me.com>
  *
@@ -59,6 +59,10 @@
 #define	HW_ARCH "PX4FMU_V2"
 #endif
 
+#ifdef CONFIG_ARCH_BOARD_NAVSTIK_V1
+#define	HW_ARCH "NAVSTIK"
+#endif
+
 #ifdef CONFIG_ARCH_BOARD_AEROCORE
 #define	HW_ARCH "AEROCORE"
 #endif
