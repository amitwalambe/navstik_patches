--- Firmware/src/drivers/stm32/drv_hrt.c	2015-04-07 12:50:25.798575940 +0530
+++ pandapilot_v4/src/drivers/stm32/drv_hrt.c	2015-04-07 14:59:15.114231334 +0530
@@ -1,5 +1,5 @@
 /****************************************************************************
- *
+ *   Copyright (c) 2014 NavStik Development Team. All rights reserved.
  *   Copyright (c) 2012, 2013 PX4 Development Team. All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without
@@ -59,6 +59,7 @@
 #include <errno.h>
 #include <string.h>
 
+#include <arch/board/board.h>
 #include <board_config.h>
 #include <drivers/drv_hrt.h>
 
@@ -85,7 +86,7 @@
 #elif HRT_TIMER == 2
 # define HRT_TIMER_BASE		STM32_TIM2_BASE
 # define HRT_TIMER_POWER_REG	STM32_RCC_APB1ENR
-# define HRT_TIMER_POWER_BIT	RCC_APB2ENR_TIM2EN
+# define HRT_TIMER_POWER_BIT	RCC_APB1ENR_TIM2EN
 # define HRT_TIMER_VECTOR	STM32_IRQ_TIM2
 # define HRT_TIMER_CLOCK	STM32_APB1_TIM2_CLKIN
 # if CONFIG_STM32_TIM2
@@ -103,7 +104,7 @@
 #elif HRT_TIMER == 4
 # define HRT_TIMER_BASE		STM32_TIM4_BASE
 # define HRT_TIMER_POWER_REG	STM32_RCC_APB1ENR
-# define HRT_TIMER_POWER_BIT	RCC_APB2ENR_TIM4EN
+# define HRT_TIMER_POWER_BIT	RCC_APB1ENR_TIM4EN
 # define HRT_TIMER_VECTOR	STM32_IRQ_TIM4
 # define HRT_TIMER_CLOCK	STM32_APB1_TIM4_CLKIN
 # if CONFIG_STM32_TIM4
@@ -112,7 +113,7 @@
 #elif HRT_TIMER == 5
 # define HRT_TIMER_BASE		STM32_TIM5_BASE
 # define HRT_TIMER_POWER_REG	STM32_RCC_APB1ENR
-# define HRT_TIMER_POWER_BIT	RCC_APB2ENR_TIM5EN
+# define HRT_TIMER_POWER_BIT	RCC_APB1ENR_TIM5EN
 # define HRT_TIMER_VECTOR	STM32_IRQ_TIM5
 # define HRT_TIMER_CLOCK	STM32_APB1_TIM5_CLKIN
 # if CONFIG_STM32_TIM5
