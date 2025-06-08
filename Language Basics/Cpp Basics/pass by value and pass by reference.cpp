#include<bits/stdc++.h>
using namespace std;
// void explainPassByValueAndPassByReference(int x){
//     x=x+10;
// }
// int main(){
//     int num = 5;
//     explainPassByValueAndPassByReference(num);
//     cout<<num;
//     return 0;
// }

// void explainPassByValueAndPassByReference(int &x){
//     x=x+10;
// }
// int main(){
//     int num = 5;
//     explainPassByValueAndPassByReference(num);
//     cout<<num;
//     return 0;
// }

// void explainPassByValueAndPassByReference(int arr[]){
//     arr[0] = 100;
// }
// int main(){
//     int arr[] = {6, 7, 8, 1, 2};
//     explainPassByValueAndPassByReference(arr);
//     cout<<arr[0];
//     return 0;
// }

void explainPassByValueAndPassByReference(int *arr){
    arr[0] = 100;
}
int main(){
    int arr[] = {6, 7, 8, 1, 2};
    explainPassByValueAndPassByReference(arr);
    cout<<arr[0];
    return 0;
}