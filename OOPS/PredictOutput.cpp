#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
    class Student{
public:
const int rollnumber;
int age;
Student (int r,int a):rollnumber(r),age(a){};//initialisaton list you can assign values to const later by initailsing list.

    };
int main(){
   Student s1(100,23);
   cout<<s1.rollnumber<<" "<<s1.age<<endl;

    
}