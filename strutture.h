//
// Created by nicola on 14/08/22.
//

#ifndef ASD_STRUTTURE_H
#define ASD_STRUTTURE_H

#endif //ASD_STRUTTURE_H

class Node{
public:
    Node(int info){
        this->info=info;
        this->left = nullptr;
        this->right = nullptr;
    }
    ~Node()= default;
    int info;
    Node *left, *right;
};
class Tree{
public:
    Tree(Node *root){
        this->root = root;
    }
    ~Tree()= default;

    Node *root;
};
class BSTNode{
public:
    BSTNode(int info, BSTNode *p){
        this->info = info;
        this->left = nullptr;
        this->right = nullptr;
        this->p = p;
    }
    int info;
    BSTNode *left, *right, *p;
};

class BST{
public:
    BST(BSTNode *root){
        this->root = root;
    }
    ~BST()= default;
    BSTNode *root;
};

