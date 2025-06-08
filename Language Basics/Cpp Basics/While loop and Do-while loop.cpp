#include<bits/stdc++.h>
using namespace std;
int main(){
    //while loop
    //initializer
    //condition
    //operations
    //increment/decrement
    int i = 5;
    while(i <= 100){
        cout<< i <<endl;
        i = i+5;
    }

    //do-while loop -> First do the job and then have a check.
    int i = 60;
    do{
       cout<<i<<endl; 
       i = i + 5;
    } while(i<=100);


    return 0;
}