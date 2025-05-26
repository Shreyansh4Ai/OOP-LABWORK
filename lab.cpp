#include <iostream>
using namespace std;

class ObjectCounter {
private:
    static int count; // Static variable to keep track of object count

public:
    // Constructor
    ObjectCounter() {
        count++;
    }

    // Static method to get the count of objects
    static int getCount() {
        return count;
    }
};

// Initialize static member
int ObjectCounter::count = 0;

int main() {
    ObjectCounter obj1;
    ObjectCounter obj2;
    ObjectCounter obj3;

    cout << "Number of objects created: " << ObjectCounter::getCount() << endl;

    return 0;
}