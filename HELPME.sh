# Adresse IP par defaut : 169.254.61.54
ssh pi@169.254.61.54
mdp = raspberry

# internet sur wlan0 :
wpa_passphrase Xperia >> /etc/wpa_supplicant/wpa_supplicant.conf

# WiFi access point :
driver=nl80211

# ADC
https://www.abelectronics.co.uk/p/56/ADC-Pi-Plus-Raspberry-Pi-Analogue-to-Digital-converter

# wiringPi
copier libwiringPi.so sur la raspberry dans /lib
