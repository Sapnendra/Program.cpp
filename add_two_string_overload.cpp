#include<iostream>
#include<cstring>
using namespace std;

class demo {
    char *str;
    int len;
    public:
    demo() {
        str = NULL;
        len = 0;
    }
    demo(char *s) {
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str,s);
    }
    void show() {
        cout << "The string is= " << str << endl;
    }
    demo operator +(demo op2);
};
demo demo :: operator +() {
    demo temp;
    int l = strlen(str) + strlen(op2.str);
    temp.str = new char[l+1];
    strcpy(temp.str,str);
    strcat(temp.str,op2.str);
    return (temp);
}

int main() {
    demo s1("Hello");
    s1.show();
    demo s2("World");
    s2.show();
    demo s3;
    s3 = s1 + s2;
    s3.show();
    return 0;
}