#ifndef _BOARD_H_
#define _BOARD_H_

/*
 * Setup for RobotDyn BlackPill F303CC board.
 */

/*
 * Board identifier.
 */
#define BOARD_ROBOTDYN
#define BOARD_NAME                  "RobotDyn BlackPill F303CC CAN to USB board"

/*
 * Board oscillators-related settings.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                0U
#endif

#define STM32_LSEDRV                (3U << 3U)

#define STM32_HSECLK                8000000U

/*
 * MCU type as defined in the ST header.
 */
#define STM32F303xC

/*
 * IO pins assignments.
 */
#define GPIOA_USER_BUTTON           0U // active high
#define GPIOA_CAN_SILENT            1U // high: silent mode, low: normal mode (driver active)
#define GPIOA_V_BUS_SENSE           2U
#define GPIOA_PIN3                  3U
#define GPIOA_PIN4                  4U
#define GPIOA_PIN5                  5U
#define GPIOA_PIN6                  6U
#define GPIOA_PIN7                  7U
#define GPIOA_PIN8                  8U
#define GPIOA_PIN9                  9U
#define GPIOA_PIN10                 10U
#define GPIOA_OTG_FS_DM             11U
#define GPIOA_OTG_FS_DP             12U
#define GPIOA_SWDIO                 13U
#define GPIOA_SWCLK                 14U
#define GPIOA_CAN1_PWR_LED          15U

#define GPIOB_PIN0                  0U
#define GPIOB_PIN1                  1U
#define GPIOB_PIN2                  2U
#define GPIOB_CAN1_STATUS_LED       3U
#define GPIOB_PIN4                  4U
#define GPIOB_V_BUS_ENABLE          5U // active high
#define GPIOB_UART1_TX              6U
#define GPIOB_UART1_RX              7U
#define GPIOB_CAN1_RX               8U
#define GPIOB_CAN1_TX               9U
#define GPIOB_PIN10                 10U
#define GPIOB_PIN11                 11U
#define GPIOB_STATUS_LED            12U
#define GPIOB_PIN13                 13U
#define GPIOB_PIN14                 14U
#define GPIOB_PIN15                 15U

#define GPIOC_PIN0                  0U
#define GPIOC_PIN1                  1U
#define GPIOC_PIN2                  2U
#define GPIOC_PIN3                  3U
#define GPIOC_PIN4                  4U
#define GPIOC_PIN5                  5U
#define GPIOC_PIN6                  6U
#define GPIOC_PIN7                  7U
#define GPIOC_PIN8                  8U
#define GPIOC_PIN9                  9U
#define GPIOC_PIN10                 10U
#define GPIOC_PIN11                 11U
#define GPIOC_PIN12                 12U
#define GPIOC_PIN13                 13U
#define GPIOC_PIN14                 14U
#define GPIOC_PIN15                 15U

#define GPIOD_PIN0                  0U
#define GPIOD_PIN1                  1U
#define GPIOD_PIN2                  2U
#define GPIOD_PIN3                  3U
#define GPIOD_PIN4                  4U
#define GPIOD_PIN5                  5U
#define GPIOD_PIN6                  6U
#define GPIOD_PIN7                  7U
#define GPIOD_PIN8                  8U
#define GPIOD_PIN9                  9U
#define GPIOD_PIN10                 10U
#define GPIOD_PIN11                 11U
#define GPIOD_PIN12                 12U
#define GPIOD_PIN13                 13U
#define GPIOD_PIN14                 14U
#define GPIOD_PIN15                 15U

#define GPIOE_PIN0                  0U
#define GPIOE_PIN1                  1U
#define GPIOE_PIN2                  2U
#define GPIOE_PIN3                  3U
#define GPIOE_PIN4                  4U
#define GPIOE_PIN5                  5U
#define GPIOE_PIN6                  6U
#define GPIOE_PIN7                  7U
#define GPIOE_PIN8                  8U
#define GPIOE_PIN9                  9U
#define GPIOE_PIN10                 10U
#define GPIOE_PIN11                 11U
#define GPIOE_PIN12                 12U
#define GPIOE_PIN13                 13U
#define GPIOE_PIN14                 14U
#define GPIOE_PIN15                 15U

#define GPIOF_PIN0                  0U
#define GPIOF_PIN1                  1U
#define GPIOF_PIN2                  2U
#define GPIOF_PIN3                  3U
#define GPIOF_PIN4                  4U
#define GPIOF_PIN5                  5U
#define GPIOF_PIN6                  6U
#define GPIOF_PIN7                  7U
#define GPIOF_PIN8                  8U
#define GPIOF_PIN9                  9U
#define GPIOF_PIN10                 10U
#define GPIOF_PIN11                 11U
#define GPIOF_PIN12                 12U
#define GPIOF_PIN13                 13U
#define GPIOF_PIN14                 14U
#define GPIOF_PIN15                 15U

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_2M(n)            (0U << ((n) * 2U))
#define PIN_OSPEED_25M(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_50M(n)           (2U << ((n) * 2U))
#define PIN_OSPEED_100M(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

