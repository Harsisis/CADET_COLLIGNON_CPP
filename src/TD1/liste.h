#ifndef CADET_COLLIGNON_CPP_LISTE_H
#define CADET_COLLIGNON_CPP_LISTE_H
#include "noeudListe.h"

void afficherListe (Liste * list);

class liste {
public:
    noeudListe premierListe;
    noeudListe dernierListe;
    int nbEleListe;
};

void afficherListe (Liste * list) {
    std::cout << "Nombre d'éléments : " << list->nbEleListe << "\n";
    std::cout << "Premier élément : " << list->premierListe.donnee << "\n";
    std::cout << "Dernier élément : " << list->dernierListe.donnee << "\n";
}

#endif //CADET_COLLIGNON_CPP_LISTE_H
