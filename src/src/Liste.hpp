
#ifndef CADET_COLLIGNON_CPP_LISTE_HPP
#define CADET_COLLIGNON_CPP_LISTE_HPP
#include "NoeudDeListe.h"

class Liste {
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

    Liste() {
        this->pPremier = nullptr;
        this->pDernier = nullptr;
        this->nbElts = 0;
    }

    void ajouterFin(string x) {
        NoeudDeListe *tmp = new NoeudDeListe(x); // mettre le type et cf différence...
        if (listeVide()) {
            this->pPremier = tmp;
            this->pDernier = tmp;
        } else {
            this->pDernier->setSuivant(tmp);
            this->pDernier = tmp;
        }
        this->nbElts++;
    }

    void retirerFin() {
        if (!listeVide()) {
            NoeudDeListe *tmp = pDernier;
            if ( pPremier == pDernier )
                pPremier = pDernier = NULL;
            else  {
                NoeudDeListe *pCourant= pPremier ;
                while ( pCourant->getSuivant()!= pDernier )
                    pCourant  = pCourant->getSuivant();
                pDernier= pCourant;
                pCourant->setSuivant(NULL);
            }
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

private:
    bool listeVide() {
        if (this->nbElts == 0) return true;
        else return false;
    }
};
#endif
