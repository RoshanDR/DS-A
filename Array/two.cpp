#include <bits/stdc++.h>
using namespace std;

void middle(int a, int b, int c){

}

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a>b)
		if(c>a)
			cout <<"a = " << a;
		else if(b>c)
			cout << b;
		else 
			cout << c; 
			
	else 
		if(c>b)
			cout << "b = " << b;
		else if(c>a)
			cout << c;
		else 
			cout << a ;
	return 0;
}