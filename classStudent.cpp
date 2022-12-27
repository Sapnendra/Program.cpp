#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
    int age, standard;
    string first_name, last_name;
    
    public:
    void set_age(int a) {
        a = age;
    }
    int get_age() {
        return age;
    }
    
    void set_standard(int b) {
        b = standard;
    }
    
    int get_standard() {
        return standard;
    }
    
    void set_first_name(string c) {
        c = first_name;
    }
    
    string get_first_name() {
        return first_name;
    }
    
    void set_last_name(string d) {
        d = last_name;
    }
    
    string get_last_name() {
        return last_name;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age;
    cin >> standard;
    cin >> first_name;
    cin >> last_name;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << endl;
    cout << st.get_last_name() << ", " << st.get_first_name() << endl;
    cout << st.get_standard() << endl;
    cout <<endl;
    //cout << st.to_string();
    
    return 0;
}
