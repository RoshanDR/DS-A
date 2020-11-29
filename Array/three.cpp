#include<bits/stdc++.h>
using namespace std;

int smallestKInArray(int *arr,int n,int k){
	std::sort(arr,arr+n);
	return arr[k-1];
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

		cin >> k;
		cout << smallestKInArray(arr,n,k);
	}
	return 0;
}