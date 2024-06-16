#include<iostream>
using namespace std;
int main(){
 int n,num;
   cout<<"enter value";
   cin>>n;
   num=n/2;
   /*for diomond pattern*/

   for(int row=0; row<num; row=row+1){
      /* for upper full pyramid*/

      for(int col=0; col<num-row-1; col=col+1){
         cout<<" ";
         }

      for(int col=0; col<row+1; col=col+1){
            cout<<"* ";
      }
      cout<<endl;
   }
      
      /*for lower full pyramid*/
   for(int row=0; row<num; row=row+1){
       for(int col=0; col<row; col=col+1){
      cout<<" ";
   }
      for(int col=0; col<num-row; col=col+1){
      cout<<"* ";
   }
   cout<<endl;
   }

  /*for full inverted pyramid*/

//   for (int row=0; row<n; row=row+1){
//    /*spaces*/
//    for(int col=0; col<row; col=col+1){
//       cout<<" ";
//    }
//    /*for starts*/
//    for(int col=0; col<n-row; col=col+1){
//       cout<<"* ";
//    }
//    cout<<endl;
//   }

  /*for full pyramid*/
   // for(int row=0; row<n; row=row+1){
   //    for(int i=0; i<n-row-1; i=i+1){
   //       cout<<" ";
   //       }

   //    for(int i=0; i<row+1; i=i+1){
   //          cout<<"* ";
   //    }
   //    cout<<endl;
   // }


    
     return 0;
}