#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;


int main(){

	int t,
		n;
	int *arr;
	cin >> t;
	while(t--){
		int othersum = INT_MIN,sum =0;
		cin >> n;
		arr = new int[n];

		for(int i=0;i<n;i++){
			cin >> arr[i];
		}

		for(int i=0;i<n;i++){
			sum = max(arr[i], sum+arr[i]);
			othersum = max(sum,othersum);
		}
		
		cout << othersum << endl;
	}
	return 0;
}