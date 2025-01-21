#include <iostream>
using namespace std;
void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}
int main() {
    string name = "Alice";
    greet(name);
}