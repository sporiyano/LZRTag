EESchema Schematic File Version 4
LIBS:MainBoard-cache
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 3 4
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Connector:USB_B_Micro J10
U 1 1 5C2BCA10
P 3700 3850
F 0 "J10" H 3755 4317 50  0000 C CNN
F 1 "USB_B_Micro" H 3755 4226 50  0000 C CNN
F 2 "Connector_USB:USB_Micro-B_Wuerth_629105150521" H 3850 3800 50  0001 C CNN
F 3 "~" H 3850 3800 50  0001 C CNN
	1    3700 3850
	1    0    0    -1  
$EndComp
$Comp
L Interface_USB:FT230XS U10
U 1 1 5C2BCB35
P 5450 3950
F 0 "U10" H 5450 4828 50  0000 C CNN
F 1 "FT230XS" H 5450 4737 50  0000 C CNN
F 2 "Package_SO:SSOP-16_3.9x4.9mm_P0.635mm" H 5900 3300 50  0001 C CNN
F 3 "http://www.ftdichip.com/Products/ICs/FT230X.html" H 5450 3950 50  0001 C CNN
	1    5450 3950
	1    0    0    -1  
$EndComp
Wire Wire Line
	4000 3850 4350 3850
Wire Wire Line
	4350 3850 4350 3950
Wire Wire Line
	4350 3950 4750 3950
Wire Wire Line
	4000 3950 4300 3950
Wire Wire Line
	4300 3950 4300 3900
Wire Wire Line
	4300 3900 4500 3900
Wire Wire Line
	4500 3900 4500 3850
Wire Wire Line
	4500 3850 4750 3850
$Comp
L power:GND #PWR0114
U 1 1 5C2BCD0C
P 3650 4400
F 0 "#PWR0114" H 3650 4150 50  0001 C CNN
F 1 "GND" H 3655 4227 50  0000 C CNN
F 2 "" H 3650 4400 50  0001 C CNN
F 3 "" H 3650 4400 50  0001 C CNN
	1    3650 4400
	1    0    0    -1  
$EndComp
Wire Wire Line
	3600 4250 3650 4250
Wire Wire Line
	3650 4250 3650 4400
Connection ~ 3650 4250
Wire Wire Line
	3650 4250 3700 4250
Wire Wire Line
	5350 4650 5450 4650
Wire Wire Line
	5450 4750 5450 4650
Connection ~ 5450 4650
Wire Wire Line
	5450 4650 5550 4650
$Comp
L power:GND #PWR0115
U 1 1 5C2BCF34
P 5450 4750
F 0 "#PWR0115" H 5450 4500 50  0001 C CNN
F 1 "GND" H 5455 4577 50  0000 C CNN
F 2 "" H 5450 4750 50  0001 C CNN
F 3 "" H 5450 4750 50  0001 C CNN
	1    5450 4750
	1    0    0    -1  
$EndComp
Wire Wire Line
	4000 3650 4200 3650
Wire Wire Line
	4200 3650 4200 3250
Wire Wire Line
	4200 3250 4700 3250
Wire Wire Line
	6150 3550 6700 3550
Wire Wire Line
	6700 3650 6150 3650
$Comp
L Device:C_Small C11
U 1 1 5C2BD8B5
P 4450 4250
F 0 "C11" H 4358 4204 50  0000 R CNN
F 1 "150nF" H 4358 4295 50  0000 R CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 4450 4250 50  0001 C CNN
F 3 "~" H 4450 4250 50  0001 C CNN
	1    4450 4250
	-1   0    0    1   
$EndComp
Wire Wire Line
	5550 3250 6000 3250
Text Label 6000 3250 2    50   ~ 0
USB3.3
Wire Wire Line
	4750 4150 4700 4150
Wire Wire Line
	4700 4150 4700 3550
Wire Wire Line
	4700 3550 4750 3550
Wire Wire Line
	4450 4150 4700 4150
Connection ~ 4700 4150
$Comp
L power:GND #PWR0116
U 1 1 5C2BEFC1
P 4450 4400
F 0 "#PWR0116" H 4450 4150 50  0001 C CNN
F 1 "GND" H 4455 4227 50  0000 C CNN
F 2 "" H 4450 4400 50  0001 C CNN
F 3 "" H 4450 4400 50  0001 C CNN
	1    4450 4400
	1    0    0    -1  
$EndComp
Wire Wire Line
	4450 4400 4450 4350
$Comp
L Device:C C10
U 1 1 5C2BF2BB
P 4700 3100
F 0 "C10" H 4815 3146 50  0000 L CNN
F 1 "10uF" H 4815 3055 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 4738 2950 50  0001 C CNN
F 3 "~" H 4700 3100 50  0001 C CNN
	1    4700 3100
	1    0    0    -1  
$EndComp
Connection ~ 4700 3250
Wire Wire Line
	4700 3250 5350 3250
$Comp
L power:GND #PWR0117
U 1 1 5C2BF368
P 4700 2950
F 0 "#PWR0117" H 4700 2700 50  0001 C CNN
F 1 "GND" H 4705 2777 50  0000 C CNN
F 2 "" H 4700 2950 50  0001 C CNN
F 3 "" H 4700 2950 50  0001 C CNN
	1    4700 2950
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_Push SWRST1
U 1 1 5C2BF6AF
P 5450 5450
F 0 "SWRST1" H 5450 5735 50  0000 C CNN
F 1 "SW_Push" H 5450 5644 50  0000 C CNN
F 2 "Button_Switch_SMD:Panasonic_EVQPUL_EVQPUC" H 5450 5650 50  0001 C CNN
F 3 "" H 5450 5650 50  0001 C CNN
F 4 "P10849SCT-ND" H 5450 5450 50  0001 C CNN "Digi-Key"
	1    5450 5450
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SWPRG1
U 1 1 5C2BF77A
P 5450 5850
F 0 "SWPRG1" H 5450 6135 50  0000 C CNN
F 1 "SW_Push" H 5450 6044 50  0000 C CNN
F 2 "Button_Switch_SMD:Panasonic_EVQPUL_EVQPUC" H 5450 6050 50  0001 C CNN
F 3 "" H 5450 6050 50  0001 C CNN
F 4 "P10849SCT-ND" H 5450 5850 50  0001 C CNN "Digi-Key"
	1    5450 5850
	1    0    0    -1  
