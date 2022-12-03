#include<iostream>
using namespace std;

double area(double r) {
    return (3.14*r*r);
}

double circumference(double r) {
    return (2*3.14*r);
}

int main() {
    int r;
    cin >> r; 
    double result = area(r);
    double result2 = circumference(r);
    cout <<"Area of circle: "<<result<< endl;
    cout <<"Circumfarance of circle: "<< result2 << endl;
    return 0;
}