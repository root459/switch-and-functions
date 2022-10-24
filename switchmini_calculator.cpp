#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter the valuesof a and b";
    cin>>a>>b;
    cout<<"enter + for additoin - for subtraction * for multiplication / for divide";
    cin>>op;
    switch(op){
        case '+':cout<<a+b;
        break;
        case '-':cout<<a-b;
        break;
        case '*':cout<<a*b;
        break;
        case '/':cout<<a/b;
        break;
        case '%':cout<<a%b;
        break;
        default:cout<<"enter the valid operation";
    }
}