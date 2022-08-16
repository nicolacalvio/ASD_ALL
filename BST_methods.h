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
/*funzione che controlla se l'albero è un BST*/
bool isABST(BSTNode *root){
    if(!root) return true;
    if(root->left && root->left->info > root->info) return false;
    if(root->right && root->right->info < root->info) return false;
    if(!isABST(root->left) || !isABST(root->right)) return false;
    return true;
}
BSTNode *tree_minimum(BSTNode *&tree){
    if(tree){
        if(tree->left){
            return tree_minimum(tree->left);
        }else{
            return tree;
        }
    }
    return nullptr;
}
void transplant(BST *&tree, BSTNode *&u, BSTNode *&v){
    if(!u->p){
        tree->root = v;
    }else{
        if(u == u->p->left){
            u->p->left = v;
        }else{
            u->p->right = v;
        }
    }
    if(v){
        v->p = u->p;
    }
}

void tree_delete(BST *&tree, BSTNode *&z){
    if(!z->left){
        transplant(tree, z, z->right);
    }else if(!z->right){
        transplant(tree, z, z->left);
    }else{
        BSTNode *y = tree_minimum(z->right);
        if(y->p != z){
            transplant(tree, y, y->right);
            y->right = z->right;
            z->right->p = y;
        }
        transplant(tree, z, y);
        y->left = z->left;
        if(y->left){
            y->left->p = y;
        }
    }
}

void eliminaChiaviDispari(BST *&tree, BSTNode *nodo){
    if(nodo){
        if((nodo->info%2)!=0){
            tree_delete(tree, nodo);
        }
        eliminaChiaviDispari(tree, nodo->left);
        eliminaChiaviDispari(tree, nodo->right);
    }
}


void stampaBST(BSTNode *bst){
    if(bst){
        stampaBST(bst->left);
        cout << bst->info << endl;
        stampaBST(bst->right);
    }
}
