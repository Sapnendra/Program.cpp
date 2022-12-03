#include<iostream>
using namespace std;

class demo {
    Public:
    void swap(int x,int y) {        // integer over loading
        int temp;
        cout << "Values before swaping : " << x << endl;
        cout << "Values before swaping : " << y << endl;
        temp = x;
        x = y;
        y =  temp;
        cout << "Values after swaping : " << x << endl;
        cout << "Values after swaping : " << y << endl;
    }
    void swap(long int x, long int y) {     // long integer over loading
        long int temp;
        cout << "Values before swaping : " << x << endl;
        cout << "Values before swaping : " << y << endl;
        temp = x;
        x = y;
        y =  temp;
        cout << "Values after swaping : " << x << endl;
        cout << "Values after swaping : " << y << endl;
    }
    void swap(float x,float y) {     // float over loading
        float temp;
        cout << "Values before swaping : " << x << endl;
        cout << "Values before swaping : " << y << endl;
        temp = x;
        x = y;
        y =  temp;
        cout << "Values after swaping : " << x << endl;
        cout << "Values after swaping : " << y << endl;
    }
    void swap(double x,double y) {          // double over loading 
        double temp;
        cout << "Values before swaping : " << x << endl;
        cout << "Values before swaping : " << y << endl;
        temp = x;
        x = y;
        y =  temp;
        cout << "Values after swaping : " << x << endl;
        cout << "Values after swaping : " << y << endl;
    }
    void swap(char x, char y) {    // character overloading
        char temp;
        cout << "Values before swaping : " << x << endl;
        cout << "Values before swaping : " << y << endl;
        temp = x;
        x = y;
        y =  temp;
        cout << "Values after swaping : " << x << endl;
        cout << "Values after swaping : " << y << endl;
    }
};

int main() {
    demo ob;
    ob.swap('a','b');   // character
    ob.swap(3,5);   //by default integer
    ob.swap(2345l,12345l);   // long integer typecasting
    ob.swap(34.2,12.6);   //  by default compiler consider that, input value is double
    ob.swap(3.23543f,6.345678f);   //   //float typecasting
    return 0;
}