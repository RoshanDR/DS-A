#include<iostream>
using namespace std;

void rootate(int arr[],int n){
	int tempb = arr[0],
		tempf = arr[0];
	for(int i=1;i<n;i++){
		if(i==n-1){
			tempf = arr[i]; 
			arr[i] = tempb;
			arr[0] = tempf;
			return;
		}
		tempf = arr[i];
		arr[i] = tempb;
		tempb = tempf; 
	}
	return;
}

void efficientrotate(int arr[],int n){
	int x=arr[n-1];
	for(int i=n-1;i>0;i--){
		arr[i] = arr[i-1];
	}
	arr[0] = x;

}

int main(){
	int t;
	int *arr;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		arr = new int[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		efficientrotate(arr,n);
		for(int i=0;i<n;i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}


	return 0;
}