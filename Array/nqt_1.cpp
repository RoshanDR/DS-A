// program for tcs nqt 1;

#include <iostream>
using namespace std;

int rmMonkey(int n, int k, int j, int m, int p){
	int rm = m/k;
	rm = rm + (p/j);
	cout << "tot :" << rm ;
	rm = n- rm;
	if(m%k==0 && p%j==0){
		return rm;
	}
	else{
		return ++rm;
	}
}

int main(){
	int n,k,j,m,p;
	cin >> n >> k >> j >> m >> p;
	if(n<0 ||k<0||j<0||m<0||p<0){
		cout << "INVALID OUTPUT";
		return 0;
	} 
	cout << "Number of reamining Monkey:" <<rmMonkey(n,k,j,m,p);
}