//
// Created by nicola on 16/08/22.
//

#ifndef ASD_ORDINAMENTI_H
#define ASD_ORDINAMENTI_H

#endif //ASD_ORDINAMENTI_H

void insertionSort(int *array, int n);
void merge(int *arr, int l, int m, int r);
void mergeSort(int *array, int l, int r);
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

void merge(int *arr, int l, int m, int r){
    int i, j, k;
    int m_1 = m - l + 1;
    int m_2 =  r - m;

    int L[m_1], R[m_2];

    for (i = 0; i < m_1; i++) L[i] = arr[l + i];
    for (j = 0; j < m_2; j++) R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < m_1 && j < m_2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < m_1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < m_2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int *array, int l, int r){
    if (l < r)
    {
        int m = l+(r-l)/2;

        mergeSort(array, l, m);
        mergeSort(array, m+1, r);

        merge(array, l, m, r);
    }
}


void stampaArray(int *arr, int n){
    if(n>=1){
        stampaArray(arr, n-1);
        cout << arr[n-1] << endl;
    }
}

