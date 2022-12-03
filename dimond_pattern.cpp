#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int line = 1; line <= n; line++) {
        int no_of_spaces = (n-line);
        for(int k = 0; k < no_of_spaces; k++) {
            cout << " ";
        }
        int no_of_char = 2*line-1;
        for(int j = 0; j < no_of_char; j++ ) {
            cout <<(char)('A'+j) ;
        }
        cout << endl;
    }

    for(int line = n+1; line < 2*n; line++) {
        int no_of_spaces = (line-n);
        for(int k = 0; k < no_of_spaces; k++) {
            cout << " ";
        }
        int no_of_char = 2*(2*n-line)-1;
        for(int j = 0; j < no_of_char; j++ ) {
            cout << (char)('A'+j);
        }
        cout << endl;
    }

    return 0;
}