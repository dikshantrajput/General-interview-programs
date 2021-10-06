#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std; 

bool isArmstrong(int n){
    int r, temp = n, sum = 0;

    while(n > 0){
        r = n % 10;
        sum = sum + pow(r,3);
        n = n / 10;
    }

    if(temp == sum){
        return true;
    }

    return false;
}

int main(){

    int x;
    cin>>x;

    cout<<isArmstrong(x)<<endl;

    return 0;
}