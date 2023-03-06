#include <iostream>
using namespace std;
int* aggiungiInTesta(int arr[], int len, int n) {
    int* nuovo_array = new int[len + 1]; 
    nuovo_array[0] = n; 
    for (int i = 0; i < len; i++) {
        nuovo_array[i + 1] = arr[i]; 
    }
    return nuovo_array; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int len = 5;
    int n = 6;
    
    int* nuovo_arr = aggiungiInTesta(arr, len, n); 
    
    for (int i = 0; i < len + 1; i++) {
        cout << nuovo_arr[i] << "--"; 
    }
    cout << endl;
    
    delete[] nuovo_arr; 
    
    return 0;
}