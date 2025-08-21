#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
    
    class Student{
public:
string name;
int rno;
float marks;
Student (string name,int rno,float marks){
    this->name=name;
    this->marks=marks;
    this->rno=rno;
}
    };
    // void change(Student *s){
    //     s->name="yashikaaaaaaaaa";
    // }
    void change(Student *y){
        y->name="tashi";
    }
    
int main(){
//    Student s("sagar",61,92.8);
//    Student *ptr=&s;
//    cout<<s.name<<endl;
//    (*ptr).name="ritesh";     //accessing values through pointer
//    cout<<s.name<<endl;


// Student s("Yashika",31,78.0);
// Student *ptr=&s;
// cout<<"name before changing: "<<s.name<<endl;   //another way 
// change(&s);
// cout<<"name after changing: "<<s.name<<endl;

Student *s=new Student("yashi",34,78.7);
cout<<s->name<<endl;
change (s);
cout<<s->name<<endl;




   }