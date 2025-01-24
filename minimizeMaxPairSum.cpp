#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/description/?envType=problem-list-v2&envId=two-pointers&
//minimize max pair sum in array

int main(){
    vector<int> nums={3,5,2,3};
    int r=nums.size()-1;
    int l=0;
    int ans = 0;
    sort(begin(nums),end(nums));
    while(r>l){
        ans = max(ans,nums[r]+nums[l]);
        r--;
        l++;
    }
    cout<<ans;


    return 0;
}