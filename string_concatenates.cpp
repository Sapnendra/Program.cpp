#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char s1[] = "Hello!";
    char s2[30] = "World";
    strcat(s2,s1);
    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}