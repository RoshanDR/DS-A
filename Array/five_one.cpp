/*=========two pointers=========*/
#include <iostream>
using namespace std;

void printarray(int arr[], int size){
	for(int i=0;i<size;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void negPos(int arr[], int n){
	int left  = 0,
		right = n-1;
	while(left <= right){
		if(arr[left]>=0 && arr[right]<0){
			swap(arr[left++],arr[right--]);
		}
		else if(arr[left]<0 && arr[right]>0){
			left++;
			right--;
		}
		else if(arr[left]<0 && arr[right]<0){
			left++;
		}
		else{
			right--;
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