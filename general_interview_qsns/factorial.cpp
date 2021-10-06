#include<iostream>
#include<cstdio>

using namespace std; 

//recursive function
int fact(int n){
    if(n == 1){
        return 1;
    }
    return n * fact(n-1);
}

int main(){

    int x;
    cin>>x;

    int fact = 1;

    for(int i=x;i>0;i--){
        fact = fact * i;
    }

    cout<<fact;

    //recursive call
    // cout<<fact(x);
    
    return 0;
}