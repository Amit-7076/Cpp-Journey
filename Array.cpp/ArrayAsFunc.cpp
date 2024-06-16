#include<iostream>
using namespace std;
void Printarray(int arr[] , int size) {
    for(int i=0; i<size; i++) {
       cout<< arr[i]<<" ";
    }
    cout<<endl;
}

// true-> found 
// false-> not found
bool linearsearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            // target found
            return true;
        }
    }
    return false;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    // Printarray(arr,5);

    int target=1; 
    bool ans= linearsearch(arr,size,target);
    if (ans==1){
        cout<<"target found "<<endl;
    }
    else{ 
        cout<<"target not found"<<endl;
    }

     
     return 0;
}