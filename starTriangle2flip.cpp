#include<iostream>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"Enter the no. of lines : ";
    cin>>n;
    for ( i = 0; i < n; i++) {
        for (  j = 0;  j < n-i;  j++){
            cout<<" ";
        }
        for ( k = 0; k <= i; k++) {
              cout<<"*";
        }
        
        cout<<endl;
    }
    
}