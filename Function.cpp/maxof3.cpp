#include<iostream>
using namespace std;
// void maxof3(int a, int b, int c){
//     if (a>b && a>c)
//     cout<<"The greatest number is :"<<a;
//     else if(b>a && b>c)
//     cout<<" The greated number is :"<<b;
//     else
//     cout<<"The greates number is:"<<c;
// }

// By using max function of cpp;
void maxof3(int a, int b, int c){
    int ans1=max(a,b);
    int fans=max(ans1,c);
    cout<<"The greatest among 3 is:"<<fans;

}

int main(){

     maxof3(5,6,7);
     return 0;
}