#ifndef DEF_CMPT_INFO_File_HPP
#define DEF_CMPT_INFO_File_HPP
#include <cstdlib>
#include <ostream>
#include "Liste.hpp"



class File {
protected:
    NoeudDeListe* pPremier;
    NoeudDeListe* pDernier;
    int nbElts;
public:
    NoeudDeListe* getpPremier() {
        return pPremier;
    }

    NoeudDeListe* getpDernier() {
        return pDernier;
    }

    File() {
        this->pPremier = nullptr;
        this->pDernier = nullptr;
        this->nbElts = 0;
    }

    void ajouterFin(string x) {
        NoeudDeListe *tpmp = new NoeudDeListe(x);
        if (listeVide()) {
            this->pPremier = tpmp;
            this->pDernier = tpmp;
        } else {
            this->pDernier->setSuivant(tpmp);
            this->pDernier = this->pDernier->getSuivant();;
        }
        this->nbElts++;
    }

    void retirerDebut() {
        if (!listeVide()) {
            this->pPremier = this->pPremier->getSuivant();
        }
    }

    virtual bool afficher() {
        cout << "Affichage de la liste :\n";
        NoeudDeListe* pListe = this->pPremier;
        if (listeVide()) {
            cout << "La Liste est vide.";
            return true;
        }
        for (int i = 1; i < nbElts; i++) {
            cout << "NoeudDeListe [" << i << "] {";
            pListe->afficher();
            pListe = pListe->getSuivant();
        }
        cout << "Nombre d'éléments : " << this->nbElts;

        return true;
    }

    bool listeVide() {
        if (this->nbElts == 0) return true;
        else return false;
    }
};

#endif
