#include<iostream>
#include<algorithm>
#include<string>


using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0;
    int n=s.size();
    
    for(int i=0;i<n;i++){
        if(n==1) break;
        if(n==2) {
            if(s[i]!=s[i+1]) {
                count++;
                break;
            }
        }
        if(i==0){
            if(s[i+1]!=s[i]) count++;
        }
        else if(i==n-1){
            if(s[i-1]!=s[i]) count++;
        }
    else if(s[i-1]!=s[i] && s[i+1]!=s[i]) count++;
   
    }

    cout<<count;

}