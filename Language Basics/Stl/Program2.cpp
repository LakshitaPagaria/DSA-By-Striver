#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    //pair<int, int>pr1{2, 8};
    pair<int, int>pr1=make_pair(2, 8);
    cout<<pr1.first<<" "<<pr1.second<<endl;

    pair<int, char>pr2=make_pair(2, 'a');
    cout<<pr2.first<<" "<<pr2.second<<endl;

    pair<pair<int,char>,int>pr3{{2,'a'},8};
    cout<<pr3.first.second<<endl;
}
void explainVector(){
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(1);
    vec.emplace_back(0);

    cout<<vec.size()<<endl;
    
    // [2,1,0]
    for(int i = 0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    //Iterator - 1st way 
    vector<int>::iterator beginItr = vec.begin();
    ///cout<<*beginItr<<endl;
    auto endItr=vec.end();
    //endItr = endItr - 1;
    //for(vector<int>::iterator i = beginItr;i<=endItr;i++)
    //auto = vector<int>::iterator
    for(vector<int>::iterator i = beginItr;i<endItr;i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    // Iterator - 2nd way using for - each loop
    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;

    //reverse iterator 
    auto reverseBegin = vec.rbegin();
    auto reverseEnd = vec.rend();
    for(auto j = reverseBegin;j<reverseEnd;j++){
        cout<<*j<<" ";
    }
}
void explainList(){
    list<int>ls = {6,7};
    ls.push_front(1);
    for(auto it : ls){
        cout<<it<<" ";
    }
}
void explainStack(){

    //LIFO Mechanism

    

    stack<int>st;
    st.push(7);
    st.push(1);
    //cout<<st.size()<<endl;
    cout<<st.top() <<" "; //1
    st.pop();//removes 1 from the stack
    cout<<st.top()<<" ";//7
    st.pop();//removes 7 from the stack
    //cout<<st.top()<<" ";//it will through you a runtime error
    cout<<endl;
    st.push(70);
    st.push(10);
    st.push(74);
    st.push(19);
    st.push(77);
    st.push(16);
    while(st.empty()==false){
        cout<<st.top()<<" ";
        st.pop();
    }

}
void explainQueue(){
    //FIFO Mechanism

    queue<int>q;
    q.push(7);
    q.push(10);
    q.push(9);
    q.push(56);
    while(q.empty()==false){
        cout<<q.front()<<" ";
        q.pop();
    }
}
void explainPQ(){
    // stores the highest element at the top
    priority_queue<int>pq;
    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(8);
    cout<<pq.top()<<" ";
    pq.pop();
    cout<<pq.top()<<" ";

    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
        cout<<endl;
    }

    cout<<endl;
    //stores the smallest element at the top 
    //minimum heap
    priority_queue<int,vector<int>,greater<int>>pq1;
    pq1.push(5);
    pq1.push(2);
    pq1.push(10);
    pq1.push(8);
    while(pq1.empty()==false){
        cout<<pq1.top()<<" ";
        pq1.pop();
        cout<<endl;
    }

}
void explainSet(){
    // stores only unique elements
    // and in ascending order
    set<int>st;
    st.insert(12);
    st.insert(20);
    st.insert(21);
    st.insert(21);
    st.insert(20);
    st.insert(12);
    st.insert(20);

    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;

    // auto it=st.find(12);//returns an iterator to 12
    // if(it!=st.end())
    // {
    //     cout<<*it;
    // }
    // cout<<endl;

    // cout<<st.count(21);//count is something which is gonna return you 1 if the element is there, if it is not there it will return you 0.
    // cout<<endl;
    

    // erase particular element in a set
    // st.erase(21);
    // for(auto it:st){
    //     cout<< it <<" ";
    // }
    // cout<<endl;

    // erase at certain location
    // auto it = st.end();
    // it--;
    // // it--;it--;
    // st.erase(it);
    // for(auto it:st){
    //     cout<<it <<" ";
    // }
    // cout<<endl;

    //Lower - bound
    //returns an iterator that points to an element
    //that is >=number given

    // auto it = st.lower_bound(11);
    // cout<<*it<<endl;

    //Upper - bound
    //returns an iterator that points to an element
    //that is > number given
    auto it = st.upper_bound(11);
    cout<<*it<<endl;

}
void explainMultiSet(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(0);
    ms.insert(21);
    ms.insert(21);

    for(auto it : ms){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<ms.count(1);

    //auto it = ms.find(1);
    
    // auto it = ms.erase(1);
    // for(auto it : ms){
    //     cout<<it<<" ";
    // }

    // auto it = ms.erase(ms.find(1));
    // for(auto it : ms){
    //     cout<<it<<" ";
    // }
    
    

}
void explainUnorderedSet(){
    unordered_set<int>us;
    us.insert(1);
    us.insert(10);
    us.insert(12);
    us.insert(12);
    us.insert(11);
    us.insert(1);
    us.insert(11);
    us.insert(19);
    for(auto it : us){
        cout<<it<<" ";
    }

    auto it = us.find(11);//O(1), O(N) (rare scenario)

}
void explainMap(){
    map<int, string> mpp;
    mpp[1]="abc";
    mpp[1]="vik";
    mpp[2]="bcd";
    mpp[3]="cat";
    mpp.insert({4,"Raj"});
    // for(auto it : mpp){
    //     cout<< it.first <<"->"<<it.second<<endl;
    // }

    auto it = mpp.find(4);
    cout<<(*it).first<<"->"<<(*it).second;
    
}
void explainUnorderedMap(){
    unordered_map<int, string> mpp;
    mpp[1]="abc";
    mpp[1]="vik";
    mpp[2]="bcd";
    mpp[3]="cat";
    mpp.insert({4,"Raj"});

    for(auto it : mpp){
        cout<< it.first <<"->"<<it.second<<endl;
    }

    
    
}
void explainMultiMap(){
    multimap<int, char>mpp;
    mpp.insert({3,'b'});
    mpp.insert({1,'a'});
    mpp.insert({1,'b'});
    mpp.insert({1,'a'});
    mpp.insert({2,'a'});
    mpp.insert({2,'a'});
    mpp.insert({2,'b'});
    
    // for(auto it : mpp){
    //     cout<<it.first<<"->"<<it.second<<endl;

    // }

    auto it = mpp.equal_range(2);
    for(auto i = it.first;i!=it.second;i++){
        cout<<(*i).first<<"->"<<(*i).second<<endl;
    }
}
void explainSort(){
    int arr[5]={6,2,1,7,0};
    sort(arr,arr+5);
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<int>vec = {6,1,7,3,4,5};
    sort(vec.begin(),vec.end());
    for(auto it :vec){
        cout<<it<<" ";
    }
    cout<<endl;

}
void explainAccumulate(){
    int arr[5]={6,1,2,3,4};
    cout<<accumulate(arr,arr+5,0);
}
void explainCount(){
    int arr[5]={6,1,2,3,4};
    int num = 1;
    cout<<count(arr,arr+5,num);
}
void explainFind(){
    int arr[5]={6,1,2,3,4};
    auto it = find(arr,arr+5,5);
    //cout<<*it;
    if(it == (arr+5)){
        cout<<"not found";
    }
}
void explainNextPermutation(){
    string str = "abc";
    do{
        cout<<str<<endl;

    }while(next_permutation(str.begin(),str.end()));
} 
void explainPrevPermutation(){
    string str = "bac";
    do{
        cout<<str<<endl;

    }while(prev_permutation(str.begin(),str.end()));
} 
void explainMaxElement(){
    int arr[]= {7,6,5,10,9};
    auto it = max_element(arr,arr+5);
    cout<<*it;
}
void explainMinElement(){
    int arr[]= {7,6,5,10,9};
    auto it = min_element(arr,arr+5);
    cout<<*it;
}
void explainReverse(){
    int arr[5] = {2,3,5,6,7};
    reverse(arr,arr+5);
    for(int i = 0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
// bool internalComparator(int el1,int el2){
//     if(el1<el2) return true;
//     return false;
// }
// void explainComparator(){
//     //el1 is 6
//     //el2 is 1
//     //internal comparator that takes el1 and el2
//     //and tells you if el1 should be before el2 or not.
//     int arr[] = {5,6,1,2};
//     sort(arr,arr+4,internalComparator);
//     for(int i = 0;i<4;i++){
//         cout<<arr[i]<<" ";
//     }
// }
bool internalComparator(pair<int,int>el1,pair<int,int>el2){
    if(el1.second>el2.second) return true;
    if(el1.second<el2.second) return false;
    if(el1.first<el2.first) return true;
    return false;
}
void explainComparator(){
    pair<int,int>arr[] = {{1,6},{1,5},{2,6},{2,9},{3,9}};
    //sort it according to
    //the second element
    //{2,9},{3,9},{1,6},{2,6},{1,5}
    
    sort(arr,arr+5,internalComparator);
    for(int i = 0;i<5;i++){
        cout<<"{"<<arr[i].first<<","<<arr[i].second<<"}";
    }
}



int main(){
    explainComparator();
    return 0;
}