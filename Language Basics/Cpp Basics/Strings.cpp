#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "tufplus";
    cout<<str[6]<<endl;
    //Underneath string we have a character array of size 8.
    

    //if you want to print the size of the string.
    cout<<str.size()<<endl;


    int length = str.size();
    for(int i =0;i<=length-1;i++){
        cout<<str[i];
    }
    return 0;
}