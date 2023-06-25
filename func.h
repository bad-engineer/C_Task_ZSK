#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
  char latitude[15];
  char longitude[15];
  char altitude[10];
  char TIME[12];
} GPSData;

GPSData
parse_gps_data (char *packet);