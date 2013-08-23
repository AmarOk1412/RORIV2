android.{0,100}(quel(le|).(es(t|).(la.m.teo|le temps).|temps.fai..il).(a|à).)(.{0,200})
Android/weatherAPI --SENTENCESEND--
(quel(le|).(es(t|).(la.m.teo|le temps).|temps.fai..il).(a|à).)(.{0,200})
weatherAPI --SENTENCESEND--
android.{0,100}(d(é|e)cris.(moi|)(|qui.es(t|)|qu.es(t|).ce.qu(.(un|une)|e.(un|une|la|le)))|bio(graphie|)(.compl(è|e)te|)(.de|.d.|.))
Android/wikipediaComplet --SENTENCESEND--
android.{0,100}(qui.es(t|)|qu.es(t|).ce.qu(.(un|une)|e.(un|une|la|le)))(.{0,200})
Android/wikipediaIntro --SENTENCESEND--
(d(é|e)cris.(moi|)(|qui.es(t|)|qu.es(t|).ce.qu(.(un|une)|e.(un|une|la|le)))|bio(graphie|)(.compl(è|e)te|)(.de|.d.|.))
wikipediaComplet --SENTENCESEND--
(qui.es(t|)|qu.es(t|).ce.qu(.(un|une)|e.(un|une|la|le)))(.{0,200})
wikipediaIntro --SENTENCESEND--
android.{0,100}param(è|e)tre
Android/openParams
android.{0,100}(sms|dis)
Android/sms --SENTENCESEND--
android.{0,100}(t(é|e)l|ap(p|)el(l|)e)
Android/call --SENTENCESEND--
^(rori |)(facebook( moi|)|(publie sur|post sur) (facebook|mon mur (facebook|)))
facebook --SENTENCESEND--
((android|tel).{0,50}(cam|photo)|(cam|photo).{0,50}(android|tel))
Android/openCamera
android.{0,100}pr(é|e)sente.toi s.il.te.pla(î|i)t
Android/demo_presentation
pr(é|e)sente.toi s.il.te.pla(î|i)t
demo_presentation
tu es disponible (sur|sous) quel os
demo_os
android.{0,100}tu aimes les poneys
Android/demo_ponies
tu aimes les poneys
demo_ponies
^je.((m.|)ap(p|)e(l|)le|me.(pr(e|é|è)|)nomme|suis)
setIdentity --SENTENCESEND--
android.{0,100}je.((m.|)ap(p|)e(l|)le|me.(pr(e|é|è)|)nomme|suis)
Android/setIdentity --SENTENCESEND--
(cherche|montre).{0,20}photo de
findPhoto --SENTENCESEND--
android.{0,100}rori (c.|)est.{0,10}dr(ô|o)le.{0,10}nom
Android/funnyName
rori (c.|)est.{0,10}dr(ô|o)le.{0,10}nom
funnyName
android.{0,100}(tu.aime|aime(s|).tu).{0,30}
Android/aimer
(tu.aime|aime(s|).tu).{0,30}
aimer
(tu.chante(s|)|chante(s|).tu) (souvent|rarement|des( |)fois)
chanteDuree
^(|(ouvre|lance|montre).{0,10}(|web)).{0,1}cam((é|e)ra|)
webcam
film l'écran le bureau screencast record enregistre
^(film|record|screencast).{0,10}((é|e)cran|bureau)
recordDesktop
^(arr(è|ê|e)te|stop).{0,10}(film|record|screencast).{0,10}((é|e)cran|bureau|)
stopRecord
(g(é|e)n(è|e)re|cr(e|é)).{0,30}(image|avatar)
avatar
##N.F.##
42
