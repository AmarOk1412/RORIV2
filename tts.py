import subprocess
import os
import sys

toSay = ""
i = 1

while i < len(sys.argv) :
	toSay = toSay + ' ' + str(sys.argv[i])
	i = i + 1

#subprocess.call('espeak -v mb-fr4+f3 -a 150 -s 110 "' + toSay + '"', shell=True)
subprocess.call('espeak -ven+f3 -p 60 -s 180 -m  "' + toSay + '"', shell=True)
