// declaring variables in a class
#include <iostream>
#include <string>

using namespace std;

class Person {
    // make all the variables in your class private. If public they will be global
    //if a var is private, it can't be accessed in main
    
    // make public functions in class to access private variables
    public:
        // changes var
        void setName(string x) {
            name = x;
        }
        // accesses var
        string getName() {
            return name;
        }
// use private to prevent global variables from messing with other functions
    private:
        string name;
};

int main()
{   
    // set class object
    Person personClass;
    //call function to set name
    personClass.setName("Ashley");
    // have to print out function that gets name and not var because its still private
    cout << personClass.getName();
    return 0;
}