#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    vector<int>v;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>x(v.size());
    //     int h=v.size()-1;


    // for(int i=0;i<v.size();i++){
    //   x[h]=v[i];
    //   h--;
    // }
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    //  for(int i=0;i<x.size();i++){
    //     cout<<x[i]<<" ";
    // }

    for(int i=0;i<v.size();i++){
        int j=v.size()-1-i;
        x[i]=v[j];
    }
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
cout<<endl;
     for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
     }
}