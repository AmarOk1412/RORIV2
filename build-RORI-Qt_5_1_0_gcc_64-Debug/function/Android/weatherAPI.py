 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import random 
import sys, subprocess
import urllib, sys, re, BeautifulSoup
from xml.dom import minidom

params = ""
i = 1
while i < len(sys.argv):
    if sys.argv[i].count('?') == 0 and sys.argv[i].count('!') == 0:
        params += sys.argv[i]
    if i != len(sys.argv) - 1:
        params += ' '
    i += 1

r = re.compile(r"(quel(le|).(es(t|).(la.m.teo|le temps).|temps.fai..il).(a|à).)(.{0,200})")
results = r.findall(params)

codeSrc = urllib.urlopen('http://api.openweathermap.org/data/2.5/weather?lang=fr&q=' + results[0][len(results[0]) - 1] +'&mode=xml').read()

xmlFile = open('test.xml', 'w')
xmlFile.write(codeSrc)
xmlFile.close()

xmldoc = minidom.parse('test.xml')
temperature = xmldoc.getElementsByTagName('temperature')
humidity = xmldoc.getElementsByTagName('humidity')
weather = xmldoc.getElementsByTagName('weather')

temp = "A " + results[0][len(results[0]) - 1] + ", il fait " + str(float(temperature[0].attributes['value'].value.encode('utf-8','ignore')) - 273.15) + ' °C, pour une humidité ambiante de ' + humidity[0].attributes['value'].value.encode('utf-8','ignore') + ' %. Deux mots pour décrire le temps ? "' + weather[0].attributes['value'].value.encode('utf-8','ignore') + '"...'

mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
subprocess.call("python function/Android/sendToAndroid.py " + temp, shell=True)

toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()

