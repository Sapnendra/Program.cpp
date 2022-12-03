#include<iostream>
using namespace std;

bool isPrime(int num) {
    int d = 2;
    for(int i = d; i < num; i++) {
        if(num%d==0) {
            return false;
        } else {
            return true;
        }
    }
}
bool isPrimebtr(int num) {
    for(int i = 2; i*i < num; i++) {
        if(num%i==0) {
            return false;
        } 
    }
    return true;
}
 
int main() {
    int a, b;
    cin >> a >> b;
    for(int i = a; i < b; i++) {
        if(isPrimebtr(i)) {
            cout << i <<" ";
        }
    }
    return 0;
}