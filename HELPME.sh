# Adresse IP par defaut sur eth0 : 169.254.61.54
ssh pi@169.254.61.54
mdp = raspberry

# ssh via WiFi: décommenter la ligne suivante dans /etc/ssh/sshd_config
ListenAddress 0.0.0.0

# internet sur wlan0 :
wpa_passphrase Xperia >> /etc/wpa_supplicant/wpa_supplicant.conf
# WiFi access point :
driver=nl80211

# ADC
https://www.abelectronics.co.uk/p/56/ADC-Pi-Plus-Raspberry-Pi-Analogue-to-Digital-converter

# wiringPi
copier libwiringPi.so sur la raspberry dans /lib

# Led ici: 
--x----------------- # GND
-------x------------ # GPIO3

# Pour compiler avec gcc
make all CC=gcc
