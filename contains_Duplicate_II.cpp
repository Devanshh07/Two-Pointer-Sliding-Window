#include<bits/stdc++.h>

using namespace std;


//TLE -> Time Compl O(n^2) nd Space O(1);
bool check_condition(vector<int> nums,int k){
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
               if(nums[i]==nums[j] && abs(i-j)<=k){
                return true;
               }
        }
    }
    return false;
}
//better approach
class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> d;

        for (int i = 0; i < nums.size(); ++i) {
            int n = nums[i];
            if (d.find(n) != d.end() && i - d[n] <= k) {
                return true;
            } else {
                d[n] = i;
            }
        }
        return false;
    }
};



int main(){
  vector<int> nums = {1,2,3,1,2,3};
  int k = 2;
  cout<<check_condition(nums,k);



    return 0;
}