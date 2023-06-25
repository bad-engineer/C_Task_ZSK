#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"
int
main ()
{
    //char str[100];
    //printf("Input a packet\n");
     //scanf("%[^\n]s",str);
  char str[100] = "$GPGGA,115739.00,4158.8441367,N,09147.4416929,W,4,13,0.9,255.747,M,-32.00,M,01,0000*6E";
  //"$GPGGA,115739.00,4158.8441367,N,09147.4416929,W,4,13,0.9,255.747,M,-32.00,M,01,0000*6E";//a valid packet
    //"$GPGGA,181908.00,3404.7041778,N,07044.3966270,W,4,13,1.00,495.144,M,29.200,M,0.10,0000*40"; //invalid
 //"$GPGGA,123519.00,4807.038,N,01131.000,E,1,08,0.9,545.4,M,-164.0,M,,,,*47"; //has missing values
  parse_gps_data (str);
  return 0;
}
