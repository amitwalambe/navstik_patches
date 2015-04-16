--- Firmware/src/systemcmds/i2c/i2c.c	2015-04-07 12:50:25.926575934 +0530
+++ pandapilot_v4/src/systemcmds/i2c/i2c.c	2015-04-07 14:57:40.402235557 +0530
@@ -1,5 +1,5 @@
 /****************************************************************************
- *
+ *   Copyright (c) 2014 NavStik Development Team. All rights reserved.
  *   Copyright (c) 2012, 2013 PX4 Development Team. All rights reserved.
  *   Author: Lorenz Meier <lm@inf.ethz.ch>
  *
@@ -57,12 +57,14 @@
 #include "systemlib/systemlib.h"
 #include "systemlib/err.h"
 
+#ifdef CONFIG_ARCH_BOARD_PX4FMU_V1
 #ifndef PX4_I2C_BUS_ONBOARD
 #  error PX4_I2C_BUS_ONBOARD not defined, no device interface
 #endif
 #ifndef PX4_I2C_OBDEV_PX4IO
 #  error PX4_I2C_OBDEV_PX4IO not defined
 #endif
+#endif
 
 __EXPORT int i2c_main(int argc, char *argv[]);
 
@@ -73,7 +75,7 @@
 int i2c_main(int argc, char *argv[])
 {
 	/* find the right I2C */
-	i2c = up_i2cinitialize(PX4_I2C_BUS_ONBOARD);
+	i2c = up_i2cinitialize(NAVSTIK_I2C_BUS_SENSORS);
 
 	if (i2c == NULL)
 		errx(1, "failed to locate I2C bus");
@@ -81,13 +83,13 @@
 	usleep(100000);
 
 	uint8_t buf[] = { 0, 4};
-	int ret = transfer(PX4_I2C_OBDEV_PX4IO, buf, sizeof(buf), NULL, 0);
+	int ret = transfer(NAVSTIK_I2C_BUS_SENSORS, buf, sizeof(buf), NULL, 0);
 
 	if (ret)
 		errx(1, "send failed - %d", ret);
 
 	uint32_t val;
-	ret = transfer(PX4_I2C_OBDEV_PX4IO, NULL, 0, (uint8_t *)&val, sizeof(val));
+	ret = transfer(NAVSTIK_I2C_BUS_SENSORS, NULL, 0, (uint8_t *)&val, sizeof(val));
 	if (ret)
 		errx(1, "recive failed - %d", ret);
 
