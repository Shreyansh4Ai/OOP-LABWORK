//Wap using class and object to print biodata of students

#include<iostream>
using namespace std;

class biodata{
   public:
   string name;
   int rollno;
   double cgpa;


   biodata(string name ,int rno, double cgpa){
     name = name;
     rollno=rno;
     cgpa=cgpa;

   }
};
int main(){

    biodata s1("jhon ",58,9.6);
    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.cgpa<<" ";
    return 0;
}