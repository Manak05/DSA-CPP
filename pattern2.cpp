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
// int l=1;
// for(int i=1;i<=n;i++){
//     for(int k=1;k<=n-i;k++){
//         cout<<" ";
//     }       
//     for(int j=1;j<=i;j++){
//         cout<<l;
//     }
//     l++;
//     cout<<endl;
// }

//p21
// int l=1;
// for(int i=1;i<=n;i++){
//         for(int k=1;k<=n-i;k++){
//             cout<<" ";
//         }
//     for(int j=1;j<=i;j++){
//         cout<<l;
//     }
//     l++;
//     cout<<endl;
// }

//p22
// 1234
//  234
//   34
//    4
// int l=1;
// for(int i=n;i>=1;i--){
//     for(int k=1;k<=n-i;k++){
//         cout<<" ";
//     }     
//     for(int j=1;j<=i;j++){
//         cout<<j+l-1;
//     }  
//     l++;
//     cout<<endl;
// }

//p23
//     1
//    23
//   456
// 78910   
// int g=1;
// for(int i=1;i<=n;i++){
//     for(int k=0;k<=n-i;k++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<g;
//         g++;
//     }
//     cout<<endl;
// }

//p24
//    1   
//   121  
//  12321
// 1234321
// for(int i=1;i<=n;i++){
//     for(int k=1;k<=n-i;k++){
//         cout<<" ";
//     }
//     for(int m=1;m<=i;m++){
//         cout<<m;
//     }
//     int j=i-1;
//     while(j){
//         cout<<j;
//         j--;
//     }
//     cout<<endl;
// }

      for (int i = 1; i <= n; i++) {

        // left numbers
        for (int j = 1; j <= n - i + 1; j++) {
            cout << j;
        }

        // stars
        for (int s = 1; s <= 2 * (i - 1); s++) {
            cout << "*";
        }

        // right numbers
        for (int j = n - i + 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }   










    return 0;
}