EESchema Schematic File Version 4
LIBS:MainBoard-cache
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 4
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
L Device:Battery_Cell BT1
U 1 1 5C2BB0F5
P 4650 3550
F 0 "BT1" H 4768 3646 50  0000 L CNN
F 1 "Battery_Cell" H 4768 3555 50  0000 L CNN
F 2 "Connector_JST:JST_PH_S2B-PH-SM4-TB_1x02-1MP_P2.00mm_Horizontal" V 4650 3610 50  0001 C CNN
F 3 "~" V 4650 3610 50  0001 C CNN
F 4 "455-1749-1-ND" H 4650 3550 50  0001 C CNN "Digi-Key"
F 5 "S2B-PH-SM4-TB(LF)(SN)" H 4650 3550 50  0001 C CNN "MPN"
	1    4650 3550
	1    0    0    -1  
$EndComp
Text Notes 4775 3700 0    50   ~ 0
Should have built-in protection!\n
Wire Wire Line
	4650 3350 4650 3100
Wire Wire Line
	4650 3650 4650 3750
$Comp
L power:GND #PWR0107
U 1 1 5C2BBAFA
P 3475 4050
F 0 "#PWR0107" H 3475 3800 50  0001 C CNN
F 1 "GND" H 3480 3877 50  0000 C CNN
F 2 "" H 3475 4050 50  0001 C CNN
F 3 "" H 3475 4050 50  0001 C CNN
	1    3475 4050
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0108
U 1 1 5C2BBB67
P 6850 3600
F 0 "#PWR0108" H 6850 3350 50  0001 C CNN
F 1 "GND" H 6855 3427 50  0000 C CNN
F 2 "" H 6850 3600 50  0001 C CNN
F 3 "" H 6850 3600 50  0001 C CNN
	1    6850 3600
	1    0    0    -1  
$EndComp
Wire Wire Line
	6850 3600 6850 3500
Wire Wire Line
	4450 3000 4450 3100
Wire Wire Line
	4450 3100 4650 3100
Text HLabel 3100 2800 0    50   Input ~ 0
CHG_In
Wire Wire Line
	3100 2800 3425 2800
$Comp
L power:+3.3V #PWR0109
U 1 1 5C2BC187
P 7600 2950
F 0 "#PWR0109" H 7600 2800 50  0001 C CNN
F 1 "+3.3V" H 7615 3123 50  0000 C CNN
F 2 "" H 7600 2950 50  0001 C CNN
F 3 "" H 7600 2950 50  0001 C CNN
	1    7600 2950
	1    0    0    -1  
$EndComp
$Comp
L Device:C C52
U 1 1 5C2BC1E8
P 7450 3100
F 0 "C52" H 7565 3146 50  0000 L CNN
F 1 "10uF" H 7565 3055 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 7488 2950 50  0001 C CNN
F 3 "~" H 7450 3100 50  0001 C CNN
	1    7450 3100
	1    0    0    -1  
$EndComp
Wire Wire Line
	7450 2950 7600 2950
Wire Wire Line
	7450 3250 7450 3500
Wire Wire Line
	7450 3500 6850 3500
Connection ~ 6850 3500
Wire Wire Line
	6850 3500 6850 3350
$Comp
L Transistor_FET:IRLML6402 QPWR1
U 1 1 5C2C82E7
P 5500 3000
F 0 "QPWR1" V 5750 3000 50  0000 C CNN
F 1 "IRLML6402" V 5841 3000 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:SOT-23" H 5700 2925 50  0001 L CIN
F 3 "https://www.infineon.com/dgdl/irlml6402pbf.pdf?fileId=5546d462533600a401535668d5c2263c" H 5500 3000 50  0001 L CNN
F 4 "IRLML6402PBFCT-ND" V 5500 3000 50  0001 C CNN "Digi-Key"
F 5 "IRLML6402TRPBF" V 5500 3000 50  0001 C CNN "MPN"
	1    5500 3000
	0    -1   1    0   
$EndComp
Wire Wire Line
	5700 3100 5800 3100
Wire Wire Line
	3425 2800 3425 2625
Wire Wire Line
	3425 2550 4850 2550
