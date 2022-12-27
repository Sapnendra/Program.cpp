#include"bits/stdc++.h"
using namespace std;

class Box {
    private:
    double length;      // length of a box
    double breadth;     // breadth of a box
    double height;      // height of a box

    public:
    double setVolume(void) {
        return length*breadth*height;
    }

    void setLength(double len) {
        length = len;
    }
    
    void setBreadth(double bre) {
        breadth = bre;
    }

    void setHeight(double hei) {
        height = hei;
    }

    

    // overload '+' operator to add two box object
    Box operator + (const Box &b) {
        Box box;
        box.length = this -> length + b.length;
        box.breadth = this -> breadth + b.breadth;
        box.height = this -> height + b.height;
        return box;
    }
};

int main() {
    Box Box1;       //declare a box1 of type box
    Box Box2;       //declare a box2 of type box
    Box Box3;       //declare o box3 of type box
    double volume = 0.0;        // container the volume of a box

    // Box1 - specification
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(8.0);

    // Box2 - specification
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(14.0);

    // volume of box1
    volume = Box1.setVolume();
    cout <<"Volume of Box1 : "<< volume << endl;

    // volume of box2
    volume = Box2.setVolume();
    cout <<"Volume of Box2 : "<< volume << endl;

    // Add two object as follows
    Box3 = Box1 + Box2;

    // volume of box3
    volume = Box3.setVolume();
    cout<<"Volume of Box3 : "<< volume << endl;
    return 0;
}