/*
 * GPIOA setup:
 *
 * PA0  - PIN0                      (input pullup).
 * PA1  - GPIOA_CAN_SILENT          (output high).
 * PA2  - GPIOA_V_BUS_SENSE         (analog).
 * PA3  - GPIOA_PIN3                (input pullup).
 * PA4  - GPIOA_PIN4                (input pullup).
 * PA5  - GPIOA_PIN5                (input pullup).
 * PA6  - GPIOA_PIN6                (input pullup).
 * PA7  - GPIOA_PIN7                (input pullup).
 * PA8  - GPIOA_PIN8                (input pullup).
 * PA9  - GPIOA_PIN9                (input pullup).
 * PA10 - GPIOA_PIN10               (input pullup).
 * PA11 - GPIOA_OTG_FS_DM           (output opendrain low).
 * PA12 - GPIOA_OTG_FS_DP           (output opendrain low).
 * PA13 - GPIOA_SWDIO               (alternate 0).
 * PA14 - GPIOA_SWCLK               (alternate 0).
 * PA15 - GPIOA_CAN1_PWR_LED        (output low).
 */
#define VAL_GPIOA_MODER             (PIN_MODE_INPUT(GPIOA_USER_BUTTON) | \
                                     PIN_MODE_OUTPUT(GPIOA_CAN_SILENT) | \
                                     PIN_MODE_ANALOG(GPIOA_V_BUS_SENSE) | \
                                     PIN_MODE_ALTERNATE(GPIOA_PIN3) | \
                                     PIN_MODE_INPUT(GPIOA_PIN4) | \
                                     PIN_MODE_INPUT(GPIOA_PIN5) | \
                                     PIN_MODE_INPUT(GPIOA_PIN6) | \
                                     PIN_MODE_INPUT(GPIOA_PIN7) | \
                                     PIN_MODE_INPUT(GPIOA_PIN8) | \
                                     PIN_MODE_INPUT(GPIOA_PIN9) | \
                                     PIN_MODE_INPUT(GPIOA_PIN10) | \
                                     PIN_MODE_ALTERNATE(GPIOA_OTG_FS_DM) | \
                                     PIN_MODE_ALTERNATE(GPIOA_OTG_FS_DP) | \
                                     PIN_MODE_ALTERNATE(GPIOA_SWDIO) | \
                                     PIN_MODE_ALTERNATE(GPIOA_SWCLK) | \
                                     PIN_MODE_OUTPUT(GPIOA_CAN1_PWR_LED))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_USER_BUTTON) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_CAN_SILENT) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_V_BUS_SENSE) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN3) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN4) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN5) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN6) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN7) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN8) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN9) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN10) | \
                                     PIN_OSPEED_100M(GPIOA_OTG_FS_DM) | \
                                     PIN_OSPEED_2M(GPIOA_OTG_FS_DP) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWDIO) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWCLK) | \
                                     PIN_OTYPE_PUSHPULL(GPIOA_CAN1_PWR_LED))
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_100M(GPIOA_USER_BUTTON) | \
                                     PIN_OSPEED_100M(GPIOA_CAN_SILENT) | \
                                     PIN_OSPEED_100M(GPIOA_V_BUS_SENSE) | \
                                     PIN_OSPEED_50M(GPIOA_PIN3) | \
                                     PIN_OSPEED_100M(GPIOA_PIN4) | \
                                     PIN_OSPEED_50M(GPIOA_PIN5) | \
                                     PIN_OSPEED_100M(GPIOA_PIN6) | \
                                     PIN_OSPEED_100M(GPIOA_PIN7) | \
                                     PIN_OSPEED_100M(GPIOA_PIN8) | \
                                     PIN_OSPEED_100M(GPIOA_PIN9) | \
                                     PIN_OSPEED_100M(GPIOA_PIN10) | \
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_FS_DM) | \
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_FS_DP) | \
                                     PIN_OSPEED_100M(GPIOA_SWDIO) | \
                                     PIN_OSPEED_100M(GPIOA_SWCLK) | \
                                     PIN_OSPEED_100M(GPIOA_CAN1_PWR_LED))
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_FLOATING(GPIOA_USER_BUTTON) | \
                                     PIN_PUPDR_FLOATING(GPIOA_CAN_SILENT) | \
                                     PIN_PUPDR_FLOATING(GPIOA_V_BUS_SENSE) | \
                                     PIN_PUPDR_FLOATING(GPIOA_PIN3) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN4) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN5) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN6) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN7) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN8) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN9) | \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN10) | \
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_FS_DM) | \
                                     PIN_PUPDR_FLOATING(GPIOA_OTG_FS_DP) | \
                                     PIN_PUPDR_PULLUP(GPIOA_SWDIO) | \
                                     PIN_PUPDR_PULLDOWN(GPIOA_SWCLK) | \
                                     PIN_PUPDR_FLOATING(GPIOA_CAN1_PWR_LED))
