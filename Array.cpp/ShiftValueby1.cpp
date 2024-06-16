#include<iostream>
using namespace std;
void Val_Shift_1(int arr[],int n){
    for(int i=0; i<n; i++){
        if(i==n-1){
            arr[0]=arr[n-1];

        }
        else{
            arr[i+1]=arr[i];
        }
    }

}
int main(){
    int arr[]={10,20,30,40,50,60};
    int n=6;
    Val_Shift_1(arr,n);
    // Printing an array 
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

     
     return 0;
}