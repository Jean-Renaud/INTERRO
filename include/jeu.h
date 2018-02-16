#ifndef JEU_H
#define JEU_H
#include "casino.h"


class Jeu : public Casino
{
public:
    Jeu();
    int roulette();
    int craps();
    int blackJack();
    int nbJetons = 100;
    int random;
    int saisieDuJoueur;
    int miseJoueur;
    int retourMenu();
    virtual ~Jeu();

protected:

private:

};

#endif // JEU_H
