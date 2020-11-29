/*===============mapcode===================*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& v) {
        std::map<int,int> mp;
        for(int i=0;i<v.size();i++){
            if(mp.find(v[i])!=mp.end()){
                mp[v[i]]++;
            }
            else{
                mp.insert(std::pair<int,int>(v[i],1));
            }
        }
        
        for(auto it=mp.begin();it!=mp.end();++it){
            if(it->second == 2){
                return it->first;
            }
        } 
        return -1;
    }

};

int main(){
    int t,
        temp;
    std::vector<int> v ;
    cin >> t;
    t++;
    while(t--){
        cin >> temp;
        v.push_back(temp);
    }
    Solution s;
    auto ans = s.findDuplicate(v);
    cout << "Solution: "<< ans;
    return 0;
}