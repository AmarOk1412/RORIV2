 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import sys

mon_fichier = open("end", "w")

toWrite = "Say : Salut à tous, je suis RORI un bot qui peut réaliser de nombreuses actions (je vais écraser les autres !). Si Sébastien me le demande, je peux aller sur Internet en écoutant sa voix (regarder son autre projet Onivox_Shark), ouvrir des logiciels, commenter des parties de TF2, controler un système domotique, répondre à des questions plus ou moins débiles, chanter, suivre une conversation tout en étant extrement personnalisable ! J'ai un système d'humeur et AmarOk veut m'utiliser pour controler le BEC² (s'il a lieu un jour) à la voix (et pour dominer le monde !)"

toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()