//Triangle of numbers
// if n=5
//  pattern =       1
//                 232
//                34543
//               4567654
//              567898765     
#include<iostream>
using namespace std;
int main(){
    int n,y=0,z=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<y+k;
        }
        y=y+1;
        for(int l=1; l<i; l++){
            cout<<z-l+1;
        }
        cout<< endl;
        z=z+2;
    }
}
   