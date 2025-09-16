#include<iostream>
#include<algorithm>
#include<string>
#include<vector>


using namespace std;
int main(){
    string s;
cout<<"Enter the string: ";
cin>>s;
vector<int>v(26,0);
int n=s.length();
for(int i=0;i<n;i++){
    char ch=s[i];
   int index=(int)ch-97;
   v[index]++;
}
int max=0;
for(int i=0;i<26;i++){
if(v[i]>max){
    max=v[i];
}
}

for(int i=0;i<26;i++){
if(v[i]==max){
    cout<<char(i+97)<<" "<<max<<endl;
}
}


}