#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    int ans=0;
    int i=0;
    while(n!=0){
        int bin=n&1;
        ans=ans+(bin*pow(10,i));
        n=n>>1;
        i++;
    }

    cout << "Binary representation: " << ans << endl;

    return 0;
}