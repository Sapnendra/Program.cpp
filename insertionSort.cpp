#include<iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        int current = arr[i];
        int j = i-1;
        for(j = i-1; j >= 0; j--) {
            if(current < arr[j]) {
                arr[j+1] = arr[j];
            } else {
                break;
            }
        }
        arr[j+1] = current;
    }
}

int main() {
    int arr[5] = {10, 5, 3, 6, 1};
    insertionSort(arr, 5);
    for(int i = 0; i < 5; i++) {
        cout << arr[i] <<" ";
    }
    return 0;
}