 #!/usr/bin/python
 # -*- coding: latin-1 -*-
from urllib import urlretrieve
import imp, sys, re

'''Programme postant un message sur Facebook ;)'''

mon_fichier = open("end", "w")

phrase = ''
i = 1

while i < len(sys.argv):
	phrase += sys.argv[i] + ' '
	i += 1

m = re.search('^(rori |)(facebook( moi|)|(publie sur|post sur) (facebook|mon mur( facebook|)))', phrase.lower())

statutFB = ''
i = 0

while i < len(phrase):
    if i > len(m.group(0)):
	    statutFB += phrase[i]
    i += 1

urlretrieve('https://raw.github.com/gist/1194123/fbconsole.py', '.fbconsole.py')
fb = imp.load_source('fb', '.fbconsole.py')

fb.AUTH_SCOPE = ['publish_stream']
fb.authenticate()

status = fb.graph_post("/me/feed", {"message":statutFB})

toWrite = "Say : Statut facebook envoyé ;)\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)
mon_fichier.close()			
