#include<bits/stdc++.h>

using namespace std;
vector<int> applyOperations(vector<int>& nums) {
    int n = nums.size();
    for(int i=0;i<n-1;i++){
        if(nums[i]==nums[i+1]){
            nums[i] = nums[i]*2;
            nums[i+1] = 0;
        } else {
            continue;
        }
    }
    int target=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[target]);
            target++;
        } else {
            continue;
        }
    }
    return nums;
        
}

int main(){


    return 0;
}