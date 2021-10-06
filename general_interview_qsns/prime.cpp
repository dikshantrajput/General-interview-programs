#include<iostream>
#include<cstdio>

using namespace std; 

bool isPrime(int n){
    int flag = 0;

    for(int i=1;i<n;i++){
        if(n % i == 0){
            flag++;
        }
    }

    if(flag == 1){
        return true;
    }

    return false;
}

int main(){

    int x;
    cin>>x;

    for(int i=0;i<x;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    
    return 0;
}