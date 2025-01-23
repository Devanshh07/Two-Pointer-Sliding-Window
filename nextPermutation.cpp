#include<bits/stdc++.h>
using namespace std;

//Next Permutation
//https://leetcode.com/problems/next-permutation/?envType=problem-list-v2&envId=two-pointers&


//to solve this question: -> next_permutation(arr.begin(),arr.end());

void solution(vector<int> &nums){
    next_permutation(nums.begin(),nums.end());
}
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int piv = -1;
        for(int i=nums.size()-2;i>=0;i--){ //finding pivot
            if(nums[i]<nums[i+1]){
                piv = i;
                break;
            }
        }
        if(piv==-1){ // if no pivot then reverse the whole array
            reverse(nums.begin(),nums.end()); // in place changes
            return;
        }
        for(int i=nums.size()-1;i>piv;i--){ // swapping the pivot and next large element
            if(nums[i]>nums[piv]){
                swap(nums[piv],nums[i]);
                break;
            }
        }
        int i=piv+1; // reversing the array after the pivot
        int j=nums.size()-1;
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
};
int main(){

vector<int> nums = {2,1,5,4,3,0,0};

for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
}

return 0;
}