Wire Wire Line
	5500 2550 5500 2800
$Comp
L Device:R_Small R52
U 1 1 5C2C9651
P 4850 2650
F 0 "R52" H 4909 2696 50  0000 L CNN
F 1 "10k" H 4909 2605 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric" H 4850 2650 50  0001 C CNN
F 3 "~" H 4850 2650 50  0001 C CNN
	1    4850 2650
	1    0    0    -1  
$EndComp
Connection ~ 4850 2550
Wire Wire Line
	4850 2550 5500 2550
$Comp
L power:GND #PWR0110
U 1 1 5C2C9709
P 4850 2750
F 0 "#PWR0110" H 4850 2500 50  0001 C CNN
F 1 "GND" H 4855 2577 50  0000 C CNN
F 2 "" H 4850 2750 50  0001 C CNN
F 3 "" H 4850 2750 50  0001 C CNN
	1    4850 2750
	1    0    0    -1  
$EndComp
Wire Wire Line
	5800 2550 5800 3100
$Comp
L power:+BATT #PWR0111
U 1 1 5C2C9BBC
P 6000 2550
F 0 "#PWR0111" H 6000 2400 50  0001 C CNN
F 1 "+BATT" H 6015 2723 50  0000 C CNN
F 2 "" H 6000 2550 50  0001 C CNN
F 3 "" H 6000 2550 50  0001 C CNN
	1    6000 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	5800 2550 6000 2550
$Comp
L Device:D_Schottky DPWR1
U 1 1 5C2CAD82
P 5650 2550
F 0 "DPWR1" H 5650 2334 50  0000 C CNN
F 1 "D_Schottky" H 5650 2425 50  0000 C CNN
F 2 "Diode_SMD:D_0603_1608Metric" H 5650 2550 50  0001 C CNN
F 3 "~" H 5650 2550 50  0001 C CNN
	1    5650 2550
	-1   0    0    1   
$EndComp
Connection ~ 5800 2550
Connection ~ 5500 2550
$Comp
L Device:C C50
U 1 1 5C2CB5FD
P 5900 3300
F 0 "C50" H 6015 3346 50  0000 L CNN
F 1 "10uF" H 6015 3255 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 5938 3150 50  0001 C CNN
F 3 "~" H 5900 3300 50  0001 C CNN
	1    5900 3300
	1    0    0    -1  
$EndComp
Wire Wire Line
	6375 3400 6375 3500
Wire Wire Line
	6375 3500 6850 3500
$Comp
L Device:R_Small R55
U 1 1 5C2CBFA2
P 5800 4500
F 0 "R55" H 5859 4546 50  0000 L CNN
F 1 "100k" H 5859 4455 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric" H 5800 4500 50  0001 C CNN
F 3 "~" H 5800 4500 50  0001 C CNN
	1    5800 4500
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R56
U 1 1 5C2CC030
P 5800 4700
F 0 "R56" H 5859 4746 50  0000 L CNN
F 1 "200k" H 5859 4655 50  0000 L CNN
F 2 "Resistor_SMD:R_0805_2012Metric" H 5800 4700 50  0001 C CNN
F 3 "~" H 5800 4700 50  0001 C CNN
	1    5800 4700
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0112
U 1 1 5C2CC17A
P 5800 4800
F 0 "#PWR0112" H 5800 4550 50  0001 C CNN
F 1 "GND" H 5805 4627 50  0000 C CNN
F 2 "" H 5800 4800 50  0001 C CNN
F 3 "" H 5800 4800 50  0001 C CNN
	1    5800 4800
	1    0    0    -1  
$EndComp
Wire Wire Line
	5800 4600 6250 4600
Connection ~ 5800 4600
Text HLabel 6250 4600 2    50   Input ~ 0
V_SENSE
$Comp
L power:GND #PWR0113
U 1 1 5C2CFEF2
P 4650 3750
F 0 "#PWR0113" H 4650 3500 50  0001 C CNN
F 1 "GND" H 4655 3577 50  0000 C CNN
F 2 "" H 4650 3750 50  0001 C CNN
F 3 "" H 4650 3750 50  0001 C CNN
	1    4650 3750
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_SPST SWPWR1
U 1 1 5C2D1614
P 5000 3100
F 0 "SWPWR1" H 5000 2925 50  0000 C CNN
F 1 "SW_SPST" H 5000 3000 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 5000 3100 50  0001 C CNN
F 3 "" H 5000 3100 50  0001 C CNN
	1    5000 3100
	1    0    0    -1  
