//order of insertion changes and hence clled the unordered mqp
//implemented using hash map internally
//no duplicate keys possible
//o(1) complexivity for searching, inserting worts case o(n)
//count function jsed to check if  key is present or not and hence can be used in searching operations

#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map <int, int> umap;
   unordered_map<int, int> :: iterator itr;
   umap[2]=4;
   umap[1]=1;
   umap.insert(make_pair(3,9));

   //printing
    //  for(auto x: umap){
    //      cout<<x.first<<" "<<x.second<<endl;
    //  }

    //print using iterator
     for(itr=umap.begin(); itr!=umap.end();itr++){
         cout<<itr->first<<" "<<itr->second<<endl;
     }
    // using count function to check if something is there or not
     cout<<umap.count(3);

     //using find function to check if key is present
     //find returns key if found else last iterator

       int key= 3;
       if(umap.find(key) == umap.end()) cout<<key<<" not found";


}