--- Firmware/src/drivers/boards/navstik-v1/module.mk	1970-01-01 05:30:00.000000000 +0530
+++ pandapilot_v4/src/drivers/boards/navstik-v1/module.mk	2015-04-07 14:57:40.262235563 +0530
@@ -0,0 +1,10 @@
+#
+# Board-specific startup code for the NAVSTIK
+#
+
+SRCS		 = navstik_can.c \
+		   navstik_init.c \
+		   navstik_pwm_servo.c \
+		   navstik_spi.c \
+		   navstik_usb.c \
+		   navstik_led.c
