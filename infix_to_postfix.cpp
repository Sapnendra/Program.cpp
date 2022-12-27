#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int prec(char c) {                      // precedancy checking
    if(c == '^') {
        return 3;
    } else if(c == '/' || c == '*') {
        return 2;
    } else if(c == '-' || c == '+') {
        return 1;
    } else {
        return -1;
    }
}
 
string infixToPostfix(string s) {
    stack<char> st;
    string res;

    for(int i = 0; i < s.length(); i++) {
        if(s[i]>='a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {      // if reach at any operand
            res+=s[i];
        }
        else if(s[i] == '(') {          // if reach open bracket
            st.push(s[i]);
        } 
        else if(s[i] == ')') {
           while(!st.empty() && st.top() != '(') {                  
            res+=st.top();
            st.pop();
           }
           if(!st.empty()) {
            st.pop();
           }
        }
        else {
            while(!st.empty() && prec(st.top()) >= prec(s[i])) {            // to chack precendancy check 
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()) {
        res+=st.top();
        st.pop();
    }
    return res;
}

int main() {
    cout << infixToPostfix("(a-b/c)*(a/k-l)") << endl;
    return 0;
}