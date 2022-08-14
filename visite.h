//
// Created by nicola on 14/08/22.
//

#ifndef ASD_VISITE_H
#define ASD_VISITE_H

#endif //ASD_VISITE_H
using namespace std;

void vistaSimmetricaAux(Node *root){
    if(root){
        vistaSimmetricaAux(root->left);
        cout << root->info << endl;
        vistaSimmetricaAux(root->right);
    }
}

void vistaSimmetrica(Tree *albero){
    vistaSimmetricaAux(albero->root);
}

void preordineAux(Node *root){
    if(root){
        cout << root->info << endl;
        preordineAux(root->left);
        preordineAux(root->right);
    }
}
void preordine(Tree *albero){
    preordineAux(albero->root);
}

void postOrdineAux(Node *root){
    if(root){
        preordineAux(root->left);
        preordineAux(root->right);
        cout << root->info << endl;
    }
}

void postOrdine(Tree *albero){
    postOrdineAux(albero->root);
}

void BFSAux(Node *root, int k){
    if(root){
        if(k == 0){
            cout << root->info << endl;
        }else{
            BFSAux(root->left, k-1);
            BFSAux(root->right, k-1);
        }
    }
}
void BFS(Tree *albero, int livelli){
    BFSAux(albero->root, livelli);
    //TODO: sistemare, non funziona e non si capisce cosa faccia livelli
}

void testVisite(Tree *albero, int livelli=0){
    cout << "Visita preordine" << endl;
    preordine(albero);
    cout << "-----------------------" << endl;

    cout << "Visita simmetrica" << endl;
    vistaSimmetrica(albero);
    cout << "-----------------------" << endl;

    cout << "Visita postordine" << endl;
    vistaSimmetrica(albero);
    cout << "-----------------------" << endl;

    if(livelli > 0){
        cout << "Visita ampiezza" << endl;
        BFS(albero, livelli);
        cout << "-----------------------" << endl;
    }else{
        cout << "Impossibile stampare la visita in ampiezza, passami il numero di livelli" << endl;
    }

}