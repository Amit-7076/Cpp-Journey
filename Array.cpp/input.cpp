#include<iostream>
using namespace std;
int main(){

// taking input
     int arr[5];
     for (int i=0; i<5; i++){
     cout<<  "Enter value of array for index :"<<i<<" ";
     cin>>arr[i];
     cout<<endl;
         }
    
    // printing array 
    cout<<"The array that has been taken in input is: ";
    for (int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }


     return 0;
}