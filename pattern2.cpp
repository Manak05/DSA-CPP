//here are patterns from 15 to ..
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    //p15
    // char D='D';
    //         for(int i=1;i<=n;i++){
    //             for(int j=1;j<=i;j++){
    //                 cout<<char(D-i+j);
    //             }
    //             cout<<endl;
    //         }

//p16
    
    // for(int i=1;i<=n;i++){
    //     for(int k=1;k<=n-i;k++){
    //          cout<<" ";
    //     }
    //         for(int j=1;j<=i;j++){
    //          cout<<"*";
    //         }
        
    //     cout<<endl;
    // }

    //p17
    // for(int i=n;i>=1;i--){
    //         for(int j=1;j<=i;j++){
    //          cout<<"*";
    //         }
        
    //     cout<<endl;
    // }   

//p18
    // for(int i=n;i>=1;i--){
    //     for(int k=0;k<=n-i;k++){
    //          cout<<" ";
    //     }
    //         for(int j=1;j<=i;j++){
    //          cout<<"*";
    //         }
        
    //     cout<<endl;
    // }
 
//p19
// int l=1;
// for(int i=n;i>=1;i--){
//     for(int k=1;k<=n-i;k++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<l;
//     }
//     l++;
//     cout<<endl;
// }

//p20
int l=1;
for(int i=1;i<=n;i++){
    for(int k=1;k<=n-i;k++){
        cout<<" ";
    }       
    for(int j=1;j<=i;j++){
        cout<<l;
    }
    l++;
    cout<<endl;
}

//p21
int l=1;
for(int i=)











    return 0;
}