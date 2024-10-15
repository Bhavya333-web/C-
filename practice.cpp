#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n>=1 && n<=9){
    string numbers[] = {"one","two","three","four","five","six","seven","eight","nine"};
    cout << numbers[n-1] <<endl;
    }
    else{
    cout<< "Greater than 9" <<endl;
    
    }
    return 0;
}
    
