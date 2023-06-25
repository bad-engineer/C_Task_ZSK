# C_Task_ZSK
#Pass the GPS CGA packet into the parse-gps-data function in the Embd.c file and run. The function returns time, latitude, longitude, and altitude. Additionally, if the string has missing values it shows a warning. Also, it calculates and validates checksum and issues a warning if the packet is invalid. 

#"$GPGGA,115739.00,4158.8441367,N,09147.4416929,W,4,13,0.9,255.747,M,-32.00,M,01,0000*6E" is an example of valid packet (checksum = 6E)

#"$GPGGA,181908.00,3404.7041778,N,07044.3966270,W,4,13,1.00,495.144,M,29.200,M,0.10,0000*40" is an example of invalid packet

#"$GPGGA,123519.00,4807.038,N,01131.000,E,1,08,0.9,545.4,M,-164.0,M,,,,*47" This packet has missing values
