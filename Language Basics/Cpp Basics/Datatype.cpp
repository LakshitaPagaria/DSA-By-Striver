// Data-type
//64 - bit system
//But my output is according to 32 - bit system
#include<bits/stdc++.h>
using namespace std;
int main(){
    // range -> [-10^9, 10^9]
    int numInt = INT_MAX;
    cout<< numInt<<endl;
    // 10^12
    long numLong = LONG_MAX;
    cout<< numLong <<endl;;
    //10^18
    long long nLong = LONG_LONG_MAX;
    cout<<nLong<<endl;
    //can storee upto 6 - 7 decimal places
    float numFloat = FLT_MAX;
    cout<<numFloat<<endl;
    //can store upto 15 - 16 decimal places
    double numDouble = DBL_MAX;
    cout<<numDouble<<endl;
    //storing a character
    char ch = 'a';
    cout<<ch<<endl;
    //storing a name using string class, we don't have a datatype for this.
    //string class comes under std.
    string str = "tuf";
    cout<<str<<endl;

    return 0;
}