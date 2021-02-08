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
//void afficherListe (Liste * list);
//
//
//
//void afficherListe (Liste * list) {
//    std::cout << "Nombre d'éléments : " << list->nbEleListe << "\n";
//    std::cout << "Premier élément : " << list->premierListe.donnee << "\n";
//    std::cout << "Dernier élément : " << list->dernierListe.donnee << "\n";
//}
