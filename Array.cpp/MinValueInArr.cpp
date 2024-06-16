#include<iostream>
#include<limits.h>
using namespace std;

void MinVal(int arr[],int size){
    int Min_Ans= INT_MAX;
    for(int i=0; i<size; i++){
       // if(arr[i]<Min_Ans){
         //   Min_Ans =arr[i];
         Min_Ans=min(arr[i],INT_MAX);
        // }
    }
    cout<<"The min value of array is: "<<Min_Ans<< endl;
}

int main(){
    int arr[]={20,10,23,32,7,5};
    int size=6;
    MinVal(arr,size);

    return 0;
}