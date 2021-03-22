// In simple words, set is a container that stores sorted and unique elements. If unordered is added means elements are not sorted. If multiset is added means duplicate elements storage is allowed.
//implemented as a binary tree
//time complexivity= 0(logn)


#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    set <pair<int,int>> s1;
    // s.insert(2);
    //     s.insert(3);
    // s.insert(4);
    // s.insert(1);
    // s.insert(-2);
    // s.insert(0);

        s1.insert(make_pair(100,0));
            s1.insert(make_pair(120,10));
        s1.insert(make_pair(00,30));
        s1.insert(make_pair(10,40));
        s1.insert(make_pair(1000,50));
        s1.insert(make_pair(1,60));



    set<pair<int,int>>:: iterator itr;
itr = s1.erase(s1.begin());

cout<<itr->first<<" "<<itr->second<<endl;

    // for(itr=s1.begin();itr!=s1.end();itr++){
    //     cout<<itr->first<<" "<<itr->second<<endl;
    // }

}