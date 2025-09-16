#include<iostream>
#include<algorithm>
#include<string>


using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int n=s.length();
    int maxCount=0;

    for(int i=0;i<n;i++){
        char ch=s[i];
        int count=1;
        for(int j=i+1;j<n;j++){
            if(ch==s[j]){
                count++;
                maxCount=max(count,maxCount);
            }
        }
    }


    for(int i=0;i<n;i++){
        char ch=s[i];
        int count=1;
        for(int j=i+1;j<n;j++){
            if(ch==s[j]){
                count++;
                maxCount=max(count,maxCount);
            }
            
        }
        if(count==maxCount){
            cout<<ch<<" "<<maxCount<<endl;
            }
          
    }
    cout<<maxCount;
}