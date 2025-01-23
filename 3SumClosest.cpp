#include<bits/stdc++.h>
using namespace std;

int closestSum(vector<int> nums,int target){
    int n=nums.size();
    int close = 10000;
    sort(begin(nums),end(nums));
    for(int i=0;i<=3;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum = nums[i]+nums[j]+nums[k];
            if(abs(sum-target)<abs(target-close)){
                close = sum;
            }
            else if(sum>target){
                k--;
            }
            else {
                j++;
            }
        
        }
    }
    return close;

}

int main(){


    return 0;
}