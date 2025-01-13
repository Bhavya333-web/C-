#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int total = 0;
        for(int i=0;i<n;i++){
            total += a[i];
        }
            int dis =0;
        for(int i=0;i<n;i++){
            if(a[i]<=y){
                dis += 0;
            }
            else{
                dis += (a[i] -y);
            }
        }
        dis += x;
        if(total>dis){
            cout<<"coupon"<<endl;
        }
        else{
            cout<<"no coupon"<<endl;
    }
}
}
