#ifndef IOSTREAM
#include <iostream>

using namespace std;

class NoeudDeListe {
private:
    string donnee;
    NoeudDeListe* suivant;
public:

    explicit NoeudDeListe(string donnee) {
        this->donnee = donnee;
        this->suivant = nullptr; // cf différence avec NULL
    }

    string getDonnee() {
        return this->donnee;
    }

    void setDonnee(string d) {
        this->donnee = d;
    }

    NoeudDeListe* getSuivant() {
        return this->suivant;
    }

    void setSuivant(NoeudDeListe* s) {
        this->suivant = s;
    }

    void afficher() {
        cout << "Donnee -> " << this->donnee << "; Valeur suivante -> " << this->suivant->donnee<< "}\n";
    }



};
#endif