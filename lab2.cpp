#include <iostream>
using namespace std;

class AddNumbers {
private:
    int num1, num2;

public:
    AddNumbers(int a, int b) : num1(a), num2(b) {}

    // Friend function declaration
    friend int add(const AddNumbers& obj);
};

// Friend function definition
int add(const AddNumbers& obj) {
    return obj.num1 + obj.num2;
}

int main() {
    AddNumbers obj(10, 20);
    cout << "The sum is: " << add(obj) << endl;
    return 0;
}