#include<iostream>
#include<cstdio>

using namespace std; 

int main(){

    int x;
    cin>>x;

    int r, sum = 0;

    while(x > 0){
        r = x % 10;
        sum = sum + r;
        x = x / 10;
    }

    cout<<sum;

    return 0;
}