#define VAL_GPIOA_ODR               (PIN_ODR_HIGH(GPIOA_USER_BUTTON) | \
                                     PIN_ODR_HIGH(GPIOA_CAN_SILENT) | \
                                     PIN_ODR_HIGH(GPIOA_V_BUS_SENSE) | \
                                     PIN_ODR_HIGH(GPIOA_PIN3) | \
                                     PIN_ODR_HIGH(GPIOA_PIN4) | \
                                     PIN_ODR_LOW(GPIOA_PIN5) | \
                                     PIN_ODR_HIGH(GPIOA_PIN6) | \
                                     PIN_ODR_HIGH(GPIOA_PIN7) | \
                                     PIN_ODR_HIGH(GPIOA_PIN8) | \
                                     PIN_ODR_HIGH(GPIOA_PIN9) | \
                                     PIN_ODR_HIGH(GPIOA_PIN10) | \
                                     PIN_ODR_LOW(GPIOA_OTG_FS_DM) | \
                                     PIN_ODR_LOW(GPIOA_OTG_FS_DP) | \
                                     PIN_ODR_HIGH(GPIOA_SWDIO) | \
                                     PIN_ODR_HIGH(GPIOA_SWCLK) | \
                                     PIN_ODR_LOW(GPIOA_CAN1_PWR_LED))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_USER_BUTTON, 0) | \
                                     PIN_AFIO_AF(GPIOA_CAN_SILENT, 0) | \
                                     PIN_AFIO_AF(GPIOA_V_BUS_SENSE, 0) | \
                                     PIN_AFIO_AF(GPIOA_PIN3, 7) | \
                                     PIN_AFIO_AF(GPIOA_PIN4, 0) | \
                                     PIN_AFIO_AF(GPIOA_PIN5, 0) | \
                                     PIN_AFIO_AF(GPIOA_PIN6, 0) | \
                                     PIN_AFIO_AF(GPIOA_PIN7, 0))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA_PIN8, 0) | \
                                     PIN_AFIO_AF(GPIOA_PIN9, 0) | \
                                     PIN_AFIO_AF(GPIOA_PIN10, 0) | \
                                     PIN_AFIO_AF(GPIOA_OTG_FS_DM, 14) | \
                                     PIN_AFIO_AF(GPIOA_OTG_FS_DP, 14) | \
                                     PIN_AFIO_AF(GPIOA_SWDIO, 0) | \
                                     PIN_AFIO_AF(GPIOA_SWCLK, 0) | \
                                     PIN_AFIO_AF(GPIOA_CAN1_PWR_LED, 0))

/*
 * GPIOB setup:
 *
 * PB0  - GPIOB_PIN0                      (input pullup).
 * PB1  - GPIOB_PIN1                      (input pullup).
 * PB2  - GPIOB_PIN2                      (input pullup).
 * PB3  - GPIOB_CAN1_STATUS_LED           (output low).
 * PB4  - GPIOB_PIN4                      (input pullup).
 * PB5  - GPIOB_V_BUS_ENABLE              (output low).
 * PB6  - GPIOB_UART1_TX                  (alternate 7).
 * PB7  - GPIOB_UART1_RX                  (alternate 7).
 * PB8  - GPIOB_CAN1_RX                   (alternate 9).
 * PB9  - GPIOB_CAN1_TX                   (alternate 9).
 * PB10 - GPIOB_PIN10                     (input pullup).
 * PB11 - GPIOB_PIN11                     (input pullup).
 * PB12 - GPIOB_STATUS_LED                (output pushpull).
 * PB13 - GPIOB_PIN13                     (input pullup).
 * PB14 - GPIOB_PIN14                     (input pullup).
 * PB15 - GPIOB_PIN15                     (input pullup).
 */
#define VAL_GPIOB_MODER             (PIN_MODE_INPUT(GPIOB_PIN0) | \
                                     PIN_MODE_INPUT(GPIOB_PIN1) | \
                                     PIN_MODE_INPUT(GPIOB_PIN2) | \
                                     PIN_MODE_OUTPUT(GPIOB_CAN1_STATUS_LED) | \
                                     PIN_MODE_INPUT(GPIOB_PIN4) | \
                                     PIN_MODE_OUTPUT(GPIOB_V_BUS_ENABLE) | \
                                     PIN_MODE_ALTERNATE(GPIOB_UART1_TX) | \
                                     PIN_MODE_ALTERNATE(GPIOB_UART1_RX) | \
                                     PIN_MODE_ALTERNATE(GPIOB_CAN1_RX) | \
                                     PIN_MODE_ALTERNATE(GPIOB_CAN1_TX) | \
                                     PIN_MODE_INPUT(GPIOB_PIN10) | \
                                     PIN_MODE_INPUT(GPIOB_PIN11) | \
                                     PIN_MODE_OUTPUT(GPIOB_STATUS_LED) | \
                                     PIN_MODE_INPUT(GPIOB_PIN13) | \
                                     PIN_MODE_INPUT(GPIOB_PIN14) | \
                                     PIN_MODE_INPUT(GPIOB_PIN15))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_PIN0) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN1) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN2) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_CAN1_STATUS_LED) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN4) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_V_BUS_ENABLE) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_UART1_TX) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_UART1_RX) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_CAN1_RX) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_CAN1_TX) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN10) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN11) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_STATUS_LED) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN13) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN14) | \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN15))
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_100M(GPIOB_PIN0) | \
                                     PIN_OSPEED_100M(GPIOB_PIN1) | \
                                     PIN_OSPEED_100M(GPIOB_PIN2) | \
                                     PIN_OSPEED_100M(GPIOB_CAN1_STATUS_LED) | \
                                     PIN_OSPEED_100M(GPIOB_PIN4) | \
                                     PIN_OSPEED_100M(GPIOB_V_BUS_ENABLE) | \
                                     PIN_OSPEED_100M(GPIOB_UART1_TX) | \
                                     PIN_OSPEED_100M(GPIOB_UART1_RX) | \
                                     PIN_OSPEED_100M(GPIOB_CAN1_RX) | \
                                     PIN_OSPEED_100M(GPIOB_CAN1_TX) | \
                                     PIN_OSPEED_100M(GPIOB_PIN10) | \
                                     PIN_OSPEED_100M(GPIOB_PIN11) | \
                                     PIN_OSPEED_100M(GPIOB_STATUS_LED) | \
                                     PIN_OSPEED_100M(GPIOB_PIN13) | \
                                     PIN_OSPEED_100M(GPIOB_PIN14) | \
                                     PIN_OSPEED_100M(GPIOB_PIN15))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_PULLUP(GPIOB_PIN0) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN1) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN2) | \
                                     PIN_PUPDR_FLOATING(GPIOB_CAN1_STATUS_LED) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN4) | \
                                     PIN_PUPDR_FLOATING(GPIOB_V_BUS_ENABLE) | \
                                     PIN_PUPDR_FLOATING(GPIOB_UART1_TX) | \
                                     PIN_PUPDR_PULLUP(GPIOB_UART1_RX) | \
                                     PIN_PUPDR_FLOATING(GPIOB_CAN1_RX) | \
                                     PIN_PUPDR_FLOATING(GPIOB_CAN1_TX) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN10) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN11) | \
                                     PIN_PUPDR_FLOATING(GPIOB_STATUS_LED) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN13) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN14) | \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN15))
