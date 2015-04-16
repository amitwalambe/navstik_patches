--- Firmware/src/drivers/drv_gpio.h	2015-04-07 12:50:25.782575941 +0530
+++ pandapilot_v4/src/drivers/drv_gpio.h	2015-04-07 17:46:53.537782887 +0530
@@ -1,5 +1,5 @@
 /****************************************************************************
- *
+ *   Copyright (c) 2014 NavStik Development Team. All rights reserved.
  *   Copyright (C) 2012 PX4 Development Team. All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without
@@ -42,6 +42,33 @@
 
 #include <sys/ioctl.h>
 
+
+#ifdef CONFIG_ARCH_BOARD_NAVSTIK_V1
+/*
+ * NAVSTIK GPIO numbers.
+ *
+ * For shared pins, alternate function 1 selects the non-GPIO mode 
+ * (USART2, CAN2, etc.)
+ */
+# define GPIO_EXT_1		(1<<0)		/**< high-power GPIO 1 */
+# define GPIO_EXT_2		(1<<1)		/**< high-power GPIO 1 */
+# define GPIO_MULTI_1		(1<<2)		/**< USART2 CTS */
+# define GPIO_MULTI_2		(1<<3)		/**< USART2 RTS */
+# define GPIO_MULTI_3		(1<<4)		/**< USART2 TX */
+# define GPIO_MULTI_4		(1<<5)		/**< USART2 RX */
+# define GPIO_CAN_TX		(1<<6)		/**< CAN2 TX */
+# define GPIO_CAN_RX		(1<<7)		/**< CAN2 RX */
+
+/**
+ * Default GPIO device - other devices may also support this protocol if
+ * they also export GPIO-like things.  This is always the GPIOs on the
+ * main board.
+ */
+# define NAVSTIKFMU_DEVICE_PATH	"/dev/navstik"
+#endif
+
+#include <sys/ioctl.h>
+
 #ifdef CONFIG_ARCH_BOARD_PX4FMU_V1
 /*
  * PX4FMU GPIO numbers.
@@ -112,7 +139,7 @@
 
 #if !defined(CONFIG_ARCH_BOARD_PX4IO_V1) && !defined(CONFIG_ARCH_BOARD_PX4IO_V2)  && \
 	!defined(CONFIG_ARCH_BOARD_PX4FMU_V1) && !defined(CONFIG_ARCH_BOARD_PX4FMU_V2) && \
-	!defined(CONFIG_ARCH_BOARD_AEROCORE)
+	!defined(CONFIG_ARCH_BOARD_AEROCORE) && !defined(CONFIG_ARCH_BOARD_NAVSTIK_V1)
 # error No CONFIG_ARCH_BOARD_xxxx set
 #endif
 /*
