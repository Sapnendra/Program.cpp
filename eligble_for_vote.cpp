#include<iostream>
using namespace std;

bool vote_eligibility(int age, int limit) {
    if(age >= limit) {
        return true;
    } else {
        return false; 
    }
}

int main() {
    int n, limit;
    cin >> n >> limit;

    int result = vote_eligibility(n,limit);
    if(result == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}