#ifndef USERPROFIL_H
#define USERPROFIL_H

#include <QWidget>

class UserProfil : public QWidget
{
    Q_OBJECT

public:
    UserProfil();
    void saveProfil();

public slots:
    //Getters and setters
    inline int getUHumor() { return uHumor; }
    inline int getUPolite() { return uPolite; }
    inline int getUJokes() { return uJokes; }
    inline int getUTired() { return uTired; }
    inline int getUIsABadUser() { return uIsABadUser; }
    inline int getUCurious() { return uCurious; }
    inline int getUMoral() { return uMoral; }

    inline void setUHumor(int newValue) { uHumor = newValue <= 100 && newValue >= 0 ? newValue : uHumor; saveProfil(); }
    inline void setUPolite(int newValue) { uPolite = newValue <= 100 && newValue >= 0 ? newValue : uPolite; saveProfil(); }
    inline void setUJokes(int newValue) { uJokes = newValue <= 100 && newValue >= 0 ? newValue : uJokes; saveProfil();}
    inline void setUTired(int newValue) { uTired = newValue <= 100 && newValue >= 0 ? newValue : uTired; saveProfil();}
    inline void setUIsABadUser(int newValue) { uIsABadUser = newValue <= 100 && newValue >= 0 ? newValue : uIsABadUser; saveProfil();}
    inline void setUCurious(int newValue) { uCurious = newValue <= 100 && newValue >= 0 ? newValue : uCurious; saveProfil();}
    inline void setUMoral(int newValue) { uMoral = newValue <= 100 && newValue >= 0 ? newValue : uMoral; saveProfil();}

    inline QString getNom() { return nom; }
    inline QString getPrenom() { return prenom; }
    inline int getAge() { return age; }

    inline void setNom(QString newValue) { nom = newValue; saveProfil();}
    inline void setprenom(QString newValue) { prenom = newValue; saveProfil();}
    inline void setAge(int newValue) { age = newValue; saveProfil();}

private:
    int uHumor;
    int uPolite;
    int uJokes;
    int uTired;
    int uIsABadUser;
    int uCurious;
    int uMoral;

    QString nom;
    QString prenom;
    int age;
};

#endif // USERPROFIL_H
