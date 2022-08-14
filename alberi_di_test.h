//
// Created by nicola on 14/08/22.
//

#ifndef ASD_ALBERI_DI_TEST_H
#define ASD_ALBERI_DI_TEST_H

#endif //ASD_ALBERI_DI_TEST_H
using namespace std;

pair<Tree*, int> returnGenericTreeWithLevels() {
    Tree *albero = new Tree(new Node(20));
    albero->root->left = new Node(18);
    albero->root->left->right = new Node(13);
    albero->root->left->right->left = new Node(14);
    albero->root->right = new Node(30);
    albero->root->right->left = new Node(5);
    albero->root->right->right = new Node(9);
    albero->root->right->left->left = new Node(7);
    return pair<Tree*, int>{albero, 4};
}

BST* returnBSTTree(){
    return nullptr;
}