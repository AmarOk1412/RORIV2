#!/usr/bin/python
# -*- coding: utf-8 -*-
import urllib, sys, re, BeautifulSoup
import os
import ftplib

def send_File(file, user, pwd):
    ftp = ftplib.FTP("#ip serveur")
    ftp.login(user, pwd)
    ftp.storlines("STOR chemin" + file, open(file))

print "ok"
params = ""
i = 1
while i < len(sys.argv):
    if sys.argv[i] != '?' and sys.argv[i] != '!':
	    if i != len(sys.argv) - 1:
		params += sys.argv[i] + " "
	    else:
		params += sys.argv[i]
    i += 1

r = re.compile(r"(d(é|e)cris.(moi.|)((un|une|la|le).||qui.es(t|)|qu.es(t|).ce.qu(.(un|une)|e.(un|une|la|le)))|bio(graphie|)(.compl(è|e)te|)(.de|.d.|.))(.{0,200})")
results = r.findall(params)
codeSrc = urllib.urlopen('http://fr.wikipedia.org/w/api.php?action=query&format=xml&prop=extracts&explaintext&titles=' + results[0][len(results[0]) - 1]).read()

ftpFile = open("RORIAndroid.txt", "w")

ftpFile.write('NUM : ' + str(random.randint(0, 1000)) + "\n")

toWrite = "LongSay : Voici ce que dis Wikipédia : "
temp = ""

doc = BeautifulSoup.BeautifulSoup(codeSrc)	
for a in doc.findAll('extract'):
    temp += a.text.encode('utf-8','ignore')


toWrite += temp
toWrite += "\nLongSay"
ftpFile.write(toWrite)

ftpFile.close()

send_File('RORIAndroid.txt', #USER, #PWD)
os.remove('RORIAndroid.txt')

mon_fichier = open("end", "w")

toWrite += "\n-R_M- : -10"
toWrite += "\n-R_J- : -10"
toWrite += "\n-U_C- : -10"
toWrite += "\n-U_BU- : -10"

mon_fichier.close()