#!/usr/bin/python
# -*- coding: utf-8 -*-
import urllib, sys, re, BeautifulSoup

params = ""
i = 1
while i < len(sys.argv):
    if sys.argv[i] != '?' and sys.argv[i] != '!':
        params += sys.argv[i] + " "
    i += 1

r = re.compile(r"(qui.es(t|)|qu.es(t|).ce.qu(.(un|une)|e.(un|une|la|le)))(.{0,200})")
results = r.findall(params)

codeSrc = urllib.urlopen('http://fr.wikipedia.org/w/api.php?action=query&format=xml&prop=extracts&exintro&titles=' + results[0][len(results[0]) - 1]).read()
doc = BeautifulSoup.BeautifulSoup(codeSrc)

mon_fichier = open("end", "w")

toWrite = "LongSay : Voici ce que dis Wikipédia : "
temp = ""
for a in doc.findAll('extract'):
    temp += a.text.encode('utf-8','ignore')


toWrite += temp
toWrite += "\nLongSay"

toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.write(toWrite)

mon_fichier.close()
