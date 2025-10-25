#include<iostream>
using namespace std;
class Grandfather {
    public:
        void born(int year) {
            cout << "Grand Father born on " << year << endl;
        }
};
class Father : public Grandfather {
    public:
        void bornf(int year) {
            cout << "Father born on " << year << endl;
        }
};
class Daughter : public Grandfather {
    public:
        void bornd(int year) {
            cout << "Daughter born on " << year << endl;
        }
};
class Son : public Grandfather {
    public:
        void borns(int year) {
            cout << "Son born on " << year << endl;
        }
};

int main() {
    Father f;
    Daughter d;
    Son s;

    // Accessing functions
    f.born(1940);
    f.bornf(1980);
    d.born(1940);
    d.bornd(2007);
    s.born(1940);
    s.borns(2005);
    return 0;
}
