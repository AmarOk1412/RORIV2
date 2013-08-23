import urllib2, os

url = #ce que dis RORI

usock = urllib2.urlopen(url)
data = usock.read()
usock.close()

os.remove("AndroidConnect/androidSay")
mon_fichier = open("AndroidConnect/androidSay", "w")

i = 0
j = 0
toWrite = ""
while i < len(data):
    if data[i] == '\n' and j == 0:
        toWrite += "\n{ANDROID}"
        j = 1
    else:
        toWrite += data[i]
    i += 1

mon_fichier.write(toWrite)
mon_fichier.close()
