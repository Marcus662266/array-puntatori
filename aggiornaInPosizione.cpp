#include <iostream>
using namespace std;


int *aggiornaInPosizione(int arr[], int len, int n, int pos =0)
{
    int len2 = len + 1;
    int arr2[len2];
    
    for (int i = 0; i < pos; i++)
    {
        arr2[i] = arr[i];
    }
    for (int i = 0; i < len2; i++)
    {
        arr2[pos] = n;
    }
    for (int i = 0; i < len2; i++)
    {
        arr2[pos+1] = arr[i];
    }
    
    cout<<endl<< "Aggiungi in posizione "<< pos << " il numero "<< n << endl;
    for (int i = 0; i < len2; i++)
    {
        cout << arr2[i] << " ";
    }

    return arr2;
}


int main()
{
    int arr1[] = {1, 1, 1, 1, 1};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int n = 3;
    int pos= 5;
    int* arr3 = aggiornaInPosizione (arr1,len1, n, pos );
}