 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	toWrite = "Say : Un programme ça n'a pas de sexe..."
elif r == 2 :
	toWrite = "Say : Je n'ai aucun sexe, même si je l'avoue, ma synthèse vocale ainsi que mon nom a plutôt une consonnace féminine, mais vous pouvez le changer"
elif r == 3 :
	toWrite = "Say : Moi ? Mais je n'ai pas de sexe comme vous les êtres vivants, je suis un programme !"

toWrite += "\n-R_M- : 1"
toWrite += "\n-R_J- : -5"
toWrite += "\n-U_J- : -5"
toWrite += "\n-U_C- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()