#include <iostream>
#include "casino.h"
#include <stdlib.h>
#include <locale.h>
#include "joueur.h"
#include "jeu.h"
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>


using namespace std;

int main()
{

    setlocale(LC_ALL, ""); // D�pendante � la directive pr�-processeur local.h, cette fonction permet � la console d'accepter les accents.

//Cr�ation des jeux.
    Joueur Roger;
    Jeu Roulette;
    Jeu Craps;
    Jeu BlackJack;

//On demande au joueur de saisir un pseudo et on l'enregistre dans le fichier.
    cout << "Bienvenue au casino, saisissez votre pseudo:" << endl;
    fstream file;
    string infoPartie;
    file.open("partieDeJeu.txt", fstream::out | fstream::in);
    getline(file, infoPartie);
    cin >> infoPartie;
    file.clear(); //Passer de lecture a �criture
    file << infoPartie;


    //Acces � la liste des jeux.
    vector <string> ListeJeux;
    cout << "Bienvenue au casino, s�l�ctionnez votre jeu.\n" << endl;
    ListeJeux.push_back("Tapez 1 pour jouer � la Roulette.");
    ListeJeux.push_back("Tapez 2 pour jouer au Craps.");
    ListeJeux.push_back("Tapez 3 pour jouer au BlackJack.");

    for(int j=0; j<ListeJeux.size(); j++)
    {
        cout << ListeJeux[j] << endl;
    }

    // Le joueur choisi � quel jeu il veut jouer.
    cin >> Roger.Utilisateur_Choix_Jeu;

    //En fonction du choix du joueur, nous somme redirig� sur le jeu en question.
    if (Roger.Utilisateur_Choix_Jeu == 1)
    {
        Roulette.roulette();

    }
    else if (Roger.Utilisateur_Choix_Jeu == 2)
    {
        Craps.craps();
    }
    else if (Roger.Utilisateur_Choix_Jeu == 3)
    {
        BlackJack.blackJack();
    }



    return 0;
}
