/* generated vector header file - do not edit */
#ifndef VECTOR_DATA_H
#define VECTOR_DATA_H
/* Number of interrupts allocated */
#ifndef VECTOR_DATA_IRQ_COUNT
#define VECTOR_DATA_IRQ_COUNT    (29)
#endif
/* ISR prototypes */
void sci_uart_rxi_isr(void);
void sci_uart_txi_isr(void);
void sci_uart_tei_isr(void);
void sci_uart_eri_isr(void);
void rtc_alarm_periodic_isr(void);
void rtc_carry_isr(void);
void agt_int_isr(void);
void r_icu_isr(void);
void spi_rxi_isr(void);
void spi_txi_isr(void);
void spi_tei_isr(void);
void spi_eri_isr(void);

/* Vector table allocations */
#define VECTOR_NUMBER_SCI0_RXI ((IRQn_Type) 0) /* SCI0 RXI (Receive data full) */
#define VECTOR_NUMBER_SCI0_TXI ((IRQn_Type) 1) /* SCI0 TXI (Transmit data empty) */
#define VECTOR_NUMBER_SCI0_TEI ((IRQn_Type) 2) /* SCI0 TEI (Transmit end) */
#define VECTOR_NUMBER_SCI0_ERI ((IRQn_Type) 3) /* SCI0 ERI (Receive error) */
#define VECTOR_NUMBER_SCI1_RXI ((IRQn_Type) 4) /* SCI1 RXI (Received data full) */
#define VECTOR_NUMBER_SCI1_TXI ((IRQn_Type) 5) /* SCI1 TXI (Transmit data empty) */
#define VECTOR_NUMBER_SCI1_TEI ((IRQn_Type) 6) /* SCI1 TEI (Transmit end) */
#define VECTOR_NUMBER_SCI1_ERI ((IRQn_Type) 7) /* SCI1 ERI (Receive error) */
#define VECTOR_NUMBER_SCI4_RXI ((IRQn_Type) 8) /* SCI4 RXI (Received data full) */
#define VECTOR_NUMBER_SCI4_TXI ((IRQn_Type) 9) /* SCI4 TXI (Transmit data empty) */
#define VECTOR_NUMBER_SCI4_TEI ((IRQn_Type) 10) /* SCI4 TEI (Transmit end) */
#define VECTOR_NUMBER_SCI4_ERI ((IRQn_Type) 11) /* SCI4 ERI (Receive error) */
#define VECTOR_NUMBER_SCI9_RXI ((IRQn_Type) 12) /* SCI9 RXI (Received data full) */
#define VECTOR_NUMBER_SCI9_TXI ((IRQn_Type) 13) /* SCI9 TXI (Transmit data empty) */
#define VECTOR_NUMBER_SCI9_TEI ((IRQn_Type) 14) /* SCI9 TEI (Transmit end) */
#define VECTOR_NUMBER_SCI9_ERI ((IRQn_Type) 15) /* SCI9 ERI (Receive error) */
#define VECTOR_NUMBER_RTC_PERIOD ((IRQn_Type) 16) /* RTC PERIOD (Periodic interrupt) */
#define VECTOR_NUMBER_RTC_CARRY ((IRQn_Type) 17) /* RTC CARRY (Carry interrupt) */
#define VECTOR_NUMBER_AGT0_INT ((IRQn_Type) 18) /* AGT0 INT (AGT interrupt) */
#define VECTOR_NUMBER_AGT1_INT ((IRQn_Type) 19) /* AGT1 INT (AGT interrupt) */
#define VECTOR_NUMBER_ICU_IRQ0 ((IRQn_Type) 20) /* ICU IRQ0 (External pin interrupt 0) */
#define VECTOR_NUMBER_ICU_IRQ1 ((IRQn_Type) 21) /* ICU IRQ1 (External pin interrupt 1) */
#define VECTOR_NUMBER_ICU_IRQ2 ((IRQn_Type) 22) /* ICU IRQ2 (External pin interrupt 2) */
#define VECTOR_NUMBER_ICU_IRQ3 ((IRQn_Type) 23) /* ICU IRQ3 (External pin interrupt 3) */
#define VECTOR_NUMBER_ICU_IRQ4 ((IRQn_Type) 24) /* ICU IRQ4 (External pin interrupt 4) */
#define VECTOR_NUMBER_SPI0_RXI ((IRQn_Type) 25) /* SPI0 RXI (Receive buffer full) */
#define VECTOR_NUMBER_SPI0_TXI ((IRQn_Type) 26) /* SPI0 TXI (Transmit buffer empty) */
#define VECTOR_NUMBER_SPI0_TEI ((IRQn_Type) 27) /* SPI0 TEI (Transmission complete event) */
#define VECTOR_NUMBER_SPI0_ERI ((IRQn_Type) 28) /* SPI0 ERI (Error) */
typedef enum IRQn {
	Reset_IRQn = -15,
	NonMaskableInt_IRQn = -14,
	HardFault_IRQn = -13,
	MemoryManagement_IRQn = -12,
	BusFault_IRQn = -11,
	UsageFault_IRQn = -10,
	SecureFault_IRQn = -9,
	SVCall_IRQn = -5,
	DebugMonitor_IRQn = -4,
	PendSV_IRQn = -2,
	SysTick_IRQn = -1,
	SCI0_RXI_IRQn = 0, /* SCI0 RXI (Receive data full) */
	SCI0_TXI_IRQn = 1, /* SCI0 TXI (Transmit data empty) */
	SCI0_TEI_IRQn = 2, /* SCI0 TEI (Transmit end) */
	SCI0_ERI_IRQn = 3, /* SCI0 ERI (Receive error) */
	SCI1_RXI_IRQn = 4, /* SCI1 RXI (Received data full) */
	SCI1_TXI_IRQn = 5, /* SCI1 TXI (Transmit data empty) */
	SCI1_TEI_IRQn = 6, /* SCI1 TEI (Transmit end) */
	SCI1_ERI_IRQn = 7, /* SCI1 ERI (Receive error) */
	SCI4_RXI_IRQn = 8, /* SCI4 RXI (Received data full) */
	SCI4_TXI_IRQn = 9, /* SCI4 TXI (Transmit data empty) */
	SCI4_TEI_IRQn = 10, /* SCI4 TEI (Transmit end) */
	SCI4_ERI_IRQn = 11, /* SCI4 ERI (Receive error) */
	SCI9_RXI_IRQn = 12, /* SCI9 RXI (Received data full) */
	SCI9_TXI_IRQn = 13, /* SCI9 TXI (Transmit data empty) */
	SCI9_TEI_IRQn = 14, /* SCI9 TEI (Transmit end) */
	SCI9_ERI_IRQn = 15, /* SCI9 ERI (Receive error) */
	RTC_PERIOD_IRQn = 16, /* RTC PERIOD (Periodic interrupt) */
	RTC_CARRY_IRQn = 17, /* RTC CARRY (Carry interrupt) */
	AGT0_INT_IRQn = 18, /* AGT0 INT (AGT interrupt) */
	AGT1_INT_IRQn = 19, /* AGT1 INT (AGT interrupt) */
	ICU_IRQ0_IRQn = 20, /* ICU IRQ0 (External pin interrupt 0) */
	ICU_IRQ1_IRQn = 21, /* ICU IRQ1 (External pin interrupt 1) */
	ICU_IRQ2_IRQn = 22, /* ICU IRQ2 (External pin interrupt 2) */
	ICU_IRQ3_IRQn = 23, /* ICU IRQ3 (External pin interrupt 3) */
	ICU_IRQ4_IRQn = 24, /* ICU IRQ4 (External pin interrupt 4) */
	SPI0_RXI_IRQn = 25, /* SPI0 RXI (Receive buffer full) */
	SPI0_TXI_IRQn = 26, /* SPI0 TXI (Transmit buffer empty) */
	SPI0_TEI_IRQn = 27, /* SPI0 TEI (Transmission complete event) */
	SPI0_ERI_IRQn = 28, /* SPI0 ERI (Error) */
} IRQn_Type;
#endif /* VECTOR_DATA_H */
