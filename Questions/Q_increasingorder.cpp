#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d[n];
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        bool increasing = true;
        for(int i=1;i<n;i++){
            if(d[i]<d[i -1]){
                increasing= false;
                break;
                
            }
        
        }
        if(increasing== false)
{
    cout<<"no"<<endl;
}        else{
    cout<<"yes"<<endl;// your code goes here
    
}
}

}
