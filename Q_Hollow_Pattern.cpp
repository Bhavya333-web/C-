#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter NO. of Rows and columns" << endl;
    cin >> row >> col;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == 1 || j == col)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}