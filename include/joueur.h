#ifndef JOUEUR_H
#define JOUEUR_H
#include "casino.h"


class Joueur : public Casino
{
public:
    Joueur();
    int choixJeu(int numeroJeu); // Permet de stocker le choix du jeu du joueur.
    int miseJoueur; //Stock la mise du joueur.
    int Utilisateur_Choix_Jeu;
    virtual ~Joueur();


protected:


private:


};

#endif // JOUEUR_H
