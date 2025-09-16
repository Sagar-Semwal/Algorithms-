#include<iostream>
#include<algorithm>
#include<string>


using namespace std;

int main(){
    string s,t;
    cout<<"ENter the first string: ";
    cin>>s;
    cout<<"Enter the second string: ";
    cin>>t;

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t) cout<<"True";
    else cout<<"False";
}