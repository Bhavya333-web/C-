#include <bits/stdc++.h>
using namespace std;
int main() {
	int n ,x;
	cin>>n>>x;
	int array[n];
	for(int i=0;i<n;i++){
	    cin>>array[i];
	}
	bool found = false;
	for(int i=0;i<n;i++){
	    if(array[i]==x){
	        
	        found=true;
break;
}
	    }
	    if(found){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	
}
