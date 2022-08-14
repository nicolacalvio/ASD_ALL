#include <iostream>
#include <vector>
#include "strutture.h"
#include "visite.h"
#include "alberi_di_test.h"
#include "BST_methods.h"
#include "dynamic.h"

using namespace std;

int main() {
     //    questo esercizio è l'esercizio 1 del 06/06/22
     //    testVisite(returnGenericTreeWithLevels().first, returnGenericTreeWithLevels().second);

    //     creare un BST da un array disordinato, quindi stamparlo
    //     stampaBST(convertArrayToBST(vector<int>{45,2,1,4,6,12,55})->root);
     //    cout << isABST(convertArrayToBST(vector<int>{45,2,1,4,6,12,55})->root) << endl;
      //   cout << isABST(returnBSTTree()->root) << endl;
      cout << fibonacci_ricorsivo(9) << endl;
      cout << fibonacci_bottom_up(9) << endl;
      cout << fibonacci_top_down(9) << endl;
    return 0;
}
