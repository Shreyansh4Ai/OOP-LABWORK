#include<iostream>
using namespace std;
int greatest(int arr[], int n){
    int max=INT_MIN;
   for(int i=0; i<n ; i++){
    if(arr[i]>max){
        max=arr[i];
    }
    
   }
   return  max;
}
int main(){
    int n;  //size
    cout<< " enter the size of array";
    cin>> n;
    int arr[n];
    for(int i=0;i<n ;i++){
        cin>> arr[i];
    }
     int result=greatest(arr , n);
   cout<<"the greatest number is "<< result << endl;
    
    return 0;
}