/*==========simple but effective=========*/
#include<iostream>
using namespace std;

void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";However you can 
	}
}

void sortarray(int arr[],int n){
	int c0=0,
		c1=0,
		c2=0;
	for(int i=0;i<n;i++){
		switch(arr[i]){
			case 0:
				c0++;
				break;
			case 1:
				c1++;
				break;
			case 2:
				c2++;
				break;
		}
	}
	int i=0;
	while(c0--){
		arr[i] = 0;
		i++;
	}
	while(c1--){
		arr[i] = 1;
		i++; 
	}
	while(c2--){
		arr[i] = 2;
		i++;
	}
	printarray(arr,n);
}


int main(){
	int arr[] = {0,0,0,1,0,1,0,2,0,1,1,1,0,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	sortarray(arr,size);
	return 0;
}