#include <iostream>
using namespace std;

// how to declare a class
class Person {
    public:
        void name() {
            string name;
            cout << "Enter your name: ";
            cin >> name;
            cout << "your name is " << name << endl;
        }
        int num(int x, int y) {
            int sum = x + y;
            return sum;
        }
 
};


int main()
{
    // must declare a name for an object and then call functions off of it
    Person personObject;
    personObject.name();
    cout << personObject.num(1,2);
    return 0;
}