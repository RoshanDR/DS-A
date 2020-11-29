#include<bits/stdc++.h>
using namespace std;

auto KthSmallestEle(int arr[],int n, int k){
 	std::set<int> s;
 	for(int i=0;i<n;i++){
 		s.insert(arr[i]);
 	}

 	auto itr = s.begin();
 	for(int i=0;i<k;i++){
 		itr = itr++;
 	}
 	return *itr;
}


int main(){
	int t, *arr,k;
	// std::map<int,int> m;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		arr = new int[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}	

		cin >> k;;
		cout << KthSmallestEle(arr,n,k) << endl ;
	}
	return 0;
}