#include<iostream>
using namespace std;
int main(){
/*2nd way of printing hollow cylinder*/
   /*for outer loop */ 
     for(int row=0; row<5; row=row+1){
   /*for inner loop*/   
        for(int col=0; col<5; col=col+1){
            if (row==0||row==4){
                cout<<"* ";
            }
            else{
                if(col==0||col==4){
                  cout<<"*" ; 
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }


    //   /*first way of printing*/
    //   for(int i=0; i<5; i=i+1){
    //     if(i==0 || i==4){
    //         cout<<"* * * * *";
    //         }
    //     else {cout<<"*       *";
    //     }
    //     cout<<endl;
    //   }
return 0;
}
