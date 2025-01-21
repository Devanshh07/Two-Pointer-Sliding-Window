#include<bits/stdc++.h>
using namespace std;

int maxPoint(vector<int> nums,int k){
    int rSum=0;
    int lSum=0;
    int maxSum=0;
    for(int i=0;i<k;i++){
        lSum=lSum+nums[i];
        maxSum=lSum;
    }
    int rInd= nums.size()-1;
    for(int i=k-1;i>=0;i--){
        lSum = lSum-nums[i];
        rSum= rSum+nums[rInd];
        rInd--;
        maxSum= max(maxSum,lSum+rSum);

    }
    return maxSum;
}

int main(){

    vector<int>nums={6,2,3,4,7,2,1,7,1};
    int k=4;
    cout<<maxPoint(nums,k);





    return 0;
}