#define VAL_GPIOB_ODR               (PIN_ODR_HIGH(GPIOB_PIN0) | \
                                     PIN_ODR_HIGH(GPIOB_PIN1) | \
                                     PIN_ODR_HIGH(GPIOB_PIN2) | \
                                     PIN_ODR_LOW(GPIOB_CAN1_STATUS_LED) | \
                                     PIN_ODR_HIGH(GPIOB_PIN4) | \
                                     PIN_ODR_LOW(GPIOB_V_BUS_ENABLE) | \
                                     PIN_ODR_HIGH(GPIOB_UART1_TX) | \
                                     PIN_ODR_HIGH(GPIOB_UART1_RX) | \
                                     PIN_ODR_HIGH(GPIOB_CAN1_RX) | \
                                     PIN_ODR_HIGH(GPIOB_CAN1_TX) | \
                                     PIN_ODR_HIGH(GPIOB_PIN10) | \
                                     PIN_ODR_HIGH(GPIOB_PIN11) | \
                                     PIN_ODR_LOW(GPIOB_STATUS_LED) | \
                                     PIN_ODR_HIGH(GPIOB_PIN13) | \
                                     PIN_ODR_HIGH(GPIOB_PIN14) | \
                                     PIN_ODR_HIGH(GPIOB_PIN15))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_PIN0, 0) | \
                                     PIN_AFIO_AF(GPIOB_PIN1, 0) | \
                                     PIN_AFIO_AF(GPIOB_PIN2, 0) | \
                                     PIN_AFIO_AF(GPIOB_CAN1_STATUS_LED, 0) | \
                                     PIN_AFIO_AF(GPIOB_PIN4, 0) | \
                                     PIN_AFIO_AF(GPIOB_V_BUS_ENABLE, 0) | \
                                     PIN_AFIO_AF(GPIOB_UART1_TX, 7) | \
                                     PIN_AFIO_AF(GPIOB_UART1_RX, 7))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_CAN1_RX, 9) | \
                                     PIN_AFIO_AF(GPIOB_CAN1_TX, 9) | \
                                     PIN_AFIO_AF(GPIOB_PIN10, 0) | \
                                     PIN_AFIO_AF(GPIOB_PIN11, 0) | \
                                     PIN_AFIO_AF(GPIOB_STATUS_LED, 0) | \
                                     PIN_AFIO_AF(GPIOB_PIN13, 0) | \
                                     PIN_AFIO_AF(GPIOB_PIN14, 0) | \
                                     PIN_AFIO_AF(GPIOB_PIN15, 0))

