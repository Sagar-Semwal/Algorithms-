//abstract class 
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class Vehicle{
    public:
    int tyresize;
    int enginesize;
    public:   
    virtual void calculatemileage()=0;
    virtual void refuel()=0;    
        
     
    
};
class Bike:  public Vehicle{   
    public:         
    int handlesize;
    void calculatemileage(){
        cout<<"mileage calculated\n";
    }
    void refuel(){
        cout<<"refueling done\n";
    }
    
   
};

int main(){
  Bike b;
  b.calculatemileage();
  b.refuel();


  
}