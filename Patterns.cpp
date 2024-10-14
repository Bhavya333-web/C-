#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter NO. of Rows and columns"<<endl;
    cin >>row>>col;
    for(int i=0;i<=row;i++){
        for(int j=0;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}