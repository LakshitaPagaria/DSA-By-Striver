#include<bits/stdc++.h>
using namespace std;
int main(){
    //If - else 
    //Given an age, print "adult" if age>=18, or print "teen".
    int age;
    cin >> age;
    if(age >= 18){
        cout<<"Adult";
    }
    else{
        cout<<"Teen";
    }

    //Given an integer age
    // if age >= 18, print "adult"
    // if age < 18 and age >= 10, print "teen"
    // if age < 10, print "child"
    if(age >= 18){
        cout<<"Adult";
    }
    else if(age < 18 and age >= 10){
        cout<<"Teen";
    }
    else{
        cout<<"Child";
    }

    /*
    Given marks of a student, print on the screen:
    Grade A if marks >= 90
    Grade B if marks >= 70
    Grade C if marks >= 50
    Grade D if marks >= 35
    Fail, otherwise.
    */
    int marks;
    cin >> marks;
    if(marks >= 90){
        cout << "A";
    }
    else if(marks >= 70){
        cout << "B";
    }
    else if(marks >= 50){
        cout << "C";
    }
    else if(marks >= 35){
        cout << "D"; 
    }
    else{
        cout << "Fail";
    }
    //Nested If - else
    /*
    You are given three integers, a, b, and c,
    print which of these integers is the largest,
    If two or more integers are equal and are the largest,
    the program should indicate that as well.
    */
    int a, b, c;
    cin >> a >>b >> c;
    if(a >= b){
        if(a >= c){
            cout<<"Largest is A";
        }
        else{
            cout <<"Largest is C";
        }
    }
    else if(b >= c){
        cout << "B is the Largest";
    }
    else{
        cout << "C is the Largest";
    }

    
    return 0;
}