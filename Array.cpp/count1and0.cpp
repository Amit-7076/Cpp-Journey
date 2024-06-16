#include<iostream>
using namespace std;
void CountZeroOne(int arr[], int size){
    int Zerocount = 0;
    int Onecount = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==0){
            Zerocount++;
        }
        else if(arr[i]==1){
           Onecount++;
        }
    }
    cout<<"The number of zero in array is:"<< Zerocount <<endl;        
    cout<<"The number of one  in array is:"<< Onecount <<endl;        

}
int main(){
    int arr[]= {1,0,1,0,1,1,0,1,0,0,1,1,0,0,0,1,1};
    int size=17;
    CountZeroOne(arr,size);

     
     return 0;
}