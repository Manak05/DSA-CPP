#include<iostream>
using namespace std;    

int main(){
    int amount,rs100,rs50,rs20,rs10;
    cout<<"enter the amount in rupees:";
    cin>>amount;
    
    switch(1){
        case 1:rs100=amount/100;
               amount%=100;
               cout<<"rs100 notes="<<rs100<<endl;
        case 2:rs50=amount/50;
               amount%=50;
               cout<<"rs50 notes="<<rs50<<endl;
        case 3:rs20=amount/20;
               amount%=20;
               cout<<"rs20 notes="<<rs20<<endl;
        case 4:rs10=amount/10;
                amount%=10;
                cout<<"rs10 notes="<<rs10<<endl;
    }
    return 0;
}