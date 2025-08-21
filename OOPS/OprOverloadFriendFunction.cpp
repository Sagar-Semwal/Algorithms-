#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
    class ComplexNumbers{
        private:
        int priv;
public:
int imaginary;
int real;
ComplexNumbers operator -(ComplexNumbers &c1){
    ComplexNumbers c3;                          
    c3.real=c1.real-this->real;     //operator overloading 
     c3.imaginary=c1.imaginary-this->imaginary;
     return c3;
}

//friend function 
friend ComplexNumbers operator +(ComplexNumbers &c1,ComplexNumbers &c2);
//friend class
friend class prime;
    };
    ComplexNumbers operator +(ComplexNumbers &c1,ComplexNumbers &c2){
        ComplexNumbers c4;                          
    c4.real=c1.real+c2.real;     //operator overloading 
     c4.imaginary=c1.imaginary+c2.imaginary;
     return c4;
    }
    class prime{
void show(ComplexNumbers &c){  //friend class can also have access to all variables 
    c.priv=10;
}
    };

int main(){
    ComplexNumbers a1,a2;
    a1.imaginary=10;
    a1.real=23;
      a2.imaginary=100;
    a2.real=12;
    ComplexNumbers a3=a1-a2;
    cout<<"real part:"<<a3.real<<" "<<" imaginary :"<<a3.imaginary<<endl;
    ComplexNumbers a4=a1+a2;
    cout<<"real part:"<<a4.real<<" "<<" imaginary :"<<a4.imaginary<<endl;
    


    
}