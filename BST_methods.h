//
// Created by nicola on 14/08/22.
//

#include <vector>

#ifndef ASD_BST_METHODS_H
#define ASD_BST_METHODS_H

#endif //ASD_BST_METHODS_H

using namespace std;



BSTNode *insert(BSTNode *&T, BSTNode *z){
    /* If the tree is empty, return a new node */
    if (T == NULL)
        return z;

    /* Otherwise, recur down the tree */
    if (z->info < T->info)
        T->left = insert(T->left, z);
    else if (z->info > T->info)
        T->right = insert(T->right, z);

    /* return the (unchanged) node pointer */
    return T;
}

BST *convertArrayToBST(vector<int> numeri){
    BST *albero = new BST(new BSTNode(numeri[0], nullptr));
    BSTNode *p = albero->root;
    numeri.erase(numeri.begin());
    for(int numero : numeri){
        insert(albero->root, p);
        p = new BSTNode(numero, p);
    }
    return albero;
}

void stampaBST(BSTNode *bst){
    if(bst){
        stampaBST(bst->left);
        cout << bst->info << endl;
        stampaBST(bst->right);
    }
}
