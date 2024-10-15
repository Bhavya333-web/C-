#include <iostream>
using namespace std;

int main() {
	string student1;
	string student2;
	cin>>student1>>student2;
	int x;
	int y;
	
	cin>>x>>y;
	if(x>y){
	    cout<<student1;
	}
	else if(y>x){
	    cout<<student2;
	}
else if(y==x){
    cout<<"equal";
}
}
