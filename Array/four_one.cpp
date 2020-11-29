/*=========Dutches national flag algorithm /3 way partiotioning =====*/

#include<iostream>
using namespace std;
void sort012(int arr[],int n){
	int low = 0;
	int hi = n-1;
	int mid = 0;
	while(mid<=hi){
		switch(arr[mid]){
			case 0:
				 swap(arr[low++],arr[mid++]);
				 break;
			case 1:
				mid++;
				break;
			case 2:
				swap(arr[mid++],arr[hi--]);
				break;
		}
	}
	cout << "done!!!!";
}
void printarray(int arr[], int n){
	for(int i=0;i<n;i++){
		cout << arr[i]<<" ";
	}
	cout << endl;
}

int main(){
	int arr[] = {0,1,1,1,0,0,0,2,0,0,1,1,2,0,0};
	int size = sizeof(arr)/sizeof(arr[0]);
	sort012(arr,size);
	printarray(arr,size);
	return 0;
}