/*
 * GPIOC setup:
 *
 * PC0  - PIN0                      (input pullup).
 * PC1  - PIN1                      (input pullup).
 * PC2  - PIN2                      (input pullup).
 * PC3  - PIN3                      (input pullup).
 * PC4  - PIN4                      (input pullup).
 * PC5  - PIN5                      (input pullup).
 * PC6  - PIN6                      (input pullup).
 * PC7  - PIN7                      (input pullup).
 * PC8  - PIN8                      (input pullup).
 * PC9  - PIN9                      (input pullup).
 * PC10 - PIN10                     (input pullup).
 * PC11 - PIN11                     (input pullup).
 * PC12 - PIN12                     (input pullup).
 * PC13 - PIN13                     (input pullup).
 * PC14 - PIN14                     (input pullup).
 * PC15 - PIN15                     (input pullup).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_INPUT(GPIOC_PIN0) | \
                                     PIN_MODE_INPUT(GPIOC_PIN1) | \
                                     PIN_MODE_INPUT(GPIOC_PIN2) | \
                                     PIN_MODE_INPUT(GPIOC_PIN3) | \
                                     PIN_MODE_INPUT(GPIOC_PIN4) | \
                                     PIN_MODE_INPUT(GPIOC_PIN5) | \
                                     PIN_MODE_INPUT(GPIOC_PIN6) | \
                                     PIN_MODE_INPUT(GPIOC_PIN7) | \
                                     PIN_MODE_INPUT(GPIOC_PIN8) | \
                                     PIN_MODE_INPUT(GPIOC_PIN9) | \
                                     PIN_MODE_INPUT(GPIOC_PIN10) | \
                                     PIN_MODE_INPUT(GPIOC_PIN11) | \
                                     PIN_MODE_INPUT(GPIOC_PIN12) | \
                                     PIN_MODE_INPUT(GPIOC_PIN13) | \
                                     PIN_MODE_INPUT(GPIOC_PIN14) | \
                                     PIN_MODE_INPUT(GPIOC_PIN15))
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOC_PIN0) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN1) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN2) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN3) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN4) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN5) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN6) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN7) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN8) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN9) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN10) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN11) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN12) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN13) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN14) | \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN15))
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_100M(GPIOC_PIN0) | \
                                     PIN_OSPEED_100M(GPIOC_PIN1) | \
                                     PIN_OSPEED_100M(GPIOC_PIN2) | \
                                     PIN_OSPEED_100M(GPIOC_PIN3) | \
                                     PIN_OSPEED_100M(GPIOC_PIN4) | \
                                     PIN_OSPEED_100M(GPIOC_PIN5) | \
                                     PIN_OSPEED_100M(GPIOC_PIN6) | \
                                     PIN_OSPEED_100M(GPIOC_PIN7) | \
                                     PIN_OSPEED_100M(GPIOC_PIN8) | \
                                     PIN_OSPEED_100M(GPIOC_PIN9) | \
                                     PIN_OSPEED_100M(GPIOC_PIN10) | \
                                     PIN_OSPEED_100M(GPIOC_PIN11) | \
                                     PIN_OSPEED_100M(GPIOC_PIN12) | \
                                     PIN_OSPEED_100M(GPIOC_PIN13) | \
                                     PIN_OSPEED_100M(GPIOC_PIN14) | \
                                     PIN_OSPEED_100M(GPIOC_PIN15))
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_PULLUP(GPIOC_PIN0) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN1) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN2) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN3) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN4) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN5) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN6) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN7) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN8) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN9) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN10) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN11) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN12) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN13) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN14) | \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN15))
#define VAL_GPIOC_ODR               (PIN_ODR_HIGH(GPIOC_PIN0) | \
                                     PIN_ODR_HIGH(GPIOC_PIN1) | \
                                     PIN_ODR_HIGH(GPIOC_PIN2) | \
                                     PIN_ODR_HIGH(GPIOC_PIN3) | \
                                     PIN_ODR_HIGH(GPIOC_PIN4) | \
                                     PIN_ODR_HIGH(GPIOC_PIN5) | \
                                     PIN_ODR_HIGH(GPIOC_PIN6) | \
                                     PIN_ODR_HIGH(GPIOC_PIN7) | \
                                     PIN_ODR_HIGH(GPIOC_PIN8) | \
                                     PIN_ODR_HIGH(GPIOC_PIN9) | \
                                     PIN_ODR_HIGH(GPIOC_PIN10) | \
                                     PIN_ODR_HIGH(GPIOC_PIN11) | \
                                     PIN_ODR_HIGH(GPIOC_PIN12) | \
                                     PIN_ODR_HIGH(GPIOC_PIN13) | \
                                     PIN_ODR_HIGH(GPIOC_PIN14) | \
                                     PIN_ODR_HIGH(GPIOC_PIN15))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_PIN0, 0) | \
                                     PIN_AFIO_AF(GPIOC_PIN1, 0) | \
                                     PIN_AFIO_AF(GPIOC_PIN2, 0) | \
                                     PIN_AFIO_AF(GPIOC_PIN3, 0) | \
                                     PIN_AFIO_AF(GPIOC_PIN4, 0) | \
                                     PIN_AFIO_AF(GPIOC_PIN5, 0) | \
                                     PIN_AFIO_AF(GPIOC_PIN6, 0) | \
                                     PIN_AFIO_AF(GPIOC_PIN7, 0))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC_PIN8, 0) | \
                                     PIN_AFIO_AF(GPIOC_PIN9, 0) | \
                                     PIN_AFIO_AF(GPIOC_PIN10, 0) | \
                                     PIN_AFIO_AF(GPIOC_PIN11, 0) | \
                                     PIN_AFIO_AF(GPIOC_PIN12, 0) | \
                                     PIN_AFIO_AF(GPIOC_PIN13, 0) | \
                                     PIN_AFIO_AF(GPIOC_PIN14, 0) | \
                                     PIN_AFIO_AF(GPIOC_PIN15, 0))

/*
 * GPIOD setup:
 *
 * PD0  - PIN0                      (input pullup).
 * PD1  - PIN1                      (input pullup).
 * PD2  - PIN2                      (input pullup).
 * PD3  - PIN3                      (input pullup).
 * PD4  - PIN4                      (input pullup).
 * PD5  - PIN5                      (input pullup).
 * PD6  - PIN6                      (input pullup).
 * PD7  - PIN7                      (input pullup).
 * PD8  - PIN8                      (input pullup).
 * PD9  - PIN9                      (input pullup).
 * PD10 - PIN10                     (input pullup).
 * PD11 - PIN11                     (input pullup).
 * PD12 - PIN12                     (input pullup).
 * PD13 - PIN13                     (input pullup).
 * PD14 - PIN14                     (input pullup).
 * PD15 - PIN15                     (input pullup).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_INPUT(GPIOD_PIN0) | \
                                     PIN_MODE_INPUT(GPIOD_PIN1) | \
                                     PIN_MODE_INPUT(GPIOD_PIN2) | \
                                     PIN_MODE_INPUT(GPIOD_PIN3) | \
                                     PIN_MODE_INPUT(GPIOD_PIN4) | \
                                     PIN_MODE_INPUT(GPIOD_PIN5) | \
                                     PIN_MODE_INPUT(GPIOD_PIN6) | \
                                     PIN_MODE_INPUT(GPIOD_PIN7) | \
                                     PIN_MODE_INPUT(GPIOD_PIN8) | \
                                     PIN_MODE_INPUT(GPIOD_PIN9) | \
                                     PIN_MODE_INPUT(GPIOD_PIN10) | \
                                     PIN_MODE_INPUT(GPIOD_PIN11) | \
                                     PIN_MODE_INPUT(GPIOD_PIN12) | \
                                     PIN_MODE_INPUT(GPIOD_PIN13) | \
                                     PIN_MODE_INPUT(GPIOD_PIN14) | \
                                     PIN_MODE_INPUT(GPIOD_PIN15))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_PIN0) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN1) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN2) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN3) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN4) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN5) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN6) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN7) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN8) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN9) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN10) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN11) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN12) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN13) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN14) | \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN15))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_100M(GPIOD_PIN0) | \
                                     PIN_OSPEED_100M(GPIOD_PIN1) | \
                                     PIN_OSPEED_100M(GPIOD_PIN2) | \
                                     PIN_OSPEED_100M(GPIOD_PIN3) | \
                                     PIN_OSPEED_100M(GPIOD_PIN4) | \
                                     PIN_OSPEED_100M(GPIOD_PIN5) | \
                                     PIN_OSPEED_100M(GPIOD_PIN6) | \
                                     PIN_OSPEED_100M(GPIOD_PIN7) | \
                                     PIN_OSPEED_100M(GPIOD_PIN8) | \
                                     PIN_OSPEED_100M(GPIOD_PIN9) | \
                                     PIN_OSPEED_100M(GPIOD_PIN10) | \
                                     PIN_OSPEED_100M(GPIOD_PIN11) | \
                                     PIN_OSPEED_100M(GPIOD_PIN12) | \
                                     PIN_OSPEED_100M(GPIOD_PIN13) | \
                                     PIN_OSPEED_100M(GPIOD_PIN14) | \
                                     PIN_OSPEED_100M(GPIOD_PIN15))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_PULLUP(GPIOD_PIN0) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN1) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN2) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN3) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN4) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN5) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN6) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN7) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN8) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN9) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN10) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN11) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN12) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN13) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN14) | \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN15))
#define VAL_GPIOD_ODR               (PIN_ODR_HIGH(GPIOD_PIN0) | \
                                     PIN_ODR_HIGH(GPIOD_PIN1) | \
                                     PIN_ODR_HIGH(GPIOD_PIN2) | \
                                     PIN_ODR_HIGH(GPIOD_PIN3) | \
                                     PIN_ODR_HIGH(GPIOD_PIN4) | \
                                     PIN_ODR_HIGH(GPIOD_PIN5) | \
                                     PIN_ODR_HIGH(GPIOD_PIN6) | \
                                     PIN_ODR_HIGH(GPIOD_PIN7) | \
                                     PIN_ODR_HIGH(GPIOD_PIN8) | \
                                     PIN_ODR_HIGH(GPIOD_PIN9) | \
                                     PIN_ODR_HIGH(GPIOD_PIN10) | \
                                     PIN_ODR_HIGH(GPIOD_PIN11) | \
                                     PIN_ODR_HIGH(GPIOD_PIN12) | \
                                     PIN_ODR_HIGH(GPIOD_PIN13) | \
                                     PIN_ODR_HIGH(GPIOD_PIN14) | \
                                     PIN_ODR_HIGH(GPIOD_PIN15))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_PIN0, 0) | \
                                     PIN_AFIO_AF(GPIOD_PIN1, 0) | \
                                     PIN_AFIO_AF(GPIOD_PIN2, 0) | \
                                     PIN_AFIO_AF(GPIOD_PIN3, 0) | \
                                     PIN_AFIO_AF(GPIOD_PIN4, 0) | \
                                     PIN_AFIO_AF(GPIOD_PIN5, 0) | \
                                     PIN_AFIO_AF(GPIOD_PIN6, 0) | \
                                     PIN_AFIO_AF(GPIOD_PIN7, 0))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_PIN8, 0) | \
                                     PIN_AFIO_AF(GPIOD_PIN9, 0) | \
                                     PIN_AFIO_AF(GPIOD_PIN10, 0) | \
                                     PIN_AFIO_AF(GPIOD_PIN11, 0) | \
                                     PIN_AFIO_AF(GPIOD_PIN12, 0) | \
                                     PIN_AFIO_AF(GPIOD_PIN13, 0) | \
                                     PIN_AFIO_AF(GPIOD_PIN14, 0) | \
                                     PIN_AFIO_AF(GPIOD_PIN15, 0))

/*
 * GPIOE setup:
 *
 * PE0  - PIN0                      (input floating).
 * PE1  - PIN1                      (input floating).
 * PE2  - PIN2                      (input floating).
 * PE3  - PIN3                      (input floating).
 * PE4  - PIN4                      (input floating).
 * PE5  - PIN5                      (input floating).
 * PE6  - PIN6                      (input floating).
 * PE7  - PIN7                      (input floating).
 * PE8  - PIN8                      (input floating).
 * PE9  - PIN9                      (input floating).
 * PE10 - PIN10                     (input floating).
 * PE11 - PIN11                     (input floating).
 * PE12 - PIN12                     (input floating).
 * PE13 - PIN13                     (input floating).
 * PE14 - PIN14                     (input floating).
 * PE15 - PIN15                     (input floating).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_INPUT(GPIOE_PIN0) | \
                                     PIN_MODE_INPUT(GPIOE_PIN1) | \
                                     PIN_MODE_INPUT(GPIOE_PIN2) | \
                                     PIN_MODE_INPUT(GPIOE_PIN3) | \
                                     PIN_MODE_INPUT(GPIOE_PIN4) | \
                                     PIN_MODE_INPUT(GPIOE_PIN5) | \
                                     PIN_MODE_INPUT(GPIOE_PIN6) | \
                                     PIN_MODE_INPUT(GPIOE_PIN7) | \
                                     PIN_MODE_INPUT(GPIOE_PIN8) | \
                                     PIN_MODE_INPUT(GPIOE_PIN9) | \
                                     PIN_MODE_INPUT(GPIOE_PIN10) | \
                                     PIN_MODE_INPUT(GPIOE_PIN11) | \
                                     PIN_MODE_INPUT(GPIOE_PIN12) | \
                                     PIN_MODE_INPUT(GPIOE_PIN13) | \
                                     PIN_MODE_INPUT(GPIOE_PIN14) | \
                                     PIN_MODE_INPUT(GPIOE_PIN15))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_PIN0) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN1) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN2) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN3) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN4) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN5) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN6) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN7) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN8) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN9) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN10) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN11) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN12) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN13) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN14) | \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN15))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_100M(GPIOE_PIN0) | \
                                     PIN_OSPEED_100M(GPIOE_PIN1) | \
                                     PIN_OSPEED_100M(GPIOE_PIN2) | \
                                     PIN_OSPEED_100M(GPIOE_PIN3) | \
                                     PIN_OSPEED_100M(GPIOE_PIN4) | \
                                     PIN_OSPEED_100M(GPIOE_PIN5) | \
                                     PIN_OSPEED_100M(GPIOE_PIN6) | \
                                     PIN_OSPEED_100M(GPIOE_PIN7) | \
                                     PIN_OSPEED_100M(GPIOE_PIN8) | \
                                     PIN_OSPEED_100M(GPIOE_PIN9) | \
                                     PIN_OSPEED_100M(GPIOE_PIN10) | \
                                     PIN_OSPEED_100M(GPIOE_PIN11) | \
                                     PIN_OSPEED_100M(GPIOE_PIN12) | \
                                     PIN_OSPEED_100M(GPIOE_PIN13) | \
                                     PIN_OSPEED_100M(GPIOE_PIN14) | \
                                     PIN_OSPEED_100M(GPIOE_PIN15))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_FLOATING(GPIOE_PIN0) | \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN1) | \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN2) | \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN3) | \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN4) | \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN5) | \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN6) | \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN7) | \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN8) | \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN9) | \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN10) | \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN11) | \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN12) | \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN13) | \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN14) | \
                                     PIN_PUPDR_FLOATING(GPIOE_PIN15))
#define VAL_GPIOE_ODR               (PIN_ODR_HIGH(GPIOE_PIN0) | \
                                     PIN_ODR_HIGH(GPIOE_PIN1) | \
                                     PIN_ODR_HIGH(GPIOE_PIN2) | \
                                     PIN_ODR_HIGH(GPIOE_PIN3) | \
                                     PIN_ODR_HIGH(GPIOE_PIN4) | \
                                     PIN_ODR_HIGH(GPIOE_PIN5) | \
                                     PIN_ODR_HIGH(GPIOE_PIN6) | \
                                     PIN_ODR_HIGH(GPIOE_PIN7) | \
                                     PIN_ODR_HIGH(GPIOE_PIN8) | \
                                     PIN_ODR_HIGH(GPIOE_PIN9) | \
                                     PIN_ODR_HIGH(GPIOE_PIN10) | \
                                     PIN_ODR_HIGH(GPIOE_PIN11) | \
                                     PIN_ODR_HIGH(GPIOE_PIN12) | \
                                     PIN_ODR_HIGH(GPIOE_PIN13) | \
                                     PIN_ODR_HIGH(GPIOE_PIN14) | \
                                     PIN_ODR_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_PIN0, 0) | \
                                     PIN_AFIO_AF(GPIOE_PIN1, 0) | \
                                     PIN_AFIO_AF(GPIOE_PIN2, 0) | \
                                     PIN_AFIO_AF(GPIOE_PIN3, 0) | \
                                     PIN_AFIO_AF(GPIOE_PIN4, 0) | \
                                     PIN_AFIO_AF(GPIOE_PIN5, 0) | \
                                     PIN_AFIO_AF(GPIOE_PIN6, 0) | \
                                     PIN_AFIO_AF(GPIOE_PIN7, 0))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_PIN8, 0) | \
                                     PIN_AFIO_AF(GPIOE_PIN9, 0) | \
                                     PIN_AFIO_AF(GPIOE_PIN10, 0) | \
                                     PIN_AFIO_AF(GPIOE_PIN11, 0) | \
                                     PIN_AFIO_AF(GPIOE_PIN12, 0) | \
                                     PIN_AFIO_AF(GPIOE_PIN13, 0) | \
                                     PIN_AFIO_AF(GPIOE_PIN14, 0) | \
                                     PIN_AFIO_AF(GPIOE_PIN15, 0))

/*
 * GPIOF setup:
 *
 * PF0  - PIN0                      (input floating).
 * PF1  - PIN1                      (input floating).
 * PF2  - PIN2                      (input floating).
 * PF3  - PIN3                      (input floating).
 * PF4  - PIN4                      (input floating).
 * PF5  - PIN5                      (input floating).
 * PF6  - PIN6                      (input floating).
 * PF7  - PIN7                      (input floating).
 * PF8  - PIN8                      (input floating).
 * PF9  - PIN9                      (input floating).
 * PF10 - PIN10                     (input floating).
 * PF11 - PIN11                     (input floating).
 * PF12 - PIN12                     (input floating).
 * PF13 - PIN13                     (input floating).
 * PF14 - PIN14                     (input floating).
 * PF15 - PIN15                     (input floating).
 */
