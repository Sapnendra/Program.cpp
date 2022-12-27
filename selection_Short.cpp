#include<iostream>
using namespace std;


void selectionSort(int arr[], int n) {
    for(int i = 0; i < n -1; i++) {
        // find minimum element in array
        int min = arr[i], minindex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < min) {
                min = arr[j];
                minindex = j;
            }
        }
        // funtion for swaping
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }
}
int main() {
    int n;
    cin >> n;                        // 4

    int arr[n];
    for(int i = 0; i < n; i++) {         // [2, 5, 1, 3]
        cin >> arr[i];
    }
    selectionSort(arr,n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
    return 0;
}