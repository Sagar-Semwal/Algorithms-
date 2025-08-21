#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class A{
private:         
    int a_ka_private;

public:           
    int a_ka_public;
};
class B: virtual public A{   
    public:         
    int b_ka_public;
   
};
class C:virtual public A{          
public:
    int c_ka_public;
    
    
};
class D:public B,public C{
public:
int d_ka_public;
void show(){
//     cout<<B::a_ka_public<<endl;    YA to me scope resolution opersator ka istemal krlu 
cout<<a_ka_public<<endl;
 }
};
int main(){
 D d;
 d.a_ka_public=10;
 d.show();
}