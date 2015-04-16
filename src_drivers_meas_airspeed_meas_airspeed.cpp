--- Firmware/src/drivers/meas_airspeed/meas_airspeed.cpp	2015-04-07 12:50:25.790575940 +0530
+++ pandapilot_v4/src/drivers/meas_airspeed/meas_airspeed.cpp	2015-04-07 17:58:13.717752561 +0530
@@ -1,5 +1,5 @@
 /****************************************************************************
- *
+ *   Copyright (c) 2014 NavStik Development Team. All rights reserved.
  *   Copyright (c) 2013, 2014 PX4 Development Team. All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without
@@ -93,7 +93,7 @@
 
 /* I2C bus address is 1010001x */
 #define I2C_ADDRESS_MS4525DO	0x28	/**< 7-bit address. Depends on the order code (this is for code "I") */
-#define PATH_MS4525		"/dev/ms4525"
+#define PATH_MS4515		"/dev/ms4515"
 /* The MS5525DSO address is 111011Cx, where C is the complementary value of the pin CSB */
 #define I2C_ADDRESS_MS5525DSO	0x77	//0x77/* 7-bit address, addr. pin pulled low */
 #define PATH_MS5525		"/dev/ms5525"
@@ -109,7 +109,7 @@
 class MEASAirspeed : public Airspeed
 {
 public:
-	MEASAirspeed(int bus, int address = I2C_ADDRESS_MS4525DO, const char *path = PATH_MS4525);
+	MEASAirspeed(int bus, int address = NAVSTIK_I2C_OBDEV_MS4515, const char *path = PATH_MS4515);
 
 protected:
 
@@ -412,8 +412,8 @@
 		errx(1, "already started");
 	}
 
-	/* create the driver, try the MS4525DO first */
-	g_dev = new MEASAirspeed(i2c_bus, I2C_ADDRESS_MS4525DO, PATH_MS4525);
+	/* create the driver, try the MS4515DO first */
+	g_dev = new MEASAirspeed(i2c_bus, NAVSTIK_I2C_OBDEV_MS4515, PATH_MS4515);
 
 	/* check if the MS4525DO was instantiated */
 	if (g_dev == nullptr) {
@@ -423,7 +423,7 @@
 	/* try the MS5525DSO next if init fails */
 	if (OK != g_dev->Airspeed::init()) {
 		delete g_dev;
-		g_dev = new MEASAirspeed(i2c_bus, I2C_ADDRESS_MS5525DSO, PATH_MS5525);
+		g_dev = new MEASAirspeed(i2c_bus, NAVSTIK_I2C_OBDEV_MS4515, PATH_MS4515);
 
 		/* check if the MS5525DSO was instantiated */
 		if (g_dev == nullptr) {
@@ -437,7 +437,7 @@
 	}
 
 	/* set the poll rate to default, starts automatic data collection */
-	fd = open(PATH_MS4525, O_RDONLY);
+	fd = open(PATH_MS4515, O_RDONLY);
 
 	if (fd < 0) {
 		goto fail;
@@ -488,10 +488,10 @@
 	ssize_t sz;
 	int ret;
 
-	int fd = open(PATH_MS4525, O_RDONLY);
+	int fd = open(PATH_MS4515, O_RDONLY);
 
 	if (fd < 0) {
-		err(1, "%s open failed (try 'meas_airspeed start' if the driver is not running", PATH_MS4525);
+		err(1, "%s open failed (try 'meas_airspeed start' if the driver is not running", PATH_MS4515);
 	}
 
 	/* do a simple demand read */
@@ -548,7 +548,7 @@
 void
 reset()
 {
-	int fd = open(PATH_MS4525, O_RDONLY);
+	int fd = open(PATH_MS4515, O_RDONLY);
 
 	if (fd < 0) {
 		err(1, "failed ");
@@ -589,7 +589,7 @@
 {
 	warnx("usage: meas_airspeed command [options]");
 	warnx("options:");
-	warnx("\t-b --bus i2cbus (%d)", PX4_I2C_BUS_DEFAULT);
+	warnx("\t-b --bus i2cbus (%d)", NAVSTIK_I2C_BUS_SENSORS);
 	warnx("command:");
 	warnx("\tstart|stop|reset|test|info");
 }
@@ -597,7 +597,7 @@
 int
 meas_airspeed_main(int argc, char *argv[])
 {
-	int i2c_bus = PX4_I2C_BUS_DEFAULT;
+	int i2c_bus = NAVSTIK_I2C_BUS_SENSORS;
 
 	int i;
 
