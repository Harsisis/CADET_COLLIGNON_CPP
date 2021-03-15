//#include "Arbre.hpp"
#include "File.hpp"
//#include "Pile.hpp"
//#include "Liste.hpp"
#include <iostream> // pour std::cout
#include <string>   // pour std::string
#include <cstdio>
#include <windows.h>

#pragma execution_character_set( "utf-8" )

void creatFile();

int main (){
    SetConsoleOutputCP( 65001 );

    std::string class_name, list_name, file_name, arbre_name;
    int choice;

    std::cout << "Bienvenue dans l'application de génération de code UML\n";

    std::cout << "Taper le nom de la classe : ";
    std::cin >> class_name;

    std::cout << "Nom de la classe : " << class_name;


    do {
        std::cout << "\n\nPartie UML : voulez vous ajouter :\n1 - une liste\n2 - une file\n3 - un arbre binaire\n";
        std::cin >> choice;
    } while (choice!=1 && choice!=2 && choice!=3);

    switch (choice) {
        case 1:
            std::cout << "Taper le nom de la liste : ";
            std::cin >> list_name;

            break;
        case 2:
            creatFile();
            break;
        case 3:
            std::cout << "Taper le nom de la liste : ";
            std::cin >> list_name;
            break;
    }


}

void creatFile() {
    std::string file_name, var;
    std::cout << "Taper le nom de la file : ";
    std::cin >> file_name;
    File *file = nullptr;
    std::cout << "Saisie des éléments de la file : ";
    do {
        std::cout << "valeur à rentrer (stop pour arrêter)\n ";
        std::cin >> var;
        if (var != "stop") {
            file->ajouterFin(var);
        }
    } while (var == "stop");
}
