EESchema Schematic File Version 4
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
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
L dk_Optical-Sensors-Photo-Detectors-Remote-Receiver:TSSP58038 U1
U 1 1 5DA6122B
P 5325 3975
F 0 "U1" V 5402 3747 50  0000 R CNN
F 1 "TSSP58038" V 5311 3747 50  0000 R CNN
F 2 "digikey-footprints:TO-92-3_Formed_Leads" H 5525 4175 60  0001 L CNN
F 3 "http://www.vishay.com/docs/82479/tssp58038.pdf" H 5525 4275 60  0001 L CNN
F 4 "TSSP58038-ND" H 5525 4375 60  0001 L CNN "Digi-Key_PN"
F 5 "TSOP322..." H 5525 4475 60  0001 L CNN "MPN"
F 6 "Sensors, Transducers" H 5525 4575 60  0001 L CNN "Category"
F 7 "Optical Sensors - Photo Detectors - Remote Receiver" H 5525 4675 60  0001 L CNN "Family"
F 8 "http://www.vishay.com/docs/82479/tssp58038.pdf" H 5525 4775 60  0001 L CNN "DK_Datasheet_Link"
F 9 "/product-detail/en/vishay-semiconductor-opto-division/TSSP58038/TSSP58038-ND/4695717" H 5525 4875 60  0001 L CNN "DK_Detail_Page"
F 10 "SENSOR REMOTE REC 38.0KHZ 25M" H 5525 4975 60  0001 L CNN "Description"
F 11 "Vishay Semiconductor Opto Division" H 5525 5075 60  0001 L CNN "Manufacturer"
F 12 "Active" H 5525 5175 60  0001 L CNN "Status"
	1    5325 3975
	0    -1   -1   0   
$EndComp
$Comp
L LED:NeoPixel_THT D1
U 1 1 5DA61648
P 5325 2750
F 0 "D1" H 5666 2796 50  0000 L CNN
F 1 "NeoPixel_THT" H 5666 2705 50  0000 L CNN
F 2 "LED_THT:LED_D5.0mm-4_RGB_Staggered_Pins" H 5375 2450 50  0001 L TNN
F 3 "https://www.adafruit.com/product/1938" H 5425 2375 50  0001 L TNN
	1    5325 2750
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C1
U 1 1 5DA61822
P 4925 4600
F 0 "C1" H 5017 4646 50  0000 L CNN
F 1 "C_Small" H 5017 4555 50  0000 L CNN
F 2 "Capacitor_SMD:C_0805_2012Metric" H 4925 4600 50  0001 C CNN
F 3 "~" H 4925 4600 50  0001 C CNN
	1    4925 4600
	1    0    0    -1  
$EndComp
$Comp
L Device:R_Small R1
U 1 1 5DA61990
P 4675 4475
F 0 "R1" V 4479 4475 50  0000 C CNN
F 1 "R_Small" V 4570 4475 50  0000 C CNN
F 2 "Resistor_SMD:R_0805_2012Metric" H 4675 4475 50  0001 C CNN
F 3 "~" H 4675 4475 50  0001 C CNN
	1    4675 4475
	0    1    1    0   
$EndComp
Wire Wire Line
	4775 4475 4925 4475
Wire Wire Line
	4925 4475 4925 4500
Connection ~ 4925 4475
$Comp
L power:GND #PWR0101
U 1 1 5DA61A28
P 4925 4700
F 0 "#PWR0101" H 4925 4450 50  0001 C CNN
F 1 "GND" H 4930 4527 50  0000 C CNN
F 2 "" H 4925 4700 50  0001 C CNN
F 3 "" H 4925 4700 50  0001 C CNN
	1    4925 4700
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x05_Male J1
U 1 1 5DA61D0D
P 3850 3225
F 0 "J1" H 3956 3603 50  0000 C CNN
F 1 "Conn_01x05_Male" H 3956 3512 50  0000 C CNN
F 2 "Connector_PinHeader_2.00mm:PinHeader_1x05_P2.00mm_Vertical" H 3850 3225 50  0001 C CNN
F 3 "~" H 3850 3225 50  0001 C CNN
	1    3850 3225
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x05_Male J2
U 1 1 5DA61F39
P 6900 3225
F 0 "J2" H 6873 3155 50  0000 R CNN
F 1 "Conn_01x05_Male" H 6873 3246 50  0000 R CNN
F 2 "Connector_PinHeader_2.00mm:PinHeader_1x05_P2.00mm_Vertical" H 6900 3225 50  0001 C CNN
F 3 "~" H 6900 3225 50  0001 C CNN
	1    6900 3225
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR0102
U 1 1 5DA62182
P 5325 3050
F 0 "#PWR0102" H 5325 2800 50  0001 C CNN
F 1 "GND" H 5330 2877 50  0000 C CNN
F 2 "" H 5325 3050 50  0001 C CNN
F 3 "" H 5325 3050 50  0001 C CNN
	1    5325 3050
	1    0    0    -1  
