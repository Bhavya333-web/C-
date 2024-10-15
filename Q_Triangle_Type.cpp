#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    int z;
    cin>>x>>y>>z; 
    if(x==y && y==z){
        cout<<"Equilateral";
    }
    else if(x==y || y==z|| x==z){
        cout<<"Isosceles";
    }
    else {
        cout<<"Scalene";
    }

    return 0;
    
}
