#include<iostream>
using namespace std;
// void sum3(int a, int b, int c){
//     int sum=a+b+c;
//     cout<<"Printing sum of 3 numbers:";
//     cout<<sum;

// // }
// int main(){

//     // sum3(2,4,6);

//      return 0;
// }

int sum3(int a, int b, int c){
    int ans=a+b+c;
    return ans;
}
 
int main(){
    int sum= sum3(3,4,5);
    cout<<"sum is :"<<sum;
}