$EndComp
$Comp
L power:+BATT #PWR0103
U 1 1 5DA6221F
P 5325 2450
F 0 "#PWR0103" H 5325 2300 50  0001 C CNN
F 1 "+BATT" H 5340 2623 50  0000 C CNN
F 2 "" H 5325 2450 50  0001 C CNN
F 3 "" H 5325 2450 50  0001 C CNN
	1    5325 2450
	1    0    0    -1  
$EndComp
$Comp
L power:+3.3V #PWR0104
U 1 1 5DA6241D
P 4525 4475
F 0 "#PWR0104" H 4525 4325 50  0001 C CNN
F 1 "+3.3V" V 4540 4603 50  0000 L CNN
F 2 "" H 4525 4475 50  0001 C CNN
F 3 "" H 4525 4475 50  0001 C CNN
	1    4525 4475
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4525 4475 4575 4475
$Comp
L power:GND #PWR0105
U 1 1 5DA6263C
P 5125 4375
F 0 "#PWR0105" H 5125 4125 50  0001 C CNN
F 1 "GND" V 5130 4247 50  0000 R CNN
F 2 "" H 5125 4375 50  0001 C CNN
F 3 "" H 5125 4375 50  0001 C CNN
	1    5125 4375
	0    1    1    0   
$EndComp
$Comp
L dk_Optical-Sensors-Photo-Detectors-Remote-Receiver:TSSP58038 U2
U 1 1 5DA62FD9
P 6200 3975
F 0 "U2" V 6277 3747 50  0000 R CNN
F 1 "TSSP58038" V 6186 3747 50  0000 R CNN
F 2 "digikey-footprints:TO-92-3_Formed_Leads" H 6400 4175 60  0001 L CNN
F 3 "http://www.vishay.com/docs/82479/tssp58038.pdf" H 6400 4275 60  0001 L CNN
F 4 "TSSP58038-ND" H 6400 4375 60  0001 L CNN "Digi-Key_PN"
F 5 "TSOP322..." H 6400 4475 60  0001 L CNN "MPN"
F 6 "Sensors, Transducers" H 6400 4575 60  0001 L CNN "Category"
F 7 "Optical Sensors - Photo Detectors - Remote Receiver" H 6400 4675 60  0001 L CNN "Family"
F 8 "http://www.vishay.com/docs/82479/tssp58038.pdf" H 6400 4775 60  0001 L CNN "DK_Datasheet_Link"
F 9 "/product-detail/en/vishay-semiconductor-opto-division/TSSP58038/TSSP58038-ND/4695717" H 6400 4875 60  0001 L CNN "DK_Detail_Page"
F 10 "SENSOR REMOTE REC 38.0KHZ 25M" H 6400 4975 60  0001 L CNN "Description"
F 11 "Vishay Semiconductor Opto Division" H 6400 5075 60  0001 L CNN "Manufacturer"
F 12 "Active" H 6400 5175 60  0001 L CNN "Status"
	1    6200 3975
	0    -1   -1   0   
$EndComp
$Comp
L dk_Optical-Sensors-Photo-Detectors-Remote-Receiver:TSSP58038 U3
U 1 1 5DA63077
P 7075 3975
F 0 "U3" V 7152 3747 50  0000 R CNN
F 1 "TSSP58038" V 7061 3747 50  0000 R CNN
F 2 "digikey-footprints:TO-92-3_Formed_Leads" H 7275 4175 60  0001 L CNN
F 3 "http://www.vishay.com/docs/82479/tssp58038.pdf" H 7275 4275 60  0001 L CNN
F 4 "TSSP58038-ND" H 7275 4375 60  0001 L CNN "Digi-Key_PN"
F 5 "TSOP322..." H 7275 4475 60  0001 L CNN "MPN"
F 6 "Sensors, Transducers" H 7275 4575 60  0001 L CNN "Category"
F 7 "Optical Sensors - Photo Detectors - Remote Receiver" H 7275 4675 60  0001 L CNN "Family"
F 8 "http://www.vishay.com/docs/82479/tssp58038.pdf" H 7275 4775 60  0001 L CNN "DK_Datasheet_Link"
F 9 "/product-detail/en/vishay-semiconductor-opto-division/TSSP58038/TSSP58038-ND/4695717" H 7275 4875 60  0001 L CNN "DK_Detail_Page"
F 10 "SENSOR REMOTE REC 38.0KHZ 25M" H 7275 4975 60  0001 L CNN "Description"
F 11 "Vishay Semiconductor Opto Division" H 7275 5075 60  0001 L CNN "Manufacturer"
F 12 "Active" H 7275 5175 60  0001 L CNN "Status"
	1    7075 3975
	0    -1   -1   0   
