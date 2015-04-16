--- Firmware/src/modules/mavlink/mavlink_main.cpp	2015-04-07 12:50:25.894575936 +0530
+++ pandapilot_v4/src/modules/mavlink/mavlink_main.cpp	2015-04-07 16:24:08.898004231 +0530
@@ -89,7 +89,7 @@
 #endif
 static const int ERROR = -1;
 
-#define DEFAULT_DEVICE_NAME			"/dev/ttyS1"
+#define DEFAULT_DEVICE_NAME			"/dev/ttyS2"
 #define MAX_DATA_RATE				20000	///< max data rate in bytes/s
 #define MAIN_LOOP_DELAY 			10000	///< 100 Hz @ 1000 bytes/s data rate
 #define FLOW_CONTROL_DISABLE_THRESHOLD		40	///< picked so that some messages still would fit it.
