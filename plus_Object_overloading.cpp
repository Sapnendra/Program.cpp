#include<iostream>
using namespace std;

class loc {
    int lg, lt;
    Public:
    loc() {
        lg = lt = 0;
    }
    loc(int longitude, int latitude) {
        lg = longitude;
        lt = latitude;
    }
    void show() {
        cout << "Longitude= " << lg << endl;
        cout << "latiutde= " << lt << endl;
    }
    loc operator + (loc op2) {
        loc temp;
        temp.lg = lg + op2.lg;
        temp.lt = lt + op2.lt;
        return (temp);
    }
};

int main() {
    loc ob1(10,20);
    ob1.show();
    loc ob2(30,40);
    ob2.show();
    loc ob3;
    ob3 = ob1 + ob2;
    ob3.show();
    loc ob4;
    ob4 = ob1 + ob2 + ob3;
    ob4.show();
    return 0;
}