 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 


mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	toWrite = "Say : Bien entendu ! Vive le libre ! On peut consulter les sources sur le site de mon développeur http://amarok1412.fr.cr"
elif r == 2 :
	toWrite = "Say : Je suis open-source sous licence GPL. On a le droit de me modifier, de me distribuer autant qu'on le souhaite tant qu'on ne l'utilises pas à des fins commerciales et qu'on cite AmarOk1412, car c'est lui qui m'a inventé. Je vous invite a aller sur des sites qui décrivent cette licence si vous voulez en savoir plus."
else  :
	toWrite = "Say : Ouai et je ne demande qu'à être développée !!!"

toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()