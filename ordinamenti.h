//
// Created by nicola on 16/08/22.
//

#ifndef ASD_ORDINAMENTI_H
#define ASD_ORDINAMENTI_H

#endif //ASD_ORDINAMENTI_H

void insertionSort(int *array, int n);
void mergesort(int *array, int n);
void quicksort(int *array, int n);
void heapsort(int *array, int n);
void countingSort(int *array, int n);
void radixSort(int *array, int n);

void insertionSort(int *array, int n){
    int i, j, key;
    for(i=1; i<n;i++){
        key = array[i];
        j=i-1;
        while(j>=0 && array[j]>key){
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = key;
    }
}

void partition(int *array, int p, int q, int r){

}

void mergeSort(int *array, int n){

}


void stampaArray(int *arr, int n){
    if(n>=1){
        stampaArray(arr, n-1);
        cout << arr[n-1] << endl;
    }
}

