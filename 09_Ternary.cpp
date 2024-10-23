#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int N,X,Y;
	    cin >>N>>X>>Y;
	    string result = (X*Y>=N) ? "Yes" : "NO";
	    cout<<result<<endl;
	}

}
