//understanding static variables by functions 

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<string>
// using namespace std;
// void print(){
//     int b=10;       everytime a new b is formed in the memory
//     static int b=10;        only b is formed once in the memory   
//     cout<<b<<endl;
//     b++;
// }
    
// int main(){
//     print();
//     print();
//     print();
    
// }
//understanding static variables by class
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
    class Bike{
        public:
        static int noOfBikes;//now this belongs to class .it will be made only once for all objects
        int tyresize;
        int enginesize;
       
        Bike(int tyresize,int enginesize ){
           this->enginesize=enginesize;
           this->tyresize=tyresize;
        }
        static void increase(){   //static funcvtion .by static function we can only acceess static variables 
            noOfBikes++;
        }
    };
    int Bike::noOfBikes=10;
int main(){
    Bike honda(50,100); 
    Bike tvs(40,100);
    honda.increase();
    cout<<honda.noOfBikes<<endl;
    cout<<tvs.noOfBikes<<endl;
    tvs.increase();
    cout<<honda.noOfBikes<<endl;
    cout<<tvs.noOfBikes<<endl;
    Bike::increase(); //call by function.we can also call static functions by the class name .
    
    cout<<honda.noOfBikes<<endl;
    cout<<tvs.noOfBikes<<endl;
   


    
}