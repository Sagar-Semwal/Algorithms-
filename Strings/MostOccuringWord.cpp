#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

int main(){
    string str="a a a is is";
    stringstream ss(str);
    string temp;
vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }

    sort(v.begin(),v.end());

    int maxCount=1;
    int count=1;
    for(int i=1;i<v.size();i++){
       
       if(v[i-1]==v[i]) {
        count++;
       }
       else count=1;
        maxCount=max(count,maxCount);

        }

count=1;
         for(int i=1;i<v.size();i++){
       
       if(v[i-1]==v[i]) {
        count++;
       }
       else count=1;
        if(count==maxCount) {
            cout<<v[i]<<" "<<maxCount<<endl;
        }

        }
 

 
        
    }

