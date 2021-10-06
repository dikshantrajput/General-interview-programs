#include<iostream>
#include<cstdio>

using namespace std; 

int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main(){

    int n1 = 0, n2 = 1, sum = 0;

    int x;
    cin>>x;

    for(int i=0;i<x;i++){

        cout<<fib(i)<<" ";

    }

    return 0;
}