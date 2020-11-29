#include<bits/stdc++.h>
using namespace std;

int findo(int arr[],int x){
	for(int i=0;i<5;i++){
		if(x==arr[i]){
			return i++;
		}
	}
	return 0;
}

void printresult(int x){
	switch(x){
		case 1:
				cout << "Malaysia" << endl;
				break;
		case 2:
				cout << "Australia" << endl;
				break;
		case 3:
				cout << "Germany" << endl;
				break;
		case 4:
				cout << "Dubai" << endl;
				break;
		case 5:
				cout << "france" << endl;
				break;
	}
}

int main(){

	int arr[25];
	int result[5];
	
	for(int i=0;i<25;i++){
		cin >> arr[i];
	}
	for(int i=0;i<25;i++){
		if(arr[i]==0 || arr[i] > 5){
			cout << "INVALID INPUT";
			return 0;
		}
	}

	for(int i=0;i<5;i++){
		int sum = 0;
		for(int j=0;j<5;j++){
			sum = sum + arr[i+(j*5)-1]; 
		}
		result[i] = sum;
	}

	int *min;
	min = result;

	sort(min,min+5);
	int a=min[0],
		b=min[1];
	
	a = findo(result,a);
	b = findo(result,b);

	printresult(a);
	printresult(b);
	return 0;

}