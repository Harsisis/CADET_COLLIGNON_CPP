#ifndef DEF_CMPT_INFO_Arbre_HPP
#define DEF_CMPT_INFO_Arbre_HPP
#include <cstdlib>
#include <ostream>
#include <cstdio>
#include "Liste.hpp"

class T_arbre{
protected:
    string var;
    T_arbre *AG;
    T_arbre *AD;

public:

    T_arbre() {
        this->AG = nullptr;
        this->AD = nullptr;
        this->var = "";
    }

    T_arbre(string var) {
        this->AG = nullptr;
        this->AD = nullptr;
        this->var = var;
    }

    T_arbre(T_arbre *AG, T_arbre *AD, string var) {
        this->AG = AG;
        this->AD = AD;
        this->var = var;
    }

    virtual void afficher() {
        if (AG != NULL) {
            AG->afficher();
        }
        cout << var << endl;
        if (AD != NULL) {
            AD->afficher();
        }
    }

    const string &getVar() const {
        return var;
    }

    void setVar(const string &var) {
        T_arbre::var = var;
    }

    T_arbre *getAg() const {
        return AG;
    }

    void setAg(T_arbre *ag) {
        AG = ag;
    }

    T_arbre *getAd() const {
        return AD;
    }

    void setAd(T_arbre *ad) {
        AD = ad;
    }
};

#endif