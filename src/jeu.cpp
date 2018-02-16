#include <iostream>
#include "casino.h"
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "joueur.h"
#include "jeu.h"
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;


Jeu::Jeu()
{
    //ctor
}

Jeu::~Jeu()
{
    //dtor
}


//Jeu de la roulette
int Jeu::roulette()

{
    Jeu *roulette = new Jeu;

    int joue = 1;

    srand(time(NULL));

    cout << "Bienvenue dans la roulette." << endl;

    while(joue == 1) // On répète l'instruction en boucle tant que le joueur joue.
    {

        cout << "Saisissez le chiffre 1 ou 2" << endl;
        cin >> saisieDuJoueur;


        cout << "Saisissez votre mise:\n" << endl;

        cin >> miseJoueur;

        random = rand() % 3; // L'ordinateur génère le chiffre aléatoire.

        if(saisieDuJoueur == random) //Si le choix de l'utilisateur est égal à celui de l'ordinateur alors le joueur gagne.
        {
            nbJetons += miseJoueur;//On incrémente le nombre de jeton équivalent à la mise du joueur.
            cout << "Vous avez gagné le nombre à trouver était " << random << "\n" << "Il vous reste " << nbJetons << " jetons" << endl;
        }
        else if(saisieDuJoueur != random) //Si le chiffre de l'utilisateur est différent de celui de l'ordinateur, le joueur perd.
        {
            nbJetons -= miseJoueur;;//On décrémente le nombre de jeton équivalent à la mise du joueur.
            cout << "Vous avez perdu le nombre à trouver était " << random << "\n" << "Il vous reste " << nbJetons << " jetons" << endl;

        }
        if(nbJetons == 0) //Si le joueur n'a plus de jetons, alors on lui demande si il veut rejouer ou quitter la partie.
        {
            cout << "La partie est finie, voulez-vous rejouer? Tapez {1} pour rejouer, {2} pour sortir:\n" << endl;
            cin >> saisieDuJoueur;
            if(saisieDuJoueur == 1) //Si l'utilisateur saisi 1, alors on recrédite son nombre de jetons à 100 pour recommencer une partie.
            {
                nbJetons = 100;
            }
            else
            {
                break; // Si le joueur saisi 0, il quitte le jeu.
            }
        }

    }
}


//LES COMMENTAIRES CI DESSUS SONT EXACTEMENT LES MEMES QUE POUR LES JEUX SUIVANTS CI-DESSOUS.


// Jeu du craps

int Jeu::craps()
{

    Jeu *craps = new Jeu;

    int joue = 1;
    srand(time(NULL));
    cout << "Bienvenue dans le jeu du Craps." << endl;
    while(joue == 1)
    {



        cout << "Saisissez le chiffre 1 ou 2" << endl;
        cin >> saisieDuJoueur;


        cout << "Saisissez votre mise:\n" << endl;

        cin >> miseJoueur;

        random = rand() % 3;

        if(saisieDuJoueur == random)
        {
            nbJetons += miseJoueur;
            cout << "Vous avez gagné le nombre à trouver était " << random << "\n" << "Il vous reste " << nbJetons << " jetons" << endl;
        }
        else if(saisieDuJoueur != random)
        {
            Jeu *roulette = new Jeu;
            nbJetons -= miseJoueur;
            cout << "Vous avez perdu le nombre à trouver était " << random << "\n" << "Il vous reste " << nbJetons << " jetons" << endl;

        }
        if(nbJetons == 0)
        {
            cout << "La partie est finie, voulez-vous rejouer? Tapez {1} pour rejouer, {2} pour sortir:\n" << endl;
            cin >> saisieDuJoueur;
            if(saisieDuJoueur == 1)
            {
                nbJetons = 100;
            }
            else
            {
                break;
            }
        }

    }
}

//Jeu du BlackJack
int Jeu::blackJack()
{
    Jeu *blackJack = new Jeu;

    int joue = 1;
    srand(time(NULL));
    cout << "Bienvenue dans le jeu du BlackJack." << endl;
    while(joue == 1)
    {



        cout << "Saisissez le chiffre 1 ou 2" << endl;
        cin >> saisieDuJoueur;


        cout << "Saisissez votre mise:\n" << endl;

        cin >> miseJoueur;

        random = rand() % 3;

        if(saisieDuJoueur == random)
        {
            nbJetons += miseJoueur;
            cout << "Vous avez gagné le nombre à trouver était " << random << "\n" << "Il vous reste " << nbJetons << " jetons" << endl;
        }
        else if(saisieDuJoueur != random)
        {
            nbJetons -= miseJoueur;
            cout << "Vous avez perdu le nombre à trouver était " << random << "\n" << "Il vous reste " << nbJetons << " jetons" << endl;

        }
        if(nbJetons == 0)
        {

            cout << "La partie est finie, voulez-vous rejouer? Tapez {1} pour rejouer, {2} pour sortir:\n" << endl;
            cin >> saisieDuJoueur;
            if(saisieDuJoueur == 1)
            {
                nbJetons = 100;
            }
            else
            {
                break;
            }

        }

    }
}
