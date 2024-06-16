#include<iostream>
using namespace std;
int first_occur(int arr[], int n, int target){
    int start=0;
    int end=n-1;
    int mid= (start+mid)/2;

    while(start<=end){
        if(target<=arr[mid]){
            end = mid-1;
        }

        else if(target>mid) {
            start=mid+1;
        }

        mid = (start+end)/2;
    }

    return mid;
}
int main(){
    int arr[]={10,20,30,30,30,40,40};
    int n=7;
    int target=30;
    int AnsOccur= first_occur(arr,n,target);
    cout<<"The index of first occurence is:" << AnsOccur;



     
     return 0;
}