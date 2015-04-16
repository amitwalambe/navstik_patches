--- Firmware/makefiles/README.txt	2015-04-07 12:50:25.770575941 +0530
+++ pandapilot_v4/makefiles/README.txt	2015-04-07 14:57:40.254235563 +0530
@@ -1,15 +1,15 @@
-PX4 Build System
+NAVSTIK Build System
 ================
 
-The files in this directory implement the PX4 runtime firmware build system
-and configuration for the standard PX4 boards and software, in conjunction
+The files in this directory implement the NAVSTIK runtime firmware build system
+and configuration for the standard NAVSTIK boards and software, in conjunction
 with Makefile in the parent directory.
 
 ../Makefile
 
-	Top-level makefile for the PX4 build system. This makefile supports
+	Top-level makefile for the NAVSTIK build system. This makefile supports
 	building NuttX archives, as well as supervising the building of all
-	of the defined PX4 firmware configurations.
+	of the defined NAVSTIK firmware configurations.
 
 	Try 'make help' in the parent directory for documentation.
 
@@ -21,7 +21,7 @@
 	Builds modules, builtin command lists and the ROMFS (if configured).
 
 	This is the makefile directly used by external build systems; it can
-	be configured to compile modules both inside and outside the PX4
+	be configured to compile modules both inside and outside the NAVSTIK
 	source tree. When used in this mode, at least BOARD, MODULES and 
 	CONFIG_FILE must be set.
 
