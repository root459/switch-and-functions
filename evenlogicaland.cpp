#include<iostream>
using namespace std;

bool isEven(int a){
    if(a&1){
        return 0;//logical and is used here.visit website to revise;
                 //https://www.freecodecamp.org/news/cpp-operator-examples/
    }
    return 1;
}
int main(){
    int num;
    cin>>num;
    if(isEven(num)){
        cout<<"number is even";
        
    }
    else 
    cout<<"no is odd";
}