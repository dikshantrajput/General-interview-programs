#include<iostream>
#include<cstdio>

using namespace std; 

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){

    int x;
    cin>>x;

    int y;
    cin>>y;

    //by value
    // int temp = x;
    // x = y;
    // y = temp;

    //by reference
    // swap(&x,&y);

    //without third variable 1
    // x = x + y;
    // y = x - y;
    // x = x - y;

    //without third variable 2
    x = x * y;
    y = x / y;
    x = x / y;
    
    cout<<x<<" "<<y;

    return 0;
}