#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    if(num>=1){
        cout<<"Positive";
    }
        else if (num==0){
            cout<<"Zero";
            
        }
    else if(num<0){
        cout<<"Negative";
    }
    return 0;
}
