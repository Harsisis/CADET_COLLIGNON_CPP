#ifndef DEF_CMPT_INFO_Arbre_HPP
#define DEF_CMPT_INFO_Arbre_HPP
#include <cstdlib>
#include <ostream>
#include <cstdio>
#include "Liste.hpp"

struct bintree_node{
    bintree_node *left;
    bintree_node *right;
    int data;
} ;
class bst{
    bintree_node *root;
public:
    bst(){
        root=NULL;
    }
    int isempty() {
        return(root==NULL);
    }
    void insert(int item);
    void displayBinTree();
    void printBinTree(bintree_node *);

};
void bst::insert(int item){
    bintree_node *p=new bintree_node;
    bintree_node *parent;
    p->data=item;
    p->left=NULL;
    p->right=NULL;
    parent=NULL;
    if(isempty())
        root=p;
    else{
        bintree_node *ptr;
        ptr=root;
        while(ptr!=NULL){
            parent=ptr;
            if(item&gt;ptr-&gt;data)
            ptr=ptr-p->right;
            else
            ptr=ptr->left;
        }
        if(item&lt;parent-&gt;data)
        parent->left;
        else
        parent->right;
    }
}
void bst::displayBinTree(){
    printBinTree(root);
}
void bst::printBinTree(bintree_node *ptr){
    if(ptr!=NULL){
        printBinTree(ptr->left);
        printBinTree(ptr->right);
        printf(reinterpret_cast<const char *>(ptr->left), ptr->right);
    }
}

#endif