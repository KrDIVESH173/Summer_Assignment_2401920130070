#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//  Interface
class LibraryUser {
public:
    virtual void registerAccount() = 0;  //  virtual
    virtual void requestBook() = 0;      //  virtual
    virtual ~LibraryUser() {}            //  Destructor
};
//  Kiduser class
class KidUser : public LibraryUser {
public:
    int age;
    string bookType;
    void registerAccount() override {
        if (age<12) {
            cout<<"You have successfully registered under a Kids Account" << endl;
        } else {
            cout<<"Sorry, Age must be less than 12 to register as a kid" << endl;
        }
    }

    void requestBook() override {
        if (bookType=="Kids") {
            cout<<"Book Issued successfully, please return the book within 10 days" << endl;
        } else {
            cout<<"Sorry, you are allowed to take only kids books" << endl;
        }
    }
};
//  Adultuser class
class AdultUser : public LibraryUser {
public:
    int age;
    string bookType;
    void registerAccount() override {
        if (age>12) {
            cout<<"You have successfully registered under an Adult Account" << endl;
        } else {
            cout<<"Sorry, Age must be greater than 12 to register as an adult" << endl;
        }
    }

    void requestBook() override {
        if (bookType=="Fiction") {
            cout<<"Book Issued successfully, please return the book within 7 days" << endl;
        } else {
            cout<<"Sorry, you are allowed to take only adult Fiction books" << endl;
        }
    }
};
////////////// //  Demo (main function)//////////////
int main() {
    // Test case 1
    KidUser kid;
    kid.age=4;
    kid.registerAccount();
    kid.bookType="Kids";
    kid.requestBook();

    kid.age=28;
    kid.registerAccount();
    kid.bookType="Fiction";
    kid.requestBook();

    // Test case 2
    AdultUser adult;
    adult.age=7;
    adult.registerAccount();
    adult.bookType="Kids";
    adult.requestBook();

    adult.age=46;
    adult.registerAccount();
    adult.bookType="Fiction";
    adult.requestBook();

    return 0;
}