#define VAL_GPIOF_MODER             (PIN_MODE_INPUT(GPIOF_PIN0) | \
                                     PIN_MODE_INPUT(GPIOF_PIN1) | \
                                     PIN_MODE_INPUT(GPIOF_PIN2) | \
                                     PIN_MODE_INPUT(GPIOF_PIN3) | \
                                     PIN_MODE_INPUT(GPIOF_PIN4) | \
                                     PIN_MODE_INPUT(GPIOF_PIN5) | \
                                     PIN_MODE_INPUT(GPIOF_PIN6) | \
                                     PIN_MODE_INPUT(GPIOF_PIN7) | \
                                     PIN_MODE_INPUT(GPIOF_PIN8) | \
                                     PIN_MODE_INPUT(GPIOF_PIN9) | \
                                     PIN_MODE_INPUT(GPIOF_PIN10) | \
                                     PIN_MODE_INPUT(GPIOF_PIN11) | \
                                     PIN_MODE_INPUT(GPIOF_PIN12) | \
                                     PIN_MODE_INPUT(GPIOF_PIN13) | \
                                     PIN_MODE_INPUT(GPIOF_PIN14) | \
                                     PIN_MODE_INPUT(GPIOF_PIN15))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOF_PIN0) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN1) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN2) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN3) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN4) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN5) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN6) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN7) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN8) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN9) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN10) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN11) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN12) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN13) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN14) | \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN15))
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_100M(GPIOF_PIN0) | \
                                     PIN_OSPEED_100M(GPIOF_PIN1) | \
                                     PIN_OSPEED_100M(GPIOF_PIN2) | \
                                     PIN_OSPEED_100M(GPIOF_PIN3) | \
                                     PIN_OSPEED_100M(GPIOF_PIN4) | \
                                     PIN_OSPEED_100M(GPIOF_PIN5) | \
                                     PIN_OSPEED_100M(GPIOF_PIN6) | \
                                     PIN_OSPEED_100M(GPIOF_PIN7) | \
                                     PIN_OSPEED_100M(GPIOF_PIN8) | \
                                     PIN_OSPEED_100M(GPIOF_PIN9) | \
                                     PIN_OSPEED_100M(GPIOF_PIN10) | \
                                     PIN_OSPEED_100M(GPIOF_PIN11) | \
                                     PIN_OSPEED_100M(GPIOF_PIN12) | \
                                     PIN_OSPEED_100M(GPIOF_PIN13) | \
                                     PIN_OSPEED_100M(GPIOF_PIN14) | \
                                     PIN_OSPEED_100M(GPIOF_PIN15))
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_FLOATING(GPIOF_PIN0) | \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN1) | \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN2) | \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN3) | \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN4) | \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN5) | \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN6) | \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN7) | \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN8) | \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN9) | \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN10) | \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN11) | \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN12) | \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN13) | \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN14) | \
                                     PIN_PUPDR_FLOATING(GPIOF_PIN15))
