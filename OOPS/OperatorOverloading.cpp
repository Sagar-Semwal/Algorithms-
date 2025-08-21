#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
    class ComplexNumbers{
public:
int imaginary;
int real;
ComplexNumbers operator +(ComplexNumbers &c1){
    ComplexNumbers c3;                          
    c3.real=c1.real+this->real;     //operator overloading 
     c3.imaginary=c1.imaginary+this->imaginary;
     return c3;
}
    };
int main(){
    ComplexNumbers a1,a2;
    a1.imaginary=10;
    a1.real=23;
      a2.imaginary=100;
    a2.real=12;
    ComplexNumbers a3=a1+a2;

    // ComplexNumbers a3;                         //this is one way of adding numbers 
    // a3.real=a1.real+a2.real;
    // a3.imaginary=a1.imaginary+a2.imaginary;
    cout<<"real part:"<<a3.real<<" "<<" imaginary :"<<a3.imaginary<<endl;


    
}