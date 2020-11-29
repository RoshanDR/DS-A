/*======partitioning like quick sort ============*/

#include <iostream>
using namespace std;

void printarray(int arr[], int size){
	for(int i=0;i<size;i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void negPos(int arr[], int n){
	int j=0;
	for(int i=0;i<n;i++){
		if(arr[i] < 0){
			if(i != j)
				swap(arr[i],arr[j]);
			j++;
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