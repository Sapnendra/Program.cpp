#include<iostream>
using namespace std;


// Base class
class Person {
    char name[20], dob[10];
    public:
        void get() {
            cout <<"Enter the name and dob : ";
            cin >> name >> dob;
        }
        void put() {
            cout <<"Name : "<< name << endl;
            cout <<"DOB : "<< endl;
        }
};


// Derived class level 1
class Customer : public Person {
    char id[10];
    double pur_amt;
    char pur_date;

    public:
        void get() {
            Person :: get();
            cout <<"Enter customer_id : ";
            cin >> id;
            cout <<"Enter purchase_date : ";
            cin >> pur_date;
            cout <<"Enter purchase_amt : ";
            cin >> pur_amt;
        }

        void put() {
            Person :: put();
            cout <<"Customer id : "<< id << endl;
            cout <<"Purhase amount : "<< pur_amt << endl;
            cout <<"Purchase date : "<< pur_date << endl;
        }
};


// derived class level 2
class Shipper : public Customer {
    char shipper_id[10];
    char location[20];
    char product_id[10];

    public:
        void get() {
            Customer :: get();
            cout <<"Enter Shipper_id : ";
            cin >> shipper_id;
            cout <<"Enter location : ";
            cin >> location;
            cout <<"Enter product id : ";
            cin >> product_id;
        }

        void put() {
            Customer :: put();
            cout <<"Shipper id : "<< shipper_id << endl;
            cout <<"location : "<< location << endl;
            cout <<"Product id : "<< product_id << endl;
        }
};

int main() {
    Shipper ob1;
    ob1.get();
    ob1.put();
    return 0;
}

// // Base class
// class Vehicle {
//   public:
//     string brand = "Ford";
//     void honk() {
//       cout << "Tuut, tuut! \n" ;
//     }
// };

// // Derived class
// class Car: public Vehicle {
//   public:
//     string model = "Mustang";
// };

// int main() {
//   Car myCar;
//   myCar.honk();
//   cout << myCar.brand + " " + myCar.model;
//   return 0;
// }