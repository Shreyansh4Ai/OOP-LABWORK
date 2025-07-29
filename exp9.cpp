#include<iostream>
using namespace std ;

class Addnums{
 private:
    int a , b ;


   public:

    Addnums(int x , int y){
        a = x ;
        b = y ;

    }

    friend int add(Addnums obj) ;


};

int add(Addnums obj){

    return obj.a + obj.b ;
}

int main(){

    Addnums obj1(5,7);

    int result = add(obj1);

  cout <<"sum of private members :"<< result << endl;

}