$EndComp
Wire Wire Line
	4650 3100 4800 3100
Connection ~ 4650 3100
Wire Wire Line
	5200 3100 5300 3100
Wire Wire Line
	5800 4400 5800 4100
Text Label 5800 4100 3    50   ~ 0
B_Raw+
Text Label 4575 3100 3    50   ~ 0
B_Raw+
Wire Wire Line
	6025 3100 5900 3100
Connection ~ 5800 3100
$Comp
L Device:C_Small C51
U 1 1 5C2E8D17
P 6375 3300
F 0 "C51" H 6467 3346 50  0000 L CNN
F 1 "150nF" H 6467 3255 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 6375 3300 50  0001 C CNN
F 3 "~" H 6375 3300 50  0001 C CNN
	1    6375 3300
	1    0    0    -1  
$EndComp
Wire Wire Line
	5900 3150 5900 3100
Connection ~ 5900 3100
Wire Wire Line
	5900 3100 5800 3100
Wire Wire Line
	5900 3450 5900 3500
Wire Wire Line
	5900 3500 6375 3500
Connection ~ 6375 3500
Wire Wire Line
	6225 3100 6375 3100
Wire Wire Line
	6375 3200 6375 3100
Wire Wire Line
	3425 2800 3425 3000
Connection ~ 3425 2800
$Comp
L dk_PMIC-Voltage-Regulators-Linear:AP2114H-3_3TRG1 U50
U 1 1 5D266C28
P 6950 2850
F 0 "U50" H 6900 3137 60  0000 C CNN
F 1 "AP2114H-3_3TRG1" H 6900 3031 60  0000 C CNN
F 2 "digikey-footprints:SOT-223" H 7150 3050 60  0001 L CNN
F 3 "https://www.diodes.com/assets/Datasheets/AP2114.pdf" H 7150 3150 60  0001 L CNN
F 4 "AP2114H-3.3TRG1DICT-ND" H 7150 3250 60  0001 L CNN "Digi-Key_PN"
F 5 "AP2114H-3.3TRG1" H 7150 3350 60  0001 L CNN "MPN"
F 6 "Integrated Circuits (ICs)" H 7150 3450 60  0001 L CNN "Category"
F 7 "PMIC - Voltage Regulators - Linear" H 7150 3550 60  0001 L CNN "Family"
F 8 "https://www.diodes.com/assets/Datasheets/AP2114.pdf" H 7150 3650 60  0001 L CNN "DK_Datasheet_Link"
F 9 "/product-detail/en/diodes-incorporated/AP2114H-3.3TRG1/AP2114H-3.3TRG1DICT-ND/4505142" H 7150 3750 60  0001 L CNN "DK_Detail_Page"
F 10 "IC REG LINEAR 3.3V 1A SOT223" H 7150 3850 60  0001 L CNN "Description"
F 11 "Diodes Incorporated" H 7150 3950 60  0001 L CNN "Manufacturer"
F 12 "Active" H 7150 4050 60  0001 L CNN "Status"
	1    6950 2850
	1    0    0    -1  
$EndComp
Wire Wire Line
	6375 3100 6375 2850
Wire Wire Line
	6375 2850 6450 2850
Connection ~ 6375 3100
$Comp
L Device:L_Core_Ferrite_Small L1
U 1 1 5D26A5A4
P 6125 3100
F 0 "L1" V 5947 3100 50  0000 C CNN
F 1 "445-3654-1-ND" V 6038 3100 50  0000 C CNN
F 2 "Inductor_SMD:L_1210_3225Metric" H 6125 3100 50  0001 C CNN
F 3 "~" H 6125 3100 50  0001 C CNN
	1    6125 3100
	0    1    1    0   
$EndComp
Wire Wire Line
	4125 3000 4225 3000
