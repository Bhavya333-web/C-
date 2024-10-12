#include<iostream>
#include<string>
using namespace std;
int main(){
   
    string z;
    int x;
    string y;
    cout << " Enter your's Pet name"<< endl;
    cin >> z ;
    cin.ignore();
    cout << "Enter Full name" << endl;
    getline(cin, y);

    cout << "Enter your age" << endl;
    cin >> x ;

    cout << "Hello!" <<  y  <<" you are" << x << " years old." ;
}