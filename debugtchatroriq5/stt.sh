#!/bin/bash
#
#SPEECH2TXT version 1.0
#by Christophe Varlet 		#Please visit http://leprojetscribe.com
#
#Un script de reconnaissance vocale depuis la ligne de commande 
#Ce script utilise l'api google speech-input
#requiert : flac		#You need to install flac to run this script


while :
do

#Uncomment the following line if you want the English version. Then put comment before the french version that follows:
#echo -e "\033[31mSpeek now:\033[00m";

echo -e "\033[31mParlez maintenant:\033[00m";

echo ...;
arecord -q -f cd -t wav -d 5 -r 16000 | flac --totally-silent - -f --best --sample-rate 16000 -o out.flac;
echo -e "\033[31mSTOP !\033[00m" & 

#wget -q -O speech.txt --post-file out.flac --header="Content-Type: audio/x-flac; rate=16000" http://www.google.com/speech-api/v1/recognize?lang=en; 
#Uncomment previous line to use English as your language and put comment before the french version following:

wget -q -O speech.txt --post-file out.flac --header="Content-Type: audio/x-flac; rate=16000" http://www.google.com/speech-api/v1/recognize?lang=fr;

cat speech.txt | cut -d'"' -f12 >> records.txt;
#echo `cat records.txt` > billet.txt
cat speech.txt | cut -d'"' -f12;
rm out.flac speech.txt;

done
exit 0
