//This is the same question but with no extra array.

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
    
for (int i = 0, j = v.size() - 1; i < j; i++, j--) {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}


    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }








}