#include<bits/stdc++.h>
using namespace std;
int main(){

    int num;
    //first time i = 1, i<=2 is true., so we go in
    //second time, i = 2, 2<=2, is true, so we go in again
    //third time, i = 3, false, goes out

    //initializer, break(valid break statement), increment/decrement
    for(int i = 1; i <= 2;i = i+1){
        cin>>num;
        cout<<num<<endl;
    }
    //Print numbers from 1 to 10.
    for(int i = 1;i<= 10;i++){
        cout<<i<<endl;
    }
    //Print numbers from 10 to 1.
    for(int i = 10;i>=1;i--){
        cout << i <<endl;
    }
    //Print even numbers from 10 to 1.
    for(int i = 10;i>=1;i = i-2){
        cout << i <<endl;
    }
    //Print all the multiples of 5.
    for(int i = 5;i<=100;i=i+5){
        cout<<i<<endl;
    }
    return 0;
}