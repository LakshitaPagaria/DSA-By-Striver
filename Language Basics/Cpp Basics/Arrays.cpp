#include <bits/stdc++.h>
using namespace std;
int main(){
    //Accessing memory location
    int num = 5;
    cout<<&num<<endl;

    //Creating an array 
    //Declaration
    //int num[5]; //There are 5 contiguous memory locations, every memory location can store an integer.
    
    int number[5] = {5,2,1,3,7};
    cout<<number[0]<<endl;//The first memory location could easily be accessed by number[0]. It starts a numbering from 0. Thereby, it is called as 0-based indexing. 
    //Printing all the numbers of an array using loop.
    for(int i=0;i<5;i++){
        cout<<number[i]<<endl;
    }

    //Taking input in an array.
    int arr[5];
    for(int j = 0;j<=4;j++){
        cin>>arr[j];
        cout<<arr[j]<<endl;
    }
    cout<<arr[5-1];
    return 0;
}