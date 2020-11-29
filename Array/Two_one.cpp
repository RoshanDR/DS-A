/*
	finding min and maximum in an array ...
*/

#include <iostream>
using namespace std;

class MinMax(){
	public:
		int min,max;
};

void gremin(int arr[]){	
	int size = arr.length();
	cout << *min_element(arr.begin(),arr.end());
}

int main(){
	int t;
	cin >> t;
	int *arr;
	arr = new int[t];
	int i = 0;
	while(t--){
		cin >> arr[i];
		i++;
	}
	MinMax m = gremin(arr);
	cout << m.min << " is min in array " << m.max << "is maximum";
	return 0;
}