#define VAL_GPIOF_ODR               (PIN_ODR_HIGH(GPIOF_PIN0) | \
                                     PIN_ODR_HIGH(GPIOF_PIN1) | \
                                     PIN_ODR_HIGH(GPIOF_PIN2) | \
                                     PIN_ODR_HIGH(GPIOF_PIN3) | \
                                     PIN_ODR_HIGH(GPIOF_PIN4) | \
                                     PIN_ODR_HIGH(GPIOF_PIN5) | \
                                     PIN_ODR_HIGH(GPIOF_PIN6) | \
                                     PIN_ODR_HIGH(GPIOF_PIN7) | \
                                     PIN_ODR_HIGH(GPIOF_PIN8) | \
                                     PIN_ODR_HIGH(GPIOF_PIN9) | \
                                     PIN_ODR_HIGH(GPIOF_PIN10) | \
                                     PIN_ODR_HIGH(GPIOF_PIN11) | \
                                     PIN_ODR_HIGH(GPIOF_PIN12) | \
                                     PIN_ODR_HIGH(GPIOF_PIN13) | \
                                     PIN_ODR_HIGH(GPIOF_PIN14) | \
                                     PIN_ODR_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(GPIOF_PIN0, 0) | \
                                     PIN_AFIO_AF(GPIOF_PIN1, 0) | \
                                     PIN_AFIO_AF(GPIOF_PIN2, 0) | \
                                     PIN_AFIO_AF(GPIOF_PIN3, 0) | \
                                     PIN_AFIO_AF(GPIOF_PIN4, 0) | \
                                     PIN_AFIO_AF(GPIOF_PIN5, 0) | \
                                     PIN_AFIO_AF(GPIOF_PIN6, 0) | \
                                     PIN_AFIO_AF(GPIOF_PIN7, 0))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(GPIOF_PIN8, 0) | \
                                     PIN_AFIO_AF(GPIOF_PIN9, 0) | \
                                     PIN_AFIO_AF(GPIOF_PIN10, 0) | \
                                     PIN_AFIO_AF(GPIOF_PIN11, 0) | \
                                     PIN_AFIO_AF(GPIOF_PIN12, 0) | \
                                     PIN_AFIO_AF(GPIOF_PIN13, 0) | \
                                     PIN_AFIO_AF(GPIOF_PIN14, 0) | \
                                     PIN_AFIO_AF(GPIOF_PIN15, 0))


#define STATUS_LED          (1<<0)
#define CAN1_STATUS_LED     (1<<1)
#define CAN1_PWR_LED        (1<<2)

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
    void usb_lld_connect_bus(void *);
    void usb_lld_disconnect_bus(void *);
    void boardInit(void);

    void led_toggle(unsigned int led);
    void led_set(unsigned int led);
    void led_clear(unsigned int led);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */
