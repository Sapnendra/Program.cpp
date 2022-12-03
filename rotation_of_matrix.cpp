#include<iostream>
#include<vector>
using namespace std;

int main() {
    int r1,c1;
    cin >> r1 >> c1;
    vector<vector<int> > rotation(r1,vector<int> (c1));
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            cin >>rotation[i][j];
        }
    }
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            cout << rotation[i][j] <<" ";
        }
        cout << endl;
    }

    cout <<"90 Degree rotate given matrix"<< endl;
    
    for(int j = 0; j < r1; j++) {
        for(int i = r1 - 1; i >= 0; i--) {
            cout << rotation[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}