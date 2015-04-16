--- Firmware/src/drivers/stm32/adc/adc.cpp	2015-04-07 12:50:25.798575940 +0530
+++ pandapilot_v4/src/drivers/stm32/adc/adc.cpp	2015-04-07 14:59:15.118231334 +0530
@@ -1,5 +1,5 @@
 /****************************************************************************
- *
+ *   Copyright (c) 2014 NavStik Development Team. All rights reserved.
  *   Copyright (C) 2012 PX4 Development Team. All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without
@@ -419,6 +419,10 @@
 		g_adc = new ADC((1 << 2) | (1 << 3) | (1 << 4) | 
 			(1 << 10) | (1 << 11) | (1 << 12) | (1 << 13) | (1 << 14) | (1 << 15));
 #endif
+#ifdef CONFIG_ARCH_BOARD_NAVSTIK_V1
+ 		/* XXX this hardcodes the default channel set for NAVSTIK - should be configurable */
+ 		g_adc = new ADC((1 << 1) | (1 << 11));
+#endif
 #ifdef CONFIG_ARCH_BOARD_AEROCORE
 		/* XXX this hardcodes the default channel set for AeroCore - should be configurable */
 		g_adc = new ADC((1 << 10) | (1 << 11) | (1 << 12) | (1 << 13));
