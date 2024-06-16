#include<iostream>
using namespace std;
void Extreme_Print(int arr[],int size){
    for(int left=0,right=size-1;left<=right;left++,right--){
        if(left==right){
            cout<<arr[left]<<" ";}
        else {
            cout<<arr[left] << " ";
            cout<<arr[right]<< " ";
        }
        
    }
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size=7;
    cout<<"Printing the extremes of array: ";
    Extreme_Print(arr,size);

     
     return 0;
}