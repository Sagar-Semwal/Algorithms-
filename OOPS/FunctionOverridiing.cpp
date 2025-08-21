#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class Vehicle{
    public:
    int tyresize;
    string name;
    int lights;
    public:       
    void show(){
        cout<<"mai to bhyi vehicle ka show hu\n";
    }    
    
};
class Bike:  public Vehicle{   
    public:         
    int handlesize;
    void show(){
        cout<<"mai to pr bike ka show hu\n";
    }
   
};

int main(){
//     A a;
//     a.show();
//  B b;
//  b.show();
//  b.A::show();  // b ke liye a ka show gayab nhi hua h we can also print that through scope resoltuon operator 
Vehicle*a;
Bike b;
a=&b;
a->name="sagar";   // a ye store krrra h bike type ka address par ye h abhu bhi Vehicle type ka isliye hum bike type ke data members access nhi krkskte through a
a->show();   // parent kio call lgega 
}