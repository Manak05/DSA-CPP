//here are patterns from 15 to ..
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    //p15
    char D='D';
            for(int i=1;i<=n;i++){
                for(int j=1;j<=i;j++){
                    cout<<char(D-i+j);
                }
                cout<<endl;
            }

    return 0;
}