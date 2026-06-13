#include <iostream>
using namespace std;

// Interface equivalent
class Playable {
public:
    virtual void play() = 0; // pure virtual function
};

// Veena class
class Veena : public Playable {
public:
    void play() override {
        cout << "Playing Veena" << endl;
    }
};

// Saxophone class
class Saxophone : public Playable {
public:
    void play() override {
        cout << "Playing Saxophone" << endl;
    }
};

int main() {
    // a) Create an instance of Veena and call play()
    Veena v;
    v.play();

    // b) Create an instance of Saxophone and call play()
    Saxophone s;
    s.play();

    // c) Use Playable pointer/reference
    Playable* p;

    p = &v;
    p->play();

    p = &s;
    p->play();

    return 0;
}