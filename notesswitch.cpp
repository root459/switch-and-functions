#include<iostream>
using namespace std;
int main(){
    int val;
    cout<<"enter the value";
    cin>>val;
    switch(1){
        case 1:
               cout<<"the number of notes of 100 are"<<val/100<<endl;
               val=val%100;
             
        case 2:
               cout<<"the number of notes of 10 will be"<<val/10<<endl;
               val=val%10;
        case 3:cout<<"the number of notes of 1 will be "<<val<<endl;
        }
    
}
