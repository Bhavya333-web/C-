#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"write an word"<<endl;
    getline(cin,s);
    int vowelcount = 0 ;
    for(int i=0; i<s.length(); i++){
    char ch =s[i];
    if( ch=='a'||  ch=='e'||  ch=='i' || ch=='o'|| ch=='u'|| ch=='A' || ch=='E' ||  ch=='I' || ch=='O'|| ch=='U' ){
        vowelcount ++;
        

    }
    }
    cout<<"no. of vowels"<<vowelcount<<endl;


}