--- Firmware/src/drivers/navstik/module.mk	1970-01-01 05:30:00.000000000 +0530
+++ pandapilot_v4/src/drivers/navstik/module.mk	2015-04-07 14:57:40.278235562 +0530
@@ -0,0 +1,10 @@
+#
+# Interface driver for the NAVSTIK board
+#
+
+MODULE_COMMAND	 = fmu
+SRCS		 = fmu.cpp
+
+MODULE_STACKSIZE = 1200
+
+EXTRACXXFLAGS	= -Weffc++
