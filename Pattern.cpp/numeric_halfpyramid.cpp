#include<iostream>
using namespace std;
int main(){

     int n;
     cin>>n;
     cout<<endl;
     /*for inverted half pyramid*/
     for (int row=0; row<n; row=row+1){
        for(int col=0; col<n-row; col=col+1){
            cout<<col+1 <<" ";
        }
        cout<<endl;}



     /*for half pyramid*/
    //  for(int row=0; row<n; row=row+1){
    //     for(int col=0; col<row+1; col=col+1){
    //         cout<<col+1;
    //     }
    //     cout<<endl;

    //  }
     return 0;
}