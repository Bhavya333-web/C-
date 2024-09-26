#include<iostream>
using namespace std;

int main() {
    int n;
    int start, end;

    // Reading input range
    cin >> start >> end;

    for (n = start; n <= end; ++n) {
        if (n >= 1 && n <= 9) {
            string numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
            cout << numbers[n - 1] << endl;  // Output the word corresponding to n
        }
        else if (n > 9) {
            if (n % 2 == 0) {
                cout << "even" << endl;  // Output "even" for numbers greater than 9 and divisible by 2
            }
            else {
                cout << "odd" << endl;   // Output "odd" for numbers greater than 9 and not divisible by 2
            }
        }
    }

    return 0;
}
