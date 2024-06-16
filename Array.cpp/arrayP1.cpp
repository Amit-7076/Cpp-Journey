#include<iostream>
using namespace std;
int main(){

    //  int arr[10];
    //  for (int i=0; i<10; i++){
    //     cout<<"Provide value of array for index "<<i<<" ";
    //     cin>>arr[i];
    //     cout<<endl;

    //  }
    //  cout<<"Printing array as it is: ";
    //  for (int i=0; i<5; i++){
    //     cout<<arr[i]<<",";
    //  }

    //  cout<<endl<<"Printing value of array by doubling it: ";  /*we are doubling the input array and not doubling the values of array*/
    //  for(int i=0; i<5; i++){
    //     cout<<2*arr[i]<<",";
    //  }




    int arr[10];
    cout<<"taking input: ";
    for (int i=0; i<10; i++){
        cin>>arr[i];
    }
    cout<<"Printing before doubling : ";
    for (int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }

    // Doubling the array
    for (int i=0; i<10; i++){
        arr[i]=2*arr[i];
    }

    cout<<"Printing after doubling : ";
    for (int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }

     return 0;
}