#include<iostream>
#include<stack>
using namespace std;

bool isValidParanthesis(string expression) {
    stack<char> s;
    for( int i = 0; i < expression.length(); i++) {
        char ch = expression[i];

        // if opening bracket, stack push
        // if closing bracket, stacktop closer and pop
        if( ch == '(' || ch == '{' || ch == '[' ) {
            s.push(ch);
        } else {
            // for closing bracket
            if(!s.empty()) {
                char top = s.top();
                if( (ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[') )
                {
                    s.pop();
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
    }
    if(s.empty()) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string str = "[{)}]";
    if(isValidParanthesis(str)) {
        cout << "Valid paranthesis" << endl;
    } else {
        cout <<"Not valid paranthesis" << endl;
    }
    return 0;
}