$Comp
L Device:C_Small C53
U 1 1 5D275BE8
P 4225 3150
F 0 "C53" H 4317 3196 50  0000 L CNN
F 1 "10uF" H 4317 3105 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4225 3150 50  0001 C CNN
F 3 "~" H 4225 3150 50  0001 C CNN
	1    4225 3150
	1    0    0    -1  
$EndComp
Wire Wire Line
	4225 3000 4225 3050
Connection ~ 4225 3000
Wire Wire Line
	4225 3000 4450 3000
$Comp
L power:GND #PWR0125
U 1 1 5D2764A1
P 4225 3250
F 0 "#PWR0125" H 4225 3000 50  0001 C CNN
F 1 "GND" H 4230 3077 50  0000 C CNN
F 2 "" H 4225 3250 50  0001 C CNN
F 3 "" H 4225 3250 50  0001 C CNN
	1    4225 3250
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C54
U 1 1 5D27ADB3
P 3325 2625
F 0 "C54" V 3096 2625 50  0000 C CNN
F 1 "1uF" V 3187 2625 50  0000 C CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 3325 2625 50  0001 C CNN
F 3 "~" H 3325 2625 50  0001 C CNN
	1    3325 2625
	0    1    1    0   
$EndComp
Connection ~ 3425 2625
Wire Wire Line
	3425 2625 3425 2550
$Comp
L power:GND #PWR0131
U 1 1 5D27AEC9
P 3175 2625
F 0 "#PWR0131" H 3175 2375 50  0001 C CNN
F 1 "GND" V 3180 2497 50  0000 R CNN
F 2 "" H 3175 2625 50  0001 C CNN
F 3 "" H 3175 2625 50  0001 C CNN
	1    3175 2625
	0    1    1    0   
$EndComp
Wire Wire Line
	3175 2625 3225 2625
Wire Wire Line
	7350 2850 7450 2850
Wire Wire Line
	7450 2850 7450 2950
Connection ~ 7450 2950
NoConn ~ 7350 2950
$Comp
L dk_PMIC-Battery-Chargers:MAX1555EZK_T U4
U 1 1 5D2797BC
P 3575 3400
F 0 "U4" H 3247 3453 60  0000 R CNN
F 1 "MAX1555EZK_T" H 3247 3347 60  0000 R CNN
F 2 "digikey-footprints:SOT-753" H 3775 3600 60  0001 L CNN
F 3 "https://datasheets.maximintegrated.com/en/ds/MAX1551-MAX1555.pdf" H 3775 3700 60  0001 L CNN
F 4 "MAX1555EZK+TCT-ND" H 3775 3800 60  0001 L CNN "Digi-Key_PN"
F 5 "MAX1555EZK+T" H 3775 3900 60  0001 L CNN "MPN"
F 6 "Integrated Circuits (ICs)" H 3775 4000 60  0001 L CNN "Category"
F 7 "PMIC - Battery Chargers" H 3775 4100 60  0001 L CNN "Family"
F 8 "https://datasheets.maximintegrated.com/en/ds/MAX1551-MAX1555.pdf" H 3775 4200 60  0001 L CNN "DK_Datasheet_Link"
F 9 "/product-detail/en/maxim-integrated/MAX1555EZK-T/MAX1555EZK-TCT-ND/2699449" H 3775 4300 60  0001 L CNN "DK_Detail_Page"
F 10 "IC BATT CHRGR LI+ 1CELL SOT23-5" H 3775 4400 60  0001 L CNN "Description"
F 11 "Maxim Integrated" H 3775 4500 60  0001 L CNN "Manufacturer"
F 12 "Active" H 3775 4600 60  0001 L CNN "Status"
	1    3575 3400
	1    0    0    -1  
$EndComp
Wire Wire Line
	3425 3000 3475 3000
Wire Wire Line
	3875 3500 4125 3500
Wire Wire Line
	4125 3000 4125 3500
Wire Wire Line
	3475 3800 3475 4050
Text HLabel 4000 3750 3    50   Input ~ 0
CHG_Stat
Wire Wire Line
	3875 3400 4000 3400
Wire Wire Line
	4000 3400 4000 3750
$EndSCHEMATC
