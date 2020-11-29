#include <iostream>
using namespace std;

void printarray(int arr[], int size){
	for(int i=0;i<size;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void negPos(int arr[], int n){
	int low = 0,
		mid = 0,
		hi 	= n-1;
	while(mid<=hi){
		if(arr[mid] < 0){
			swap(arr[low++],arr[mid++]);
		}
		else{
			swap(arr[mid++],arr[hi--]);
		}
	}
	printarray(arr,n);
}

int main(){
	int arr[] = {-11,10,11,0,55,-11,11,10,-5,-4,-3,-1,0,5,21};
	int size = *(&arr+1)- arr;
	negPos(arr,size);
	return 0;
}