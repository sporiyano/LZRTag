#include <stdio.h>
const unsigned char empty_click[] = {
0x7c, 0x66, 0x5b, 0x74, 0x87, 0x87, 0xa5, 0xb7, 0xa1, 0x8d, 0x87, 0x6f, 0x57, 0x5f, 0x64, 0x56, 
0x6b, 0x98, 0xa6, 0xa6, 0x98, 0x7c, 0x6c, 0x6e, 0x74, 0x7a, 0x83, 0x81, 0x79, 0x79, 0x81, 0x74, 
0x6a, 0x7c, 0x7d, 0x63, 0x58, 0x79, 0x9f, 0xac, 0xb6, 0xa9, 0x72, 0x4e, 0x4f, 0x62, 0x89, 0xa2, 
0x9e, 0x9a, 0x94, 0x93, 0x8c, 0x71, 0x82, 0x72, 0x4c, 0x55, 0x6d, 0x70, 0x81, 0x85, 0x79, 0x9c, 
0xb3, 0xa7, 0x99, 0x87, 0x71, 0x72, 0x68, 0x59, 0x62, 0x70, 0x6d, 0x72, 0x88, 0x97, 0xa1, 0xa4, 
0xa4, 0x93, 0x78, 0x69, 0x6a, 0x6c, 0x73, 0x85, 0x7d, 0x70, 0x79, 0x7a, 0x76, 0x7b, 0x83, 0x89, 
0x84, 0x77, 0x7a, 0x8b, 0x95, 0x9a, 0x95, 0x82, 0x7a, 0x7d, 0x7d, 0x82, 0x8b, 0x8b, 0x76, 0x68, 
0x68, 0x61, 0x64, 0x79, 0x87, 0x8b, 0x8e, 0x91, 0x92, 0x88, 0x79, 0x80, 0x85, 0x82, 0x78, 0x6f, 
0x6d, 0x6e, 0x77, 0x88, 0x8b, 0x84, 0x88, 0x93, 0x8c, 0x7d, 0x7a, 0x83, 0x7a, 0x5a, 0x5c, 0x7c, 
0x7b, 0x86, 0xa4, 0xa0, 0x91, 0x87, 0x74, 0x77, 0x93, 0x95, 0x7c, 0x6d, 0x70, 0x69, 0x69, 0x7b, 
0x87, 0x82, 0x86, 0x90, 0x8a, 0x81, 0x82, 0x80, 0x72, 0x6c, 0x68, 0x66, 0x75, 0x82, 0x84, 0x95, 
0x9f, 0x96, 0x8d, 0x80, 0x6d, 0x6d, 0x76, 0x7e, 0x8c, 0x8b, 0x84, 0x84, 0x80, 0x7b, 0x7b, 0x76, 
0x77, 0x80, 0x80, 0x7d, 0x83, 0x8a, 0x87, 0x78, 0x7b, 0x7e, 0x74, 0x72, 0x79, 0x7b, 0x78, 0x78, 
0x79, 0x88, 0x96, 0x9b, 0x94, 0x89, 0x7e, 0x77, 0x74, 0x72, 0x6e, 0x70, 0x78, 0x81, 0x8b, 0x8f, 
0x8a, 0x86, 0x86, 0x84, 0x7b, 0x78, 0x7c, 0x76, 0x6e, 0x76, 0x80, 0x7e, 0x81, 0x82, 0x81, 0x85, 
0x89, 0x84, 0x81, 0x80, 0x7a, 0x77, 0x7b, 0x7e, 0x83, 0x89, 0x89, 0x81, 0x7c, 0x7a, 0x7b, 0x84, 
0x87, 0x7d, 0x78, 0x79, 0x77, 0x76, 0x7b, 0x80, 0x80, 0x84, 0x87, 0x85, 0x83, 0x83, 0x7e, 0x80, 
0x82, 0x7c, 0x79, 0x7d, 0x81, 0x82, 0x84, 0x83, 0x7b, 0x7b, 0x81, 0x7e, 0x7c, 0x7e, 0x79, 0x77, 
0x80, 0x80, 0x7c, 0x82, 0x84, 0x7e, 0x7e, 0x7c, 0x78, 0x7c, 0x83, 0x83, 0x83, 0x81, 0x7b, 0x7d, 
0x86, 0x86, 0x7e, 0x7c, 0x7d, 0x7d, 0x80, 0x83, 0x82, 0x81, 0x80, 0x7b, 0x7a, 0x7d, 0x7b, 0x7a, 
0x83, 0x88, 0x85, 0x82, 0x7c, 0x7a, 0x7d, 0x80, 0x7d, 0x7c, 0x7e, 0x80, 0x82, 0x85, 0x82, 0x7c, 
0x7c, 0x7c, 0x7b, 0x7c, 0x7e, 0x7e, 0x82, 0x84, 0x82, 0x81, 0x80, 0x7b, 0x7b, 0x81, 0x81, 0x7e, 
0x80, 0x81, 0x81, 0x80, 0x7d, 0x7c, 0x7d, 0x83, 0x80, 0x7e, 0x82, 0x7c, 0x78, 0x7c, 0x80, 0x80, 
0x82, 0x84, 0x82, 0x82, 0x82, 0x7e, 0x7e, 0x7d, 0x7a, 0x79, 0x7d, 0x81, 0x83, 0x88, 0x87, 0x80, 
0x7a, 0x78, 0x78, 0x7b, 0x7e, 0x7e, 0x80, 0x83, 0x80, 0x7e, 0x7e, 0x7d, 0x7d, 0x81, 0x80, 0x7c, 
0x7c, 0x7d, 0x7e, 0x85, 0x86, 0x80, 0x7e, 0x82, 0x82, 0x80, 0x80, 0x7c, 0x7d, 0x80, 0x7d, 0x7b, 
0x7e, 0x80, 0x80, 0x82, 0x82, 0x7e, 0x7d, 0x7e, 0x7d, 0x7e, 0x81, 0x7e, 0x7c, 0x7d, 0x7e, 0x80, 
0x82, 0x81, 0x7c, 0x7e, 0x81, 0x7e, 0x7d, 0x7e, 0x7e, 0x81, 0x83, 0x80, 0x7e, 0x7e, 0x7b, 0x7b, 
0x7e, 0x7e, 0x7e, 0x83, 0x82, 0x7d, 0x7f, 0x7e, 0x7c, 0x80, 0x82, 0x7b, 0x7c, 0x85, 0x82, 0x7d, 
0x80, 0x81, 0x83, 0x82, 0x7b, 0x7a, 0x7d, 0x7e, 0x7d, 0x81, 0x83, 0x7e, 0x7c, 0x80, 0x80, 0x80, 
0x81, 0x7d, 0x7b, 0x7d, 0x7c, 0x7c, 0x83, 0x85, 0x82, 0x81, 0x7e, 0x79, 0x7c, 0x81, 0x82, 0x81, 
0x81, 0x7e, 0x7d, 0x81, 0x82, 0x80, 0x82, 0x82, 0x7b, 0x79, 0x7e, 0x7e, 0x7d, 0x80, 0x80, 0x7e, 
0x82, 0x81, 0x7d, 0x81, 0x82, 0x7d, 0x7d, 0x7e, 0x7c, 0x7d, 0x81, 0x81, 0x82, 0x83, 0x7e, 0x7c, 
0x81, 0x81, 0x7d, 0x80, 0x80, 0x7c, 0x7c, 0x7e, 0x7d, 0x80, 0x81, 0x7e, 0x7d, 0x80, 0x7e, 0x7d, 
0x82, 0x82, 0x7e, 0x7e, 0x80, 0x7d, 0x7e, 0x81, 0x7e, 0x7e, 0x81, 0x80, 0x7d, 0x81, 0x80, 0x7c, 
0x80, 0x81, 0x7d, 0x7e, 0x80, 0x7d, 0x7e, 0x81, 0x7e, 0x7d, 0x80, 0x7e, 0x7d, 0x81, 0x81, 0x7e, 
0x80, 0x80, 0x7d, 0x7e, 0x80, 0x7e, 0x7e, 0x81, 0x80, 0x7e, 0x81, 0x80, 0x7d, 0x80, 0x80, 0x7d, 
0x7e, 0x80, 0x7e, 0x7e, 0x81, 0x7e, 0x7e, 0x81, 0x80, 0x7e, 0x80, 0x80, 0x7d, 0x80, 0x81, 0x7d, 
0x7e, 0x80, 0x7e, 0x7d, 0x81, 0x80, 0x7d, 0x80, 0x80, 0x7e, 0x81, 0x81, 0x7d, 0x7d, 0x81, 0x7e, 
0x7d, 0x80, 0x7d, 0x7d, 0x81, 0x80, 0x7d, 0x80, 0x81, 0x7e, 0x81, 0x81, 0x7d, 0x7d, 0x81, 0x80, 
0x7d, 0x81, 0x7e, 0x7c, 0x81, 0x81, 0x7d, 0x80, 0x81, 0x7d, 0x7e, 0x82, 0x7d, 0x7d, 0x81, 0x80, 
0x7e, 0x80, 0x80, 0x7c, 0x80, 0x82, 0x7d, 0x80, 0x81, 0x7e, 0x7e, 0x82, 0x7e, 0x7c, 0x81, 0x80, 
0x7d, 0x81, 0x81, 0x7c, 0x80, 0x83, 0x7d, 0x7d, 0x81, 0x7c, 0x7d, 0x82, 0x80, 0x7c, 0x80, 0x81, 
0x7c, 0x81, 0x82, 0x7c, 0x7e, 0x82, 0x7e, 0x7d, 0x82, 0x7d, 0x7b, 0x82, 0x81, 0x7c, 0x80, 0x81, 
0x7c, 0x81, 0x83, 0x7b, 0x7c, 0x82, 0x7e, 0x7d, 0x82, 0x7e, 0x7a, 0x82, 0x82, 0x7b, 0x80, 0x82, 
0x7c, 0x80, 0x84, 0x7d, 0x7c, 0x83, 0x7e, 0x7c, 0x83, 0x7e, 0x7a, 0x81, 0x83, 0x7b, 0x7e, 0x82, 
0x7b, 0x7e, 0x85, 0x7d, 0x7b, 0x82, 0x80, 0x7c, 0x83, 0x81, 0x79, 0x81, 0x83, 0x7c, 0x7e, 0x83, 
0x7b, 0x7d, 0x85, 0x7e, 0x7b, 0x83, 0x80, 0x7a, 0x83, 0x82, 0x79, 0x80, 0x84, 0x7b, 0x7e, 0x84, 
0x7b, 0x7b, 0x85, 0x80, 0x7a, 0x82, 0x80, 0x7a, 0x83, 0x84, 0x7a, 0x7e, 0x84, 0x7b, 0x7d, 0x85, 
0x7c, 0x7a, 0x84, 0x80, 0x7a, 0x83, 0x81, 0x79, 0x82, 0x85, 0x7a, 0x7d, 0x84, 0x7b, 0x7c, 0x85, 
0x7d, 0x79, 0x84, 0x81, 0x79, 0x82, 0x82, 0x79, 0x81, 0x85, 0x7b, 0x7d, 0x84, 0x7c, 0x7b, 0x85, 
0x7e, 0x79, 0x83, 0x81, 0x7a, 0x82, 0x84, 0x79, 0x7e, 0x85, 0x7b, 0x7c, 0x85, 0x7c, 0x79, 0x85, 
0x81, 0x79, 0x83, 0x82, 0x79, 0x82, 0x84, 0x79, 0x7d, 0x85, 0x7b, 0x7b, 0x85, 0x7d, 0x79, 0x84, 
0x81, 0x79, 0x82, 0x83, 0x79, 0x80, 0x85, 0x7a, 0x7c, 0x85, 0x7c, 0x7b, 0x85, 0x7e, 0x78, 0x84, 
0x82, 0x7a, 0x82, 0x83, 0x79, 0x7e, 0x86, 0x7b, 0x7c, 0x85, 0x7d, 0x7a, 0x85, 0x81, 0x79, 0x83, 
0x83, 0x79, 0x81, 0x84, 0x79, 0x7d, 0x85, 0x7c, 0x7b, 0x85, 0x7d, 0x79, 0x85, 0x82, 0x79, 0x82, 
0x83, 0x78, 0x80, 0x86, 0x79, 0x7b, 0x86, 0x7d, 0x7a, 0x84, 0x80, 0x79, 0x85, 0x82, 0x79, 0x83, 
0x83, 0x75, 0x7d, 0x87, 0x7b, 0x7d, 0x88, 0x7d, 0x78, 0x83, 0x81, 0x7a, 0x83, 0x82, 0x79, 0x84, 
0x83, 0x73, 0x7c, 0x8b, 0x80, 0x7a, 0x86, 0x81, 0x79, 0x80, 0x7c, 0x78, 0x84, 0x85, 0x79, 0x82, 
0x87, 0x77, 0x78, 0x84, 0x7d, 0x7c, 0x87, 0x81, 0x79, 0x86, 0x81, 0x74, 0x7e, 0x84, 0x79, 0x7e, 
0x86, 0x7b, 0x7d, 0x87, 0x7d, 0x78, 0x84, 0x81, 0x78, 0x83, 0x82, 0x78, 0x82, 0x86, 0x79, 0x7d, 
0x85, 0x7a, 0x7a, 0x87, 0x7e, 0x79, 0x85, 0x82, 0x79, 0x82, 0x82, 0x77, 0x80, 0x85, 0x7a, 0x7d, 
0x87, 0x7d, 0x7b, 0x86, 0x7e, 0x77, 0x83, 0x82, 0x78, 0x82, 0x84, 0x7a, 0x80, 0x84, 0x79, 0x7b, 
0x86, 0x7c, 0x7a, 0x86, 0x82, 0x79, 0x82, 0x81, 0x77, 0x80, 0x84, 0x7a, 0x80, 0x86, 0x7b, 0x7c, 
0x87, 0x7d, 0x77, 0x83, 0x81, 0x7a, 0x83, 0x82, 0x79, 0x81, 0x85, 0x7a, 0x7c, 0x85, 0x7b, 0x7a, 
0x85, 0x80, 0x79, 0x83, 0x82, 0x79, 0x82, 0x83, 0x78, 0x7e, 0x85, 0x7b, 0x7d, 0x86, 0x7c, 0x7a, 
0x85, 0x80, 0x79, 0x83, 0x81, 0x79, 0x82, 0x85, 0x79, 0x7d, 0x85, 0x7b, 0x7c, 0x84, 0x7c, 0x79, 
0x85, 0x82, 0x79, 0x83, 0x82, 0x78, 0x81, 0x85, 0x7a, 0x7c, 0x85, 0x7d, 0x7c, 0x85, 0x7d, 0x79, 
0x84, 0x82, 0x7a, 0x82, 0x82, 0x79, 0x81, 0x85, 0x7a, 0x7c, 0x84, 0x7c, 0x7c, 0x85, 0x7e, 0x79, 
0x83, 0x82, 0x7a, 0x81, 0x82, 0x79, 0x7e, 0x85, 0x7c, 0x7c, 0x84, 0x7c, 0x7b, 0x85, 0x80, 0x78, 
0x82, 0x82, 0x7b, 0x82, 0x83, 0x79, 0x7d, 0x85, 0x7d, 0x7c, 0x83, 0x7c, 0x7b, 0x85, 0x81, 0x79, 
0x81, 0x82, 0x7b, 0x81, 0x84, 0x7a, 0x7c, 0x84, 0x7e, 0x7c, 0x83, 0x7d, 0x7a, 0x84, 0x82, 0x7a, 
0x80, 0x82, 0x7b, 0x81, 0x84, 0x7b, 0x7b, 0x83, 0x7e, 0x7c, 0x83, 0x7e, 0x79, 0x82, 0x83, 0x7b, 
0x80, 0x82, 0x7a, 0x80, 0x85, 0x7c, 0x7b, 0x82, 0x7e, 0x7c, 0x84, 0x80, 0x79, 0x81, 0x83, 0x7c, 
0x80, 0x82, 0x7a, 0x7e, 0x85, 0x7d, 0x7c, 0x82, 0x7e, 0x7c, 0x84, 0x81, 0x79, 0x80, 0x82, 0x7c, 
0x81, 0x82, 0x7b, 0x7d, 0x84, 0x80, 0x7c, 0x82, 0x7e, 0x7c, 0x83, 0x82, 0x7a, 0x7e, 0x82, 0x7c, 
0x80, 0x83, 0x7b, 0x7c, 0x83, 0x80, 0x7d, 0x82, 0x7e, 0x7b, 0x82, 0x82, 0x7b, 0x7e, 0x81, 0x7d, 
0x80, 0x83, 0x7c, 0x7c, 0x82, 0x80, 0x7d, 0x82, 0x7e, 0x7b, 0x81, 0x83, 0x7c, 0x7e, 0x81, 0x7c, 
0x7e, 0x84, 0x7d, 0x7b, 0x81, 0x80, 0x7d, 0x82, 0x80, 0x7b, 0x80, 0x82, 0x7d, 0x7e, 0x81, 0x7c, 
0x7e, 0x83, 0x7e, 0x7c, 0x81, 0x80, 0x7d, 0x82, 0x81, 0x7b, 0x80, 0x82, 0x7d, 0x80, 0x82, 0x7c, 
0x7d, 0x83, 0x80, 0x7c, 0x81, 0x7e, 0x7c, 0x82, 0x82, 0x7b, 0x7e, 0x82, 0x7d, 0x80, 0x82, 0x7c, 
0x7c, 0x82, 0x80, 0x7d, 0x81, 0x7e, 0x7c, 0x81, 0x82, 0x7c, 0x7e, 0x81, 0x7d, 0x7e, 0x83, 0x7d, 
0x7c, 0x82, 0x80, 0x7d, 0x81, 0x80, 0x7b, 0x81, 0x82, 0x7d, 0x7e, 0x81, 0x7d, 0x7e, 0x83, 0x7e, 
0x7c, 0x81, 0x80, 0x7d, 0x81, 0x80, 0x7c, 0x80, 0x82, 0x7d, 0x7e, 0x81, 0x7d, 0x7d, 0x82, 0x80, 
0x7c, 0x80, 0x80, 0x7d, 0x81, 0x81, 0x7c, 0x7e, 0x82, 0x7e, 0x7e, 0x81, 0x7d, 0x7d, 0x82, 0x80, 
0x7d, 0x80, 0x80, 0x7d, 0x81, 0x82, 0x7c, 0x7e, 0x81, 0x7e, 0x7e, 0x81, 0x7d, 0x7c, 0x81, 0x80, 
0x7d, 0x80, 0x80, 0x7c, 0x80, 0x82, 0x7d, 0x7d, 0x81, 0x7e, 0x7e, 0x82, 0x7e, 0x7c, 0x81, 0x81, 
0x7d, 0x80, 0x80, 0x7c, 0x80, 0x82, 0x7e, 0x7e, 0x81, 0x7e, 0x7d, 0x82, 0x80, 0x7c, 0x80, 0x80, 
0x7d, 0x80, 0x81, 0x7d, 0x7e, 0x81, 0x7e, 0x7e, 0x81, 0x7e, 0x7d, 0x81, 0x80, 0x7d, 0x80, 0x80, 
0x7d, 0x80, 0x81, 0x7d, 0x7e, 0x81, 0x7e, 0x7e, 0x81, 0x7e, 0x7d, 0x81, 0x80, 0x7d, 0x80, 0x80, 
0x7d, 0x80, 0x81, 0x7d, 0x7e, 0x81, 0x7e, 0x7e, 0x81, 0x7f, 0x7d, 0x80, 0x81, 0x7e, 0x80, 0x80, 
0x7d, 0x7e, 0x81, 0x7e, 0x7d, 0x80, 0x7e, 0x7e, 0x81, 0x80, 0x7d, 0x80, 0x81, 0x7e, 0x80, 0x80, 
0x7d, 0x7e, 0x81, 0x7e, 0x7e, 0x80, 0x7e, 0x7d, 0x81, 0x80, 0x7d, 0x80, 0x80, 0x7e, 0x80, 0x81, 
0x7d, 0x7e, 0x81, 0x7e, 0x7e, 0x80, 0x7e, 0x7d, 0x80, 0x80, 0x7d, 0x80, 0x80, 0x7e, 0x80, 0x81, 
0x7e, 0x7e, 0x81, 0x80, 0x7e, 0x80, 0x7e, 0x7d, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x80, 0x81, 
0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7d, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7d, 0x7e, 0x81, 
0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x81, 0x80, 0x7d, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x81, 
0x80, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x7e, 0x7d, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x81, 0x7e, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x80, 0x81, 0x7e, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x7d, 0x80, 0x80, 0x7d, 0x7e, 0x82, 0x80, 0x81, 0x82, 
0x7d, 0x7d, 0x80, 0x7c, 0x7c, 0x81, 0x80, 0x7c, 0x81, 0x81, 0x7d, 0x81, 0x82, 0x7e, 0x7e, 0x81, 
0x7e, 0x7d, 0x81, 0x7e, 0x7c, 0x80, 0x7e, 0x7d, 0x80, 0x81, 0x7d, 0x7e, 0x82, 0x80, 0x80, 0x81, 
0x7e, 0x7d, 0x81, 0x80, 0x7d, 0x81, 0x80, 0x7c, 0x7e, 0x80, 0x7e, 0x80, 0x82, 0x7e, 0x7e, 0x81, 
0x7d, 0x7d, 0x81, 0x80, 0x7c, 0x80, 0x81, 0x7d, 0x80, 0x81, 0x7d, 0x7d, 0x80, 0x7e, 0x7e, 0x82, 
0x80, 0x7d, 0x81, 0x80, 0x7d, 0x80, 0x81, 0x7d, 0x80, 0x81, 0x7d, 0x7e, 0x81, 0x7e, 0x7d, 0x81, 
0x7e, 0x7d, 0x81, 0x80, 0x7e, 0x81, 0x81, 0x7d, 0x7e, 0x81, 0x7d, 0x7e, 0x81, 0x7e, 0x7d, 0x81, 
0x7e, 0x7d, 0x80, 0x80, 0x7d, 0x80, 0x81, 0x7d, 0x7e, 0x81, 0x7e, 0x7e, 0x81, 0x7e, 0x7d, 0x81, 
0x80, 0x7d, 0x80, 0x80, 0x7d, 0x80, 0x81, 0x7d, 0x7e, 0x81, 0x7e, 0x7e, 0x81, 0x7e, 0x7d, 0x81, 
0x80, 0x7d, 0x80, 0x80, 0x7d, 0x80, 0x81, 0x7d, 0x7e, 0x81, 0x7e, 0x7e, 0x81, 0x7e, 0x7d, 0x81, 
0x80, 0x7d, 0x80, 0x81, 0x7d, 0x80, 0x81, 0x7d, 0x7e, 0x81, 0x7e, 0x7d, 0x81, 0x80, 0x7d, 0x81, 
0x80, 0x7d, 0x80, 0x81, 0x7d, 0x7e, 0x81, 0x7d, 0x7e, 0x81, 0x7e, 0x7d, 0x81, 0x80, 0x7d, 0x80, 
0x81, 0x7d, 0x80, 0x81, 0x7d, 0x7e, 0x81, 0x7e, 0x7d, 0x81, 0x7e, 0x7d, 0x81, 0x80, 0x7d, 0x80, 
0x81, 0x7d, 0x80, 0x81, 0x7d, 0x7e, 0x81, 0x7e, 0x7d, 0x81, 0x80, 0x7d, 0x81, 0x80, 0x7d, 0x80, 
0x81, 0x7d, 0x7e, 0x81, 0x7d, 0x7e, 0x81, 0x7e, 0x7e, 0x81, 0x7e, 0x7d, 0x80, 0x80, 0x7d, 0x80, 
0x80, 0x7d, 0x7e, 0x81, 0x7e, 0x7e, 0x81, 0x7e, 0x7d, 0x81, 0x80, 0x7d, 0x80, 0x80, 0x7d, 0x80, 
0x81, 0x7d, 0x7e, 0x81, 0x7e, 0x7e, 0x81, 0x7e, 0x7d, 0x81, 0x80, 0x7d, 0x80, 0x81, 0x7d, 0x80, 
0x81, 0x7d, 0x7e, 0x81, 0x7e, 0x7d, 0x81, 0x7e, 0x7d, 0x81, 0x80, 0x7d, 0x80, 0x81, 0x7d, 0x7e, 
0x81, 0x7e, 0x7e, 0x81, 0x7e, 0x7d, 0x81, 0x80, 0x7d, 0x80, 0x80, 0x7d, 0x80, 0x81, 0x7d, 0x7e, 
0x81, 0x7e, 0x7e, 0x81, 0x7e, 0x7d, 0x80, 0x80, 0x7d, 0x80, 0x80, 0x7d, 0x80, 0x81, 0x7e, 0x7e, 
0x81, 0x7e, 0x7e, 0x81, 0x7e, 0x7d, 0x80, 0x80, 0x7d, 0x80, 0x80, 0x7d, 0x80, 0x81, 0x7e, 0x7e, 
0x81, 0x7e, 0x7e, 0x81, 0x80, 0x7e, 0x80, 0x80, 0x7d, 0x80, 0x81, 0x7e, 0x7e, 0x81, 0x7e, 0x7e, 
0x81, 0x7e, 0x7d, 0x80, 0x80, 0x7d, 0x80, 0x80, 0x7d, 0x80, 0x81, 0x7e, 0x7e, 0x81, 0x7e, 0x7e, 
0x81, 0x7e, 0x7d, 0x80, 0x80, 0x7d, 0x80, 0x80, 0x7d, 0x80, 0x81, 0x7e, 0x7e, 0x81, 0x7e, 0x7e, 
0x81, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7d, 0x7e, 0x81, 0x7e, 0x7e, 0x81, 0x7e, 0x7e, 
0x80, 0x80, 0x7d, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x81, 0x7e, 0x7e, 
0x80, 0x80, 0x7e, 0x80, 0x80, 0x7d, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7d, 
0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x81, 0x7e, 0x7e, 
0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 
0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 
0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 
0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 
0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 
0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 
0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 
0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 
0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 
0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 
0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 
0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 
0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 
0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 
0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 
0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7f, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 
0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 
0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 
0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 
0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 
0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 
0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 
0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 
0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 
0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 
0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 
0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 
0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 
0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 
0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 
0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 
0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 
0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 
0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 
0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 
0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 
0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7f, 0x7e, 
0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x7f, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x7f, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7f, 0x80, 0x7e, 
0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 
0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 
0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 
0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 
0x7e, 0x80, 0x7f, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 
0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 
0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 
0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 
0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7f, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 
0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 
0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 
0x7e, 0x80, 0x80, 0x7e, 0x7f, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 
0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 
0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 
0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 
0x7e, 0x80, 0x80, 0x7e, 0x7f, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 
0x7e, 0x7f, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 
0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7f, 0x80, 
0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 
0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 
0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 
0x7e, 0x7e, 0x80, 0x7f, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 
0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7f, 0x80, 
0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7f, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 
0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 
0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7f, 0x7e, 0x80, 
0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x7f, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x7e, 0x80, 0x7f, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7f, 0x80, 0x7f, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7f, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7f, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7f, 0x7f, 0x80, 
0x80, 0x7e, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 
0x80, 0x80, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x7f, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 
0x80, 0x7f, 0x7e, 0x80, 0x7f, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7f, 
0x80, 0x7f, 0x7e, 0x80, 0x7f, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7f, 0x7e, 
0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x80, 0x7f, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7f, 0x7f, 0x7f, 0x80, 0x7f, 0x7e, 0x80, 0x7e, 0x7e, 
0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7f, 0x7e, 0x80, 0x80, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7f, 0x80, 0x80, 0x7e, 
0x80, 0x7e, 0x7f, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 
0x80, 0x80, 0x7e, 0x80, 0x7f, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7f, 0x7f, 0x7e, 0x80, 0x7f, 0x7e, 
0x80, 0x7e, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x7f, 0x80, 0x80, 0x7e, 
0x80, 0x7e, 0x7e, 0x80, 0x7f, 0x7e, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7e, 
0x80, 0x80, 0x7f, 0x80, 0x80, 0x7e, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x7e, 0x80, 0x7f, 0x7f, 
0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x80, 0x7f, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x80, 
0x80, 0x80, 0x7f, 0x80, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x80, 
0x80, 0x80, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x80, 0x7f, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7e, 
0x7f, 0x80, 0x7e, 0x7f, 0x80, 0x7e, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7f, 0x80, 
0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7f, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x7e, 0x80, 0x7e, 0x80, 
0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x7f, 0x80, 0x80, 0x7f, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x7f, 0x7f, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x80, 
0x7e, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x7f, 0x80, 0x7f, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x7f, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x80, 0x7f, 0x80, 
0x7e, 0x80, 0x7f, 0x7e, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x80, 
0x7e, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x7f, 0x80, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x7f, 
0x80, 0x7f, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x80, 0x80, 
0x80, 0x7e, 0x80, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 
0x7f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x80, 0x7f, 0x7f, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x7f, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7f, 
0x80, 0x7f, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x7f, 
0x80, 0x7f, 0x80, 0x80, 0x80, 0x80, 0x7f, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x7e, 0x7f, 0x80, 0x7e, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x7f, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x7f, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x80, 0x7f, 0x80, 0x7e, 
0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7f, 
0x7f, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 0x80, 
0x7f, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x7e, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 
0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 
0x80, 0x7f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x80, 
0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x80, 0x80, 
0x80, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 
0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x80, 
0x80, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x80, 0x80, 
0x80, 0x7f, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x80, 
0x7e, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x80, 
0x7e, 0x80, 0x7f, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x7e, 0x80, 
0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x7f, 0x7f, 0x7f, 0x80, 0x80, 0x80, 0x7f, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x7e, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x7f, 0x80, 0x7e, 0x7f, 0x7f, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x80, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7f, 0x7e, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x7f, 0x80, 0x7f, 0x80, 0x80, 0x7e, 0x7f, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x7f, 
0x80, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x7f, 0x80, 0x80, 0x80, 0x7f, 0x80, 
0x80, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7f, 0x7f, 0x80, 0x80, 
0x80, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7f, 
0x80, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7e, 
0x80, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x7f, 0x7e, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x7f, 0x7f, 0x7f, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x80, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7f, 0x7e, 0x80, 0x7f, 0x7f, 0x7e, 0x7e, 
0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x7f, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x7f, 0x80, 0x7e, 
0x80, 0x7e, 0x7f, 0x7f, 0x7e, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x7f, 0x80, 0x7f, 0x80, 
0x80, 0x7f, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x7f, 0x7f, 0x7e, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 0x80, 
0x7f, 0x80, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x7e, 
0x80, 0x7f, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x80, 
0x7f, 0x80, 0x7f, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x80, 0x80, 
0x80, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7f, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x80, 
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x80, 
0x80, 0x7e, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
0x80, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x80, 
0x80, 0x7f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
0x7f, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7e, 
0x80, 0x7f, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x7f, 0x7f, 0x7f, 
0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x7f, 0x7f, 0x7e, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x7f, 0x7f, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 
0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x7f, 
0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x80, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 
0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x7f, 0x80, 
0x80, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x7f, 
0x80, 0x7f, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x7f, 0x80, 0x7f, 0x80, 0x7f, 
0x7f, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x7f, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x7f, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x80, 
0x7e, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x80, 
0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 
0x7f, 0x7f, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x7f, 0x7f, 
0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x7f, 0x80, 0x7f, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x80, 
0x80, 0x80, 0x7e, 0x80, 0x7f, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x80, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x7e, 0x80, 
0x7e, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x7f, 
0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x80, 0x80, 0x7f, 0x7f, 
0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x7f, 
0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x7f, 0x80, 0x80, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x80, 
0x7f, 0x80, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x80, 0x7f, 0x80, 0x80, 0x80, 
0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 
0x80, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x7f, 0x80, 0x7f, 0x7f, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7f, 
0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 
0x7e, 0x80, 0x7f, 0x80, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7f, 0x80, 0x80, 0x7f, 0x7f, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x7f, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 
0x80, 0x7e, 0x80, 0x7e, 0x80, 0x7e, 0x80, 0x80, 0x7e, 
};
