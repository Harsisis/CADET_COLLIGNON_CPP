//
// Created by Gauthier V1.0 on 08/02/2021.
//

#ifndef CADET_COLLIGNON_CPP_NOEUDLISTE_H
#define CADET_COLLIGNON_CPP_NOEUDLISTE_H


class noeudListe {
public:
    std::string donnee;
    noeudListe * suivant;
};

void afficherNoeud (noeudListe * noeud);
void ajouterNoeud (std::string valeur);
int tailleNoeud (noeudListe * noeud);
noeudListe premierNoeudListe (noeudListe * noeud);
noeudListe dernierNoeudListe (noeudListe * noeud);


void ajouterNoeud (std::string valeur) {
    noeudListe* noeud = new noeudListe;
    noeud -> donnee = valeur;
    noeud -> suivant = liste;
    liste = noeud;
}

void afficherNoeud (noeudListe * noeud) {
    std::cout << "liste :\n";
    while (noeud != NULL) {
        std::cout << noeud->donnee << "\t";
        noeud = noeud -> suivant;
    }
    std::cout << std::endl;
}

int tailleNoeud (noeudListe * noeud) {
    int c=0;
    while (noeud != NULL) {
        c++;
        noeud = noeud->suivant;
    }
    std::cout << "taille : " << c;
    return c;
}

noeudListe premierNoeudListe (noeudListe * noeud) {
    noeudListe n;
    n.donnee = noeud->donnee;
    n.suivant = noeud->suivant;
    std::cout << "premier ele : " << noeud->donnee;
    return n;
}

noeudListe dernierNoeudListe (noeudListe * noeud) {
    bool hello = true;
    noeudListe n;
    while (hello) {
        if (noeud->suivant == NULL) {
            hello = false;
            n.donnee = noeud->donnee;
            n.suivant = noeud->suivant;
        } else {
            noeud = noeud->suivant;
        }
    }
    return n;
}


#endif //CADET_COLLIGNON_CPP_NOEUDLISTE_H
