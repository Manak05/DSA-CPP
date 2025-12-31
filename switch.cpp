#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout << "enter two numbers:";
    cin >> a >> b;
    cout << "enter operator:";  
    cin >> op;
    switch(op){
        case '+' : cout<< (a+b) ;
        break;
        case '-' : cout<< (a - b) ;
        break;
        case '*' : cout<< (a * b) ;
        break;
        case '/' : cout<< (a / b) ;
        break;
        default : cout<<"invalid input";
    }
    return 0;
    
}