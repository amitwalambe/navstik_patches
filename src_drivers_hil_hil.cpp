--- Firmware/src/drivers/hil/hil.cpp	2015-04-07 12:50:25.786575941 +0530
+++ pandapilot_v4/src/drivers/hil/hil.cpp	2015-04-07 14:59:15.126231334 +0530
@@ -1,5 +1,5 @@
 /****************************************************************************
- *
+ *   Copyright (c) 2014 NavStik Development Team. All rights reserved.
  *   Copyright (c) 2012-2014 PX4 Development Team. All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without
@@ -167,7 +167,7 @@
 	_t_armed(-1),
 	_t_outputs(0),
 	_num_outputs(0),
-	_primary_pwm_device(false),
+	_primary_pwm_device(true),
 	_task_should_exit(false),
 	_armed(false),
 	_mixers(nullptr)
