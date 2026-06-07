#include <iostream>
#include <string>
using namespace std;

// Interface
class LibraryUser {
public:
    virtual void registerAccount() = 0;
    virtual void requestBook() = 0;
};

// Kid User Class
class KidUser : public LibraryUser {
public:
    int age;
    string bookType;

    void registerAccount() {
        if (age < 12) {
            cout << "You have successfully registered under a Kids Account" << endl;
        }
        else {
            cout << "Sorry, Age must be less than 12 to register as a kid" << endl;
        }
    }

    void requestBook() {
        if (bookType == "Kids") {
            cout << "Book Issued successfully, please return the book within 10 days" << endl;
        }
        else {
            cout << "Oops, you are allowed to take only kids books" << endl;
        }
    }
};

// Adult User Class
class AdultUser : public LibraryUser {
public:
    int age;
    string bookType;

    void registerAccount() {
        if (age > 12) {
            cout << "You have successfully registered under an Adult Account" << endl;
        }
        else {
            cout << "Sorry, Age must be greater than 12 to register as an adult" << endl;
        }
    }

    void requestBook() {
        if (bookType == "Fiction") {
            cout << "Book Issued successfully, please return the book within 7 days" << endl;
        }
        else {
            cout << "Oops, you are allowed to take only adult Fiction books" << endl;
        }
    }
};

int main() {

    cout << "----- Test Case 1 : Kid User -----" << endl;

    KidUser k1;

    k1.age = 10;
    k1.registerAccount();

    k1.age = 18;
    k1.registerAccount();

    k1.bookType = "Kids";
    k1.requestBook();

    k1.bookType = "Fiction";
    k1.requestBook();


    cout << "\n----- Test Case 2 : Adult User -----" << endl;

    AdultUser a1;

    a1.age = 5;
    a1.registerAccount();

    a1.age = 23;
    a1.registerAccount();

    a1.bookType = "Kids";
    a1.requestBook();

    a1.bookType = "Fiction";
    a1.requestBook();

    return 0;
}