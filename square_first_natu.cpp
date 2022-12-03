#include<iostream>
using namespace std;

int square(int x) {
    return (x*x);
}

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
    cout << square(i) <<" ";
    }
    return 0;
}