#include<iostream>
#include<algorithm>
using namespace std;

int binarysearch(int arr[],int l, int r, int x);
int binarysearch(int arr[],int l, int r, int x){
		if(r>=l){
			int mid = l +((r-l)/2);
			
			if (arr[mid] == x)
            	return mid;
 
	        // If element is smaller than mid, then it can only
    	    // be presen in left subarray
        	if (arr[mid] > x)
            	return binarysearch(arr, l, mid - 1, x);
 
	        // Else the element can only be present in right
    	    // subarray
        		return binarysearch(arr, mid + 1, r, x);
		}
		return -1;
}


void unioon(int arr1[],int m, int arr2[],int n){
	
	sort(arr1,arr1+m);
	sort(arr2,arr2+n);
	std::vector<int> v;;
	for(int i=0;i<m;i++){
		if(binarysearch(arr1,0,m-1,arr1[i]) == -1)
			v.push_back(arr[i]);
	}
	for(int i=0;i<n;i++){
		if(binarysearch(arr1,0,m-1,arr1[i]) == -1)
			v.push_back(arr[i]);
	}

	cout << count << endl;
}


int main(){
	int t,n,m;
	cin >> t;
	while(t--){
		cin >> m >> n;
		int arr1[m];
		int arr2[n];
		for(int i=0;i<m;i++){
			cin >> arr1[i];
		}
		for(int i=0;i<n;i++){
			cin >> arr2[i];
		}

		unioon(arr1,m,arr2,n);
	}
	return 0;
}