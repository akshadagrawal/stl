#include<bits/stdc++.h>
using namespace std;
int main(){
	list<int> arr1;
	list<int> arr2;
	arr1.push_back(1);
	arr1.push_back(2);
	arr1.push_back(3);
	arr1.push_back(4);
	arr1.push_back(5);
	arr1.push_back(6);

	arr2.push_front(1);
	arr2.push_front(2);
	arr2.push_front(3);
	arr2.push_front(4);
	arr2.push_front(5);
	arr2.push_front(6);
	list<int>:: iterator itr;
	for(itr=arr1.begin();itr!=arr1.end();itr++){
		cout<<*itr;
	}
	for(itr=arr2.begin();itr!=arr2.end();itr++){
		cout<<*itr;
	}

}