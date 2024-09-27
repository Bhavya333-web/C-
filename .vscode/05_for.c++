#include<iostream>
using namespace std;

int main() {
    int n;
    int start, end;
    cin >> start >> end;

    for (n = start; n <= end; ++n) {
        if (n >= 1 && n <= 10) {
            string numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine","ten"};
            cout << numbers[n - 1] << endl;  
        }
        else if (n > 10) {
            if (n % 2 == 0) {
                cout << "even" << endl;  
            }
            else {
                cout << "odd" << endl;  
            }
        }
    }

    return 0;
}
