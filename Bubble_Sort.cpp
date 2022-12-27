#include<iostream>
using namespace std;


void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } else {
                break;
            }
        }
    }
}
int main() {
    int n;
    cin >> n;                        // 4

    int arr[n];
    for(int i = 0; i < n; i++) {         // [2, 5, 1, 3]
        cin >> arr[i];
    }
    bubbleSort(arr,n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] <<" ";
    }
    return 0;
}