#include<iostream>
using namespace std;

// BY BOOLEAN 
//  true-> for prime;
// false-> for not prime;

// bool checkPrime(int n){
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             return false;
//         }
//         return true;
//     }

// }

// BY OTHER DATA TYPE:
void checkprime(int n){
    for (int i=2; i<=n-1; i++){
        if (n%i==0){
            cout<<"not prime"; 
            break; }

        if(i==n-1){cout<<"Prime";}
    
    
        }

       
        
    }

int main(){
    // bool prime = checkPrime(7);
    // if(prime){
    //     cout<<"The number is prime";
    // }
    // else 
    // cout<<"Not prime";

    checkprime(22);

     
     return 0;
}