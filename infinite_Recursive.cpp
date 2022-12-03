#include<iostream>
using namespace std;

int fact( long p ) {
    if(p > 1) {
        return (p * fact(p+1));
    } else {
        return 1;
    }
}

int main() {
    long q = 3;
    cout << q <<"!="<< fact(q);
    return 0;
}