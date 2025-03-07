#include<iostream>
using namespace std;

int square(int a){
  int b=a*a;
  return b;
}
int main(){
  int a;
  cout << "enter a number ";
  cin>> a ;
  int result= square(a);
  cout<< "the square "<< result<< endl;
    return 0;
}