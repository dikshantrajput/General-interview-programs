#include<iostream>
#include<cstdio>

using namespace std; 

bool isPalindrome(int n){
    int temp = n, sum = 0, r;

    while(n > 0){
        r = n % 10;
        sum = (sum*10) + r;
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

    cout<<isPalindrome(x)<<endl;

    return 0;
}