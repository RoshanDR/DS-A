#include<bits/stdc++.h>
using namespace std;


int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int *arr = new int[n];
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}

		/* ========= option one =========== */
		// sort(arr,arr+n);
		// for(int i=0; i<n; i++){
		// 	cout << " "<< arr[i]<< endl;
		// }

		/* ==============two==============*/
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				if(arr[i]<arr[j]){
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		for(int i=0; i<n; i++){
			cout<< arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}