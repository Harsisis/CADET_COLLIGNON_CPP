#include "Arbre.hpp"
#include "File.hpp"
#include "Pile.hpp"
#include <iostream>
#include <string>
#include <cstdio>
#include <windows.h>

using namespace std;

#pragma execution_character_set( "utf-8" )

void creatFile(string class_name, string list_name);
void creatPile(string class_name, string list_name);
void creatArbre(string class_name, string list_name);
void AccueilPage(string class_name, string list_name);
T_arbre* saisirArbre(int i);

int main (){
    SetConsoleOutputCP( 65001 );
    T_arbre *tpmp = new T_arbre(new T_arbre("2"), new T_arbre("3"), "1");
    string class_name, list_name, file_name, arbre_name;

    cout << "Bienvenue dans l'application de génération de code UML\n";

    cout << "Taper le nom de la classe : ";
    cin >> class_name;

    AccueilPage(class_name, list_name);
}

void AccueilPage(string class_name, string list_name){
    int choice;
    cout << "Nom de la classe : " << class_name;
    do {
        cout << "\n\nPartie UML : voulez vous ajouter :\n1 - une pile\n2 - une file\n3 - un arbre binaire\n";
        cin >> choice;
    } while (choice!=1 && choice!=2 && choice!=3);

    switch (choice) {
        case 1:
            creatPile(class_name, list_name);
            break;
        case 2:
            creatFile(class_name, list_name);
            break;
        case 3:
            creatArbre(class_name, list_name);
            break;
    }
}

void creatFile(string class_name, string list_name) {
    string file_name, var;
    bool stop = false;
    cout << "Taper le nom de la file : ";
    cin >> file_name;
    File *file = new File();
    cout << "Saisie des éléments de la file : ";
    do {
        cout << "valeur à rentrer (stop pour arrêter)\n ";
        cin >> var;
        if (var != "stop") {
            file->ajouterFin(var);
        } else{
            stop = true;
        }
    } while (!stop);
    do {
        cout << "Voir la File : O/n\n";
        cin >> var;
    } while (var != "O" && var != "o" && var != "n" && var != "N");
    if (var == "O" || var == "o") {
        file->afficher();
    }
    AccueilPage(class_name, list_name);
}

void creatPile(string class_name, string list_name) {
    string pile_name, var;
    bool stop = false;
    cout << "Taper le nom de la pile : ";
    cin >> pile_name;
    Pile *pile = new Pile();
    cout << "Saisie des éléments de la pile : ";
    do {
        cout << "valeur à rentrer (stop pour arrêter)\n ";
        cin >> var;
        if (var != "stop") {
            pile->ajouterTete(var);
        } else{
            stop = true;
        }
    } while (!stop);
    do {
        cout << "Voir la Pile : O/n\n";
        cin >> var;
    } while (var != "O" && var != "o" && var != "n" && var != "N");
    if (var == "O" || var == "o") {
        pile->afficher();
    }
    AccueilPage(class_name, list_name);
}

void creatArbre(string class_name, string list_name){
    string arbre_name, var;
    bool stop = false;
    cout << "Taper le nom de l'arbre : ";
    cin >> arbre_name;

    T_arbre* arbre = saisirArbre(0);

    arbre->afficher();

    cout << "ce n'est pas beau mais ca marche :)" << endl;

    AccueilPage(class_name, list_name);

}

T_arbre* saisirArbre(int i) {
    T_arbre *tpmp = new T_arbre();
    string choix, str;
    do {
        cout << "Vous etes au niveau " << i << endl << "Voulez-vous un fils gauche ? oui/non" << endl;
        cin >> choix;
    } while (choix != "oui" && choix != "non");
    if (choix == "oui") {
        tpmp->setAg(saisirArbre(i+1));
    } else
        tpmp->setAg(nullptr);

    cout << "Vous etes au niveau " << i << endl << "Quelle valeur pour le noeud ?" << endl;
    cin >> str;
    tpmp->setVar(str);

    do {
        cout << "Vous etes au niveau " << i << endl << "Voulez-vous un fils droit ? oui/non" << endl;
        cin >> choix;
    } while (choix != "oui" && choix != "non");
    if (choix == "oui") {
        tpmp->setAd(saisirArbre(i+1));
    } else
        tpmp->setAd(nullptr);

    return tpmp;
}
