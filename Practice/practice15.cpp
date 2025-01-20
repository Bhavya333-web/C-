#include <iostream>
using namespace std;

void list_generator(int limit) {
    for(int i=1;i<=limit;i++){
        if(i==limit){
        cout<<i<<endl;
    }
    else if(i<limit){
        cout<<i<<" ";
    }
}
}
int main() {
    int A, B;
    cin >> A >> B;

    list_generator(A);
    list_generator(B);
    return 0;
}
