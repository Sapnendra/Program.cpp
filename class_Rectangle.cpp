#include<iostream>
using namespace std;

class Rectangle {
    int length;
    int breadth;
    Public:
    void SetDimension(int l, int b) {
        length = l;
        breadth = b;
    }
    int getArea() {
        return length*breadth;
    }
};

int main() {
    Rectangle rt;
    rt.SetDimension(10,7);
    cout << rt.getArea() << endl;
    return 0;  
}