$EndComp
Wire Wire Line
	5250 5450 5150 5450
Wire Wire Line
	5150 5450 5150 5850
Wire Wire Line
	5250 5850 5150 5850
Connection ~ 5150 5850
Wire Wire Line
	5150 5850 5150 6000
$Comp
L power:GND #PWR0118
U 1 1 5C2C0152
P 5150 6000
F 0 "#PWR0118" H 5150 5750 50  0001 C CNN
F 1 "GND" H 5155 5827 50  0000 C CNN
F 2 "" H 5150 6000 50  0001 C CNN
F 3 "" H 5150 6000 50  0001 C CNN
	1    5150 6000
	1    0    0    -1  
$EndComp
Wire Wire Line
	5650 5450 5950 5450
Wire Wire Line
	5650 5850 5950 5850
$Comp
L Device:C_Small CRST1
U 1 1 5C2C09DB
P 5950 5550
F 0 "CRST1" H 6042 5596 50  0000 L CNN
F 1 "150nF" H 6042 5505 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 5950 5550 50  0001 C CNN
F 3 "~" H 5950 5550 50  0001 C CNN
	1    5950 5550
	1    0    0    -1  
$EndComp
Connection ~ 5950 5450
Wire Wire Line
	5950 5450 6450 5450
$Comp
L Device:C_Small CPRG1
U 1 1 5C2C0A50
P 5950 5950
F 0 "CPRG1" H 6042 5996 50  0000 L CNN
F 1 "150nF" H 6042 5905 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 5950 5950 50  0001 C CNN
F 3 "~" H 5950 5950 50  0001 C CNN
	1    5950 5950
	1    0    0    -1  
$EndComp
Connection ~ 5950 5850
Wire Wire Line
	5950 5850 6450 5850
Wire Wire Line
	5950 5650 5850 5650
Wire Wire Line
	5850 5650 5850 6050
Wire Wire Line
	5950 6050 5850 6050
Connection ~ 5850 6050
Wire Wire Line
	5850 6050 5850 6150
$Comp
L power:GND #PWR0119
U 1 1 5C2C15E8
P 5850 6150
F 0 "#PWR0119" H 5850 5900 50  0001 C CNN
F 1 "GND" H 5855 5977 50  0000 C CNN
F 2 "" H 5850 6150 50  0001 C CNN
F 3 "" H 5850 6150 50  0001 C CNN
	1    5850 6150
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small RRST1
U 1 1 5C2C173B
P 5950 5350
F 0 "RRST1" H 6009 5396 50  0000 L CNN
F 1 "R_Small" H 6009 5305 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" H 5950 5350 50  0001 C CNN
F 3 "~" H 5950 5350 50  0001 C CNN
	1    5950 5350
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0120
U 1 1 5C2C17A7
P 5950 5250
F 0 "#PWR0120" H 5950 5100 50  0001 C CNN
F 1 "+3.3V" H 5965 5423 50  0000 C CNN
F 2 "" H 5950 5250 50  0001 C CNN
F 3 "" H 5950 5250 50  0001 C CNN
	1    5950 5250
	1    0    0    -1  
$EndComp
Text HLabel 6450 5450 2    50   Input ~ 0
RST
Text HLabel 6450 5850 2    50   Input ~ 0
PROG
Text Label 4700 3750 1    50   ~ 0
USB3.3
Text HLabel 6700 3550 2    50   Input ~ 0
U>E
Text HLabel 6700 3650 2    50   Input ~ 0
E>U
Text HLabel 4200 3075 1    50   Input ~ 0
+5V_USB
Wire Wire Line
	4200 3075 4200 3250
Connection ~ 4200 3250
Text HLabel 6350 4050 2    50   Input ~ 0
Charge_EN
Wire Wire Line
	6150 4050 6350 4050
$Comp
L Device:LED DUSB1
U 1 1 5C2DA5D6
P 6600 4375
F 0 "DUSB1" H 6591 4591 50  0000 C CNN
F 1 "LED" H 6591 4500 50  0000 C CNN
F 2 "LED_SMD:LED_0603_1608Metric_Pad1.05x0.95mm_HandSolder" H 6600 4375 50  0001 C CNN
F 3 "~" H 6600 4375 50  0001 C CNN
	1    6600 4375
	1    0    0    -1  
$EndComp
Wire Wire Line
	6450 4375 6450 4150
Wire Wire Line
	6450 4150 6150 4150
$Comp
L Device:R_Small R1
U 1 1 5C2DC6E6
P 6875 4375
F 0 "R1" V 6679 4375 50  0000 C CNN
F 1 "2.2k" V 6770 4375 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" H 6875 4375 50  0001 C CNN
F 3 "~" H 6875 4375 50  0001 C CNN
	1    6875 4375
	0    1    1    0   
$EndComp
Wire Wire Line
	6750 4375 6775 4375
Wire Wire Line
	6975 4375 7250 4375
Text Label 7250 4375 2    50   ~ 0
USB3.3
Text Notes 5125 5900 1    50   ~ 0
Footprints!\n
$EndSCHEMATC