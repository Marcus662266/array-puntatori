#include <iostream>
using namespace std;
int* aggiungiInFondo(int arr[], int len, int n) {
    int* nuovaBase = new int[len + 1];                                       // crea un array2 con dimensione aumentata di 1
    for (int i = 0; i < len; i++) {
        nuovaBase[i] = arr[i];                                               // copia i num dell'array1 nel  array2
    }
    nuovaBase[len] = n;                                                      // aggiungo il num alla fine del  array2
    return nuovaBase;                                                        // puntatore  array2
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};                                              // array1
    int len = sizeof(arr) / sizeof(arr[0]);                                   // lunghezza arra1
    int n = 6;
    
    int* nuovaBase = aggiungiInFondo(arr, len, n);
    
    for (int i = 0; i < len + 1; i++) {
        cout << nuovaBase[i] << "-";                                           // stampa num array2
    }
    cout << endl;
    
    delete[] nuovaBase;                                     // 
    
    return 0;
}