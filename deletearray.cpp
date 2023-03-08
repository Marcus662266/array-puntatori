#include <iostream>
using namespace std;

void rimuovi(int *arr, int len, int canc)
{

    int *tempArr = new int[len - 1]; // Crea un nuovo array temporaneo senza specificarlo
    for (int i = 0, j=0; i,j < len; i++)
    {
        cout << "---------" << endl;
        if (i != canc)
        {
            tempArr[j++] = arr[i];
        }
    }

    delete[] arr; // Elimina, arr e sostituisci con il tempArr
    arr = tempArr;

    for (int i = 0; i < len - 1; i++)
    {
        cout << arr[i] << " "; // Stampa arr nuovo
    }
    cout << endl;

    delete[] tempArr; // Elimina  tempArr
}

int main()
{

    int *arr = new int[5]{1, 2, 3, 4, 5}; // Dichiarazione  arr

    rimuovi(arr, 5, 2); // Chiama  funzione rimuovi per eliminare

    delete[] arr; //// Eliminazione arr inizio

    return 0;
}