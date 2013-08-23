 #!/usr/bin/python
 # -*- coding: latin-1 -*-
import sys
import math, random, os, subprocess
from PIL import Image

w, h = 100, 100
image = Image.new("RGB", (w, h))
pix = image.load()

r = random.randint(0, 255)
b = random.randint(0, 255)
v = random.randint(0, 255)

r1 = -1
while r1 < 0 or r1 > 255:
	r1 = r + random.randint(-30, 30)
r2 = -1
while r2 < 0 or r2 > 255:
	r2 = r + random.randint(-30, 30)
r3 = -1
while r3 < 0 or r3 > 255:
	r3 = r + random.randint(-30, 30)
r4 = -1
while r4 < 0 or r4 > 255:
	r4 = r + random.randint(-30, 30)

v1 = -1
while v1 < 0 or v1 > 255:
	v1 = v + random.randint(-30, 30)
v2 = -1
while v2 < 0 or v2 > 255:
	v2 = v + random.randint(-30, 30)
v3 = -1
while v3 < 0 or v3 > 255:
	v3 = v + random.randint(-30, 30)
v4 = -1
while v4 < 0 or v4 > 255:
	v4 = v + random.randint(-30, 30)

b1 = -1
while b1 < 0 or b1 > 255:
	b1 = b + random.randint(-30, 30)
b2 = -1
while b2 < 0 or b2 > 255:
	b2 = b + random.randint(-30, 30)
b3 = -1
while b3 < 0 or b3 > 255:
	b3 = b + random.randint(-30, 30)
b4 = -1
while b4 < 0 or b4 > 255:
	b4 = b + random.randint(-30, 30)
color = [(r, v, b),(r1, v1, b1),(r2, v2, b2),(r3, v3, b3),(r4, v4, b4)]

a = 0
b = 0
for x in range(10):
    for y in range(10):
        z = random.randint(0, 4)
        for a in range(10):
            for b in range(10):
                pix[x*10+a,y*10+b] = color[z]

image.save("logo.png")
mon_fichier = open("end", "w")

r = random.randint(1,3) 
toWrite = ""
if r == 1 :
	toWrite += "Say : Et voilà, je vous ai généré un joli fichier ;)"
elif r == 2 :
	toWrite += "Say : Et un avatar, un ! J'espère qu'il vous plaiera !"
elif r == 3 :
	toWrite += "Say : Et voilà."

toWrite += "\n-R_M- : 10"
toWrite += "\n-U_BU- : 10"

mon_fichier.write(toWrite)

mon_fichier.close()

subprocess.call("shotwell logo.png", shell=True)
