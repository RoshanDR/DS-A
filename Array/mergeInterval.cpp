/*======================merge interval in cpp question 14===================*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> v;
        sort(intervals.begin(),intervals.end());
        if(!intervals.size()){
            return v;
        }
    
        int x = intervals[0][0];
        int y = intervals[0][1];
        for(int i=1; i<intervals.size();i++){
           auto k = intervals[i];
           if(k[0] > y){
            v.push_back({x,y});
            x = k[0];
            y = k[1];
           }
           y = max(y,k[1]);
        }
      v.push_back({x,y});  
      return v;
        
    }
};

int main(){
	std::vector<std::vecsizetor<int>> vec {{1,3},{2,6},{8,10},{15,18}};
	Solution s;
	vec = s.merge(vec);
	for(int i=0;i<vec.size();i++){
		for(int j=0;j<vec[i].size();j++){
			cout << vec[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}