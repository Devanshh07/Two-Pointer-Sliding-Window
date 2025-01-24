#include<bits/stdc++.h>
//https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/?envType=problem-list-v2&envId=two-pointers&

using namespace std;

class Solution {
public:
    int m=1e9+7;
    int numSubseq(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        sort(begin(nums), end(nums));
        int ans = 0;
        vector<int> power(nums.size(), 0);
        power[0] = 1;
        for (int i = 1; i < nums.size(); i++) {
            power[i] = (power[i - 1] * 2)%m;
        }
        while (l <= r) {
            if (nums[l] + nums[r] <= target) {
                ans = (ans %m +power[r - l])%m;
                l++;

            } else {
                r--;
            }
        }
        return ans;
    }
};
int main(){
 

    return 0;
}
