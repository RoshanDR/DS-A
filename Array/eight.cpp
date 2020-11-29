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
		/*=========statement but too big and time consuming
		for(int i=0;i<n;i++){
			sum =0;
		   	for(int j=i;j<n;j++){ 
				sum = sum + arr[j];
				if(othersum < sum)
					othersum = sum;
				if(sum < 0)
					sum = 0;
			}

		}
		*/

		for(int i=0;i<n;i++){

			/*======modified version of that staments ========= it just check two conditions at one time*/
			sum =max(arr[i],sum + arr[i]);
			if(othersum < sum)
				othersum = sum;

		}
		
		cout << othersum << endl;
	}
	return 0;
}