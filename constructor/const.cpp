// constructor is a function that is called as soon as the object is created
// constructors never have a return type
// main use for constructors are to get inital variables and values 

#include <iostream>
#include <string>
using namespace std;

class BuckysClass{
    public:
    // constructors have the same name as the class
        BuckysClass(string z) {
            // cout << "this will get printed automatically";
            setName(z);
        }
        void setName (string x) {
            name = x;
        }

        string getName() {
            return name;
        }
        private:
            string name;
};

int main()
{
    BuckysClass bo("Ashley Clarke");
    cout << bo.getName();
    return 0;
}