#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
    class Student{
public:
int rollnumber;
int age;
    };
int main(){
   Student s1;//at this time it has no values so it copy garbage values in the s2.
   Student s2=s1;//deep copy
   
   s1.rollnumber=101;
   s1.age=20;
   cout<<s2.age<<" "<<s2.age<<endl;
   }