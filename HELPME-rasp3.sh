ssh pi@192.168.1.10

# without password
# Sur la rasp :
ssh-keygen # Si .ssh/ n'existe pas déjà
# Sur le pc à autoriser :
ssh-copy-id pi@192.168.1.10

admin
mdp habituel

raspberry pi3 pinout :
http://pi4j.com/images/j8header-3b.png

raspberry pi3 static ip :
https://www.ionos.co.uk/digitalguide/server/configuration/provide-raspberry-pi-with-a-static-ip-address/

copier le fichier bennetout.service sur la raspberry dans /lib/systemd/system/

se connecter à un point d'accès WiFi en cmd line :
https://raspbian-france.fr/connecter-wifi-raspberry-pi-3/

bennetout at startup :
https://www.dexterindustries.com/howto/run-a-program-on-your-raspberry-pi-at-startup/#systemd

hotspot wifi + serveur web :
https://raspbian-france.fr/creer-un-hotspot-wi-fi-en-moins-de-10-minutes-avec-la-raspberry-pi/

