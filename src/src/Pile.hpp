#ifndef DEF_CMPT_INFO_Pile_HPP
#define DEF_CMPT_INFO_Pile_HPP

#include <cstdlib>
#include <ostream>
#include "Liste.hpp"

class Pile {
protected:
    NoeudDeListe* pTete;
    int nbElts;
public:

    NoeudDeListe* getpTete() {
        return pTete;
    }

    Pile() {
        this->pTete = nullptr;
        this->nbElts = 0;
    }

    void ajouterTete(string x) {
        NoeudDeListe *tpmp = new NoeudDeListe(x);
        tpmp->setSuivant(pTete);
        pTete = tpmp;
    }

    void retirerDebut() {
        if (!pileVide()) {
            this->pTete = this->pTete->getSuivant();
        }
    }

    virtual void afficher() {
        NoeudDeListe *tpmp = pTete;
        while (tpmp != NULL){
            tpmp->afficher();
            tpmp = tpmp->getSuivant();
        }
    }

    bool pileVide() {
        if (this->nbElts == 0) return true;
        else return false;
    }
};

#endif
