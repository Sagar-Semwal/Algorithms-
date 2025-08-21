#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
    class Bike{
        public:
        int tyresize;
        int enginesize;
       
        Bike(int ts,int es):tyresize(ts),enginesize(es){}
        Bike(int ts):tyresize(ts),enginesize(100){}
        Bike():tyresize(12),enginesize(60){}
    };
int main(){
    Bike honda(50,100); 
    Bike tvs(40,100);
    
    
    
}