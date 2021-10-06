#include<iostream>
#include<cstdio>

using namespace std; 

int main(){

    int x;
    cin>>x;

    int r, reverse = 0;

    while(x > 0){
        r = x % 10;
        reverse = (reverse * 10) + r;
        x = x / 10;
    }

    cout<<reverse;

    return 0;
}