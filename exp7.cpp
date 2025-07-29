#include<iostream> 
using namespace std;

int main(){
    int num =0 ;
    int sum =0 ;

    do{
        sum +=num ;
        cout << "enter a number ";
        cin >> num;
    }while(num <=100);
    cout <<"the sum is "<<sum << endl;
    return 0 ;
}