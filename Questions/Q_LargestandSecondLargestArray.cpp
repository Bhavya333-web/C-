#include<iostream>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int maxno = INT_MIN;
        int secno = INT_MIN;
        for(int i=0;i<n;i++){
            if(a[i]>maxno){
                secno = maxno;
                maxno = a[i];
            }
            else if(a[i]>secno && a[i]!=maxno){
                secno = a[i];
            }
        }
        cout<<maxno+secno<<endl;

            }
}
