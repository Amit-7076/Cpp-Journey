#include<iostream>
using namespace std;
int main(){

     int n;
     cin>>n;
     /*for outer loop*/
     for(int row=0; row<n; row=row+1){
        /*for stars only*/
        for(int i=0; i<row+1; i=i+1){
            cout<<"* ";
        }
        /*for spaces only and is optional to print in this question*/
        for(int j=0; j<n-row-1; j=j+1){
            cout<<" ";
        }
        cout<<endl;

     }
     return 0;
}