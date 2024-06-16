#include<iostream>
using namespace std;
int main(){

     int arr[5]={2,10,23,45,4};
     int a;
     cout<<"enter a target value";
     cin>>a;
     bool flag=0;  /*Linear search using flag concept */
    //  0-> target  not found 
    // 1-> target found 
     for (int i=0; i<5; i++){
        if (arr[i]==a)
       { flag=1;
        break;}
     }

     if (flag==1){
        cout<<"target found"<<endl;
     }
     else{
        cout<<"target not found"<<endl;
     }
     return 0;
}