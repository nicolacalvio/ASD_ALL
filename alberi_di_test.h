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
    BSTNode *radice = new BSTNode(8, nullptr);
    radice->left = new BSTNode(3, radice);
    radice->left->left = new BSTNode(1, radice->left);
    radice->left->left->right = nullptr;
    radice->left->left->left = nullptr;
    radice->left->right = new BSTNode(6, radice->left);
    radice->left->right->left = new BSTNode(4, radice->left->right);
    radice->left->right->right = new BSTNode(7, radice->left->right);
    radice->left->right->left->left= nullptr;
    radice->left->right->left->right= nullptr;
    radice->left->right->right->right= nullptr;
    radice->left->right->right->left= nullptr;
    radice->right = new BSTNode(10, radice);
    radice->right->left = nullptr;
    radice->right->right = new BSTNode(14, radice->right);
    radice->right->right->right = nullptr;
    radice->right->right->left = new BSTNode(13, radice->right->right);
    radice->right->right->left->right= nullptr;
    radice->right->right->left->left= nullptr;
    return new BST(radice);
}