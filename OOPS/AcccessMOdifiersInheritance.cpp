#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class A{
private:          //cant be accesed and cant be inherited
    int a_ka_private;
protected:           //cant be accesed but can be inherited 
    int a_ka_protected;
public:           //both can be done 
    int a_ka_public;
};
class B:protected A{ //b ke pass a ka protected h + a ka public h but as protected       
    public:         //public A ka meanning h ki A k protectd or public  variables B k le public rhenge
    int b_ka_public;
   
};
class C:public B{          //c ke pass b ka public ,a ka protected and a ka public as protected 
public:
    int c_ka_public;
    
    
};
int main(){
    B b;
    b.b_ka_public=10;
    
   
    // b.a_ka_protected=2;       i cannot access this because first it was protected and then for b it becomes public and we cannot go from high securiy to low 
    
    
}