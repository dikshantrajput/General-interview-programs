#include<iostream>
#include<cstdio>

using namespace std; 

int main(){

    int n1 = 0, n2 = 1, sum = 0;
    
    int x;
    cin>>x;

    cout<<n1<<" "<<n2<<" ";
    
    for(int i=2;i<x;i++){

        sum = n1 + n2;
        
        cout<<sum<<" ";

        n1 = n2;
        n2 = sum;
    }
    
    return 0;
}