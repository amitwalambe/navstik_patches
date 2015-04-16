--- Firmware/src/drivers/gps/gps.cpp	2015-04-07 12:50:25.786575941 +0530
+++ pandapilot_v4/src/drivers/gps/gps.cpp	2015-04-07 14:59:15.126231334 +0530
@@ -1,5 +1,5 @@
 /****************************************************************************
- *
+ *   Copyright (c) 2014 NavStik Development Team. All rights reserved.
  *   Copyright (c) 2013, 2014 PX4 Development Team. All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without
@@ -293,8 +293,8 @@
 
 		if (_fake_gps) {
 			_report_gps_pos.timestamp_position = hrt_absolute_time();
-			_report_gps_pos.lat = (int32_t)47.378301e7f;
-			_report_gps_pos.lon = (int32_t)8.538777e7f;
+			_report_gps_pos.lat = (int32_t)18.520510e7f;
+			_report_gps_pos.lon = (int32_t)73.856733;
 			_report_gps_pos.alt = (int32_t)1200e3f;
 			_report_gps_pos.timestamp_variance = hrt_absolute_time();
 			_report_gps_pos.s_variance_m_s = 10.0f;
