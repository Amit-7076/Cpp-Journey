#include<iostream>
using namespace std;
void Reverse_Array(int arr[], int size){
    // using while loop
    // int left=0;
    // int right=size-1;
    // while(left<=right){
    //     swap(arr[left],arr[right]);
    //     left++;
    //     right--;}

    // Printing array using for Loop;
    for(int left=0,right=size-1; left<=right; left++,right--){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    
    // Printing an array after reversing
    cout<<"Printing an array after reversing: ";
    for(int i=0; i<size;i++){
        cout<<arr[i] <<" ";
    }

}
int main(){
    int arr[] ={10,20,30,40,50,60};
    int size=6;
    Reverse_Array(arr,size);

     
     return 0;
}