#include<iostream>
using namespace std;
int main(){

     int am[5]={2,4,5,7,8};  /*initialization of array*/

// simple way of accessing the ARRAY
    //  cout<<am[0]<<endl;
    //  cout<<am[1]<<endl;
    //  cout<<am[2]<<endl;
    //  cout<<am[3]<<endl;
    //  cout<<am[4]<<endl;

// accessing of array using loop 

int n=5;
for(int i=0; i<5; i++){
    cout<<am[i]<<endl;
}


     return 0;
}