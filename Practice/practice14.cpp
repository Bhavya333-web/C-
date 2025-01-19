#include<iostream>
using namespace std;
int add(int a , int b){
    int c = a+b;
    return c;
}
void g(){
    cout<<"practice of function"<<endl;
}
int main(){
    int  num1,  num2 ;
        cin >>num1;
        cin>>num2;
        cout<<add(num1,num2)<<endl;
        g();
        return 0;
    }
