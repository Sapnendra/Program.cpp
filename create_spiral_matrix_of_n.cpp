#include<iostream>
#include<vector>
using namespace std;

vector<vector< int >> createSpiralMatrix(int n) {

    vector<vector<int >> matrix(n, vector<int > (n));
    int left = 0;
    int right = n - 1;
    int top = 0;
    int bottom = n - 1;

    int direction = 0;
    int value = 1;

    while(left <= right && top <= bottom) {
        if(direction == 0) {
            for(int col = left; col <= right; col++) {
                matrix[top][col] = value++;
            }
            top++;
        }
        else if(direction == 1) {
            for(int row  = top; row <= bottom; row++) {
                matrix[row][right] = value++;
            }
            right--;
        }
        else if(direction == 2) {
            for(int col = right; col >=left ; col--) {
                matrix[bottom][col] = value++;
            }
            bottom--;
        }
        else{
            for(int row  = bottom; row >= top; row--) {
                matrix[row][left] = value++;
            }
            left++;
        }
        direction = (direction+1)%10;
    }
    return matrix;
}

int main() {
    int n;
    cin >> n;
    
    vector<vector< int >> matrix(n, vector<int> (n));

    matrix = createSpiralMatrix(n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}