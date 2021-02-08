#include <iostream>
#include <list>
#include <stack>


void displayList(std::list<int> &li1);

void displayStack(std::stack<int> &st1);

int main() {
    std::list<int> li1;
    li1.push_back(10);
    li1.push_back(15);
    li1.push_back(5);
    li1.push_back(8);
    li1.push_back(1);
    li1.push_back(12);

    std::cout << "liste1 =\n";
    displayList(li1);

    std::cout << "liste1 tri\x82 =\n";
    li1.sort();
    displayList(li1);


    std::stack<int> st1;
    st1.push(10);
    st1.push(15);
    st1.push(5);
    st1.push(8);
    st1.push(1);
    st1.push(12);
    std::cout << "pile1 =\n";
    displayStack(st1);


    return 0;
}

void displayStack(std::stack<int> &st1) {
    while (!st1.empty()){
        std::cout << " " << st1.top();
        st1.pop();
    }
    std::cout << "\n";
}

void displayList(std::list<int> &li1) {
    for (auto l : li1) {
        std::cout << " " << l;
    }
    std::cout << std::endl;
}


//
//class noeudListe {
//public:
//    std::string donnee;
//    noeudListe * suivant;
//};
//
//noeudListe* liste = NULL;
//
//class Liste {
//public:
//    noeudListe premierListe;
//    noeudListe dernierListe;
//    int nbEleListe;
//};
//
//void afficherNoeud (noeudListe * noeud);
//void ajouterNoeud (std::string valeur);
//int tailleNoeud (noeudListe * noeud);
//noeudListe premierNoeudListe (noeudListe * noeud);
//noeudListe dernierNoeudListe (noeudListe * noeud);
//void afficherListe (Liste * list);
//
//int main() {
//    std::cout << "hello\n";
//
//    ajouterNoeud("hello");
//    ajouterNoeud("hello");
//    ajouterNoeud("hello");
//    ajouterNoeud("hello");
//    ajouterNoeud("hello");
//    ajouterNoeud("hello");
//
//    afficherNoeud(liste);
//
//    Liste *list = NULL;
//    list->nbEleListe = tailleNoeud(liste);
////    list->premierListe = premierNoeudListe(liste);
//    list->dernierListe = dernierNoeudListe(liste);
//    afficherListe(list);
//
//    return 0;
//}
//
//void ajouterNoeud (std::string valeur) {
//    noeudListe* noeud = new noeudListe;
//    noeud -> donnee = valeur;
//    noeud -> suivant = liste;
//    liste = noeud;
//}
//
//void afficherNoeud (noeudListe * noeud) {
//    std::cout << "liste :\n";
//    while (noeud != NULL) {
//        std::cout << noeud->donnee << "\t";
//        noeud = noeud -> suivant;
//    }
//    std::cout << std::endl;
//}
//
//int tailleNoeud (noeudListe * noeud) {
//    int c=0;
//    while (noeud != NULL) {
//        c++;
//        noeud = noeud->suivant;
//    }
//    std::cout << "taille : " << c;
//    return c;
//}
//
//noeudListe premierNoeudListe (noeudListe * noeud) {
//    noeudListe n;
//    n.donnee = noeud->donnee;
//    n.suivant = noeud->suivant;
//    std::cout << "premier ele : " << noeud->donnee;
//    return n;
//}
//
//noeudListe dernierNoeudListe (noeudListe * noeud) {
//    bool hello = true;
//    noeudListe n;
//    while (hello) {
//        if (noeud->suivant == NULL) {
//            hello = false;
//            n.donnee = noeud->donnee;
//            n.suivant = noeud->suivant;
//        } else {
//            noeud = noeud->suivant;
//        }
//    }
//    return n;
//}
//
//void afficherListe (Liste * list) {
//    std::cout << "Nombre d'éléments : " << list->nbEleListe << "\n";
//    std::cout << "Premier élément : " << list->premierListe.donnee << "\n";
//    std::cout << "Dernier élément : " << list->dernierListe.donnee << "\n";
//}
