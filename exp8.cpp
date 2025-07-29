#include<iostream>
using namespace std ;


class countobjs{
public:
  static int count ;


   countobjs(){
    count++;
    cout <<"object "<< count << "created " <<endl;

   }
 


};

int countobjs :: count = 0;


int main(){
    countobjs obj1 ;
    countobjs obj2 ;
    countobjs obj3 ;

    cout << "total count =" << countobjs::count << endl;
}