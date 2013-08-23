import urllib2, os

url = #ce que dit RORI

usock = urllib2.urlopen(url)
data = usock.read()
usock.close()

os.remove("androidSay")
mon_fichier = open("androidSay", "w")
mon_fichier.write(data)
mon_fichier.close()
