#include<iostream>
using namespace std;
int main(){

    //  int a=10;
    //  cout<<((++a)*(a++));
    // static int A;
    // cout<<A;
    // long a=10;
    // cout<< sizeof(a);
    // char a='1';
    // char b=1;
    // char c='A';
    // char d=65;
    // cout<<a<<b<<c<<d;
    // int num=10;
    // float num1=5.5;
    // float result= num+num1;
    // cout<<result<<endl;


/* Switch Case code*/
    int a,b;
    cout<<"enter two operands";
    cin>>a>>b;
    int ch;
    cout<<"enter the operation";
    cin>>ch;

    switch (ch)
    {
    case 1:
        cout<<a+b<<endl;
        break;
    case 2:
        cout<<a*b;
        break;
    default:
        cout<<"Invalid Operation";
       
    }

     return 0;
}