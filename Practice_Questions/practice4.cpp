#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"write anything"<<endl;
    getline(cin,s);
    int digitcount = 0 ;
    for(int i=0; i<s.length(); i++){
    int d =s[i];
    if( d=='0'||d=='1'||  d=='2'||  d=='3' || d=='4'|| d=='5'|| d=='6' || d=='7' ||  d=='8' || d=='9' ){
        digitcount++;

    }
    }
    cout<<"no. of digites"<<digitcount<<endl;


}