#include<bits/stdc++.h>
using namespace std;

//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int m, int n) {
	    // code here

	       for(int i=0;i<m;i++){
	           if(arr1[i]>arr2[0]){
	               int temp = arr1[i];
	               arr1[i] = arr2[0];
	               arr2[0] = temp;
	               std::sort(arr2,arr2+n);
	           }
	       }
	    
	}
};