$EndComp
Wire Wire Line
	5125 4375 5325 4375
Wire Wire Line
	5325 4375 5325 4175
Wire Wire Line
	5325 4375 6200 4375
Wire Wire Line
	6200 4375 6200 4175
Connection ~ 5325 4375
Wire Wire Line
	6200 4375 7075 4375
Wire Wire Line
	7075 4375 7075 4175
Connection ~ 6200 4375
Wire Wire Line
	5425 4475 5425 4175
Wire Wire Line
	4925 4475 5425 4475
Wire Wire Line
	5425 4475 6300 4475
Wire Wire Line
	6300 4475 6300 4175
Connection ~ 5425 4475
Wire Wire Line
	6300 4475 7175 4475
Wire Wire Line
	7175 4475 7175 4175
Connection ~ 6300 4475
Wire Wire Line
	6975 4175 6975 4300
Wire Wire Line
	6975 4300 6700 4300
Wire Wire Line
	5225 4175 5225 4300
Connection ~ 5225 4300
Wire Wire Line
	6100 4175 6100 4300
Connection ~ 6100 4300
Wire Wire Line
	6100 4300 5225 4300
$Comp
L power:GND #PWR0106
U 1 1 5DA63FAF
P 4050 3225
F 0 "#PWR0106" H 4050 2975 50  0001 C CNN
F 1 "GND" V 4055 3097 50  0000 R CNN
F 2 "" H 4050 3225 50  0001 C CNN
F 3 "" H 4050 3225 50  0001 C CNN
	1    4050 3225
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4050 3025 4200 3025
Wire Wire Line
	6700 3025 6500 3025
$Comp
L power:GND #PWR0107
U 1 1 5DA644D1
P 6500 3225
F 0 "#PWR0107" H 6500 2975 50  0001 C CNN
F 1 "GND" V 6505 3097 50  0000 R CNN
F 2 "" H 6500 3225 50  0001 C CNN
F 3 "" H 6500 3225 50  0001 C CNN
	1    6500 3225
	0    1    1    0   
$EndComp
$Comp
L power:+BATT #PWR0108
U 1 1 5DA649A5
P 4200 3025
F 0 "#PWR0108" H 4200 2875 50  0001 C CNN
F 1 "+BATT" V 4215 3153 50  0000 L CNN
F 2 "" H 4200 3025 50  0001 C CNN
F 3 "" H 4200 3025 50  0001 C CNN
	1    4200 3025
	0    1    1    0   
$EndComp
Wire Wire Line
	4825 3125 4825 2750
Wire Wire Line
	4825 2750 5025 2750
Wire Wire Line
	5625 2750 6075 2750
Wire Wire Line
	6075 2750 6075 3125
$Comp
L power:+BATT #PWR0109
U 1 1 5DA657E2
P 6500 3025
F 0 "#PWR0109" H 6500 2875 50  0001 C CNN
F 1 "+BATT" V 6515 3152 50  0000 L CNN
F 2 "" H 6500 3025 50  0001 C CNN
F 3 "" H 6500 3025 50  0001 C CNN
	1    6500 3025
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4050 3425 5000 3425
Wire Wire Line
	5000 3425 5000 4300
Wire Wire Line
	5000 4300 5225 4300
Wire Wire Line
	4050 3325 4225 3325
$Comp
L power:+3.3V #PWR0110
U 1 1 5DA6668C
P 4225 3325
F 0 "#PWR0110" H 4225 3175 50  0001 C CNN
F 1 "+3.3V" V 4240 3453 50  0000 L CNN
F 2 "" H 4225 3325 50  0001 C CNN
F 3 "" H 4225 3325 50  0001 C CNN
	1    4225 3325
	0    1    1    0   
$EndComp
$Comp
L power:+3.3V #PWR0111
U 1 1 5DA667D6
P 6500 3325
F 0 "#PWR0111" H 6500 3175 50  0001 C CNN
F 1 "+3.3V" V 6515 3453 50  0000 L CNN
F 2 "" H 6500 3325 50  0001 C CNN
F 3 "" H 6500 3325 50  0001 C CNN
	1    6500 3325
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6500 3325 6700 3325
Wire Wire Line
	6700 3425 6700 4300
Connection ~ 6700 4300
Wire Wire Line
	6700 4300 6100 4300
Wire Wire Line
	4050 3125 4825 3125
Wire Wire Line
	6500 3225 6700 3225
Wire Wire Line
	6075 3125 6700 3125
$EndSCHEMATC
