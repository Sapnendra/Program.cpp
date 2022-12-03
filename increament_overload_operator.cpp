#include<iostream>
using namespace std;

class loc {
    int lg, lt;
    Public:
    loc(int longitude, int latitude) {
        lg = longitude;
        lt = latitude;
    }
    void show() {
        cout << "Longitude= " << lg << endl;
        cout << "latiutde= " << lt << endl;
    }
    void operator ++();
    void operator --();
    void operator +=(int n);
    void operator -=(int n);
};
void loc :: operator ++() {
    lg++;
    lt--;
}
void loc :: operator --() {
    lg--;
    lt--;
}
void loc :: operator +=(int n) {
    lg+=n;
    lt+=n;
}
void loc :: operator -=(int n) {
    lg-=n;
    lt-=n;
}

int main() {
    loc ob1(12,13);
    ob1.show();
    ob1++;
    ob1+=5;
    ob1.show();
    loc ob2(20,22);
    ob2.show();
    ob2--;
    ob2-=3;
    ob2.show();
    return 0;
}