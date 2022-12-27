#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int m, int n, int arr3[]) {
   int i = 0, j = 0, k = 0;
   while(i < m && j < n) {
      if(arr1[i] < arr2[j]) {
         arr3[k] = arr1[i];
         i++;
         k++; 
      } else {
         arr3[k] = arr2[j];
         j++;
         k++; 
      }
   }
   for( ; i < m; i++ ) {
      arr3[k++] = arr1[i];
   }
   for( ; j < n; j++ ) {
      arr3[k++] = arr2[j];
   }
}

int main() {
   int m, n;
   cout <<"Enter array size : ";
   cin >> m >> n;

   int arr1[m];
   int arr2[n];
   int arr3[m+n];
   
   cout << "Enter sorted element of arr1 : " << endl;
   for(int i = 0; i < m; i++) {
      cin >> arr1[i];
   }

   cout << "Enter sorted element of arr1 : " << endl;
   for(int i = 0; i < n; i++) {
      cin >> arr2[i];
   }

   // calling function
   merge(arr1, arr2, m, n, arr3);

   cout <<"Merge to sorted array"<< endl;
   for(int i = 0; i < (m+n); i++) {
      cout << arr3[i] <<" ";
   }
   return 0;
}