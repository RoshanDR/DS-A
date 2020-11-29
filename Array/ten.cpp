#include <bits/stdc++.h>
using namespace std;

class solution{
		public:
			int getMinDiff(int arr[],int n,int k){
				int count = (n-1)/2;
				cout << "count :" << count << endl;
			
				for(int i=0;i<n;i++){
            		if(i<count){
                		arr[i] = arr[i] + k;
            		}
            		else{
                		if(arr[i]<k)
                        	arr[i] = 0;
                		else
                    		arr[i] = arr[i] - k;
            		}
        		}

        		// sort(arr,arr+n);
        		for(int i=0;i<n;i++){
        			cout << arr[i] << "  ";
        		}
        		cout << endl;
        		int a = arr[0];
        		int b = arr[n-1];
        		return abs(b-a);
			}
};	


int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> k;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];	
		}
		solution ab;
		auto ans = ab.getMinDiff(arr,n,k);
		cout << ans << endl;
	}
	return 0;
}