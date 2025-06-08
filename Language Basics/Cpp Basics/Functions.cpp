#include<bits/stdc++.h>
using namespace std;
// void print(){
//     cout << "I am a print function"<<endl;
// }
// int main(){
//     cout<<"Before print function call"<<endl;
//     print();
//     cout<<"After print function call"<<endl;
//     return 0;
// }

//Write a program that accepts 4 numbers, 
//and prints the summation of 2 numbers individually.
// void inputTwoNumberAndPrintAddOfThem(){
//     int num1,num2;
//     cin>>num1>>num2;
//     cout<<num1+num2 <<endl;
// }
// int main(){
//     inputTwoNumberAndPrintAddOfThem();
//     inputTwoNumberAndPrintAddOfThem();
//     return 0;
// }

//write a function that returns addition of two numbers.
int sumOfTwoNumbers(int num1, int num2){  //Parameterized Function
    int res = num1+num2;
    return res;
}
int main(){
    int result = sumOfTwoNumbers(3,4);
    cout<<result<<endl;
    return 0;
}