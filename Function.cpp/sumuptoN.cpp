#include<iostream>
using namespace std;
// void sumtoN(int n){
//     int sum=0;
//     for(int i=0; i<=n; i++){
//         sum=sum+i;
        
//     }
//     cout<<"The sum upto given number is "<<sum<<endl;
// }
// Even sum 1st way;
// void sumEventoN(int n){
//     int sum=0;
//     for (int i=2; i<=n; i=i+2){
//         sum=sum+i;

//     }
//     cout<<"Even sum"<<sum<<endl;
// }
//  Even sum 2nd way but bad practice;
void sumEventoN(int n){
    int sum=0;
    for (int i=1; i<=n; i=i++){
        if(i%2==0){
        sum=sum+i;}

    }
    cout<<"Even sum"<<sum<<endl;
}
int main(){
    sumEventoN(10);

     
     return 0;
}