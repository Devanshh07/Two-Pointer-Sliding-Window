#include<bits/stdc++.h>
using namespace std;
//Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.
//Return any array that satisfies this condition.
vector<int> sortArrayByParity(vector<int>& nums) {

    //there are four condition 
    //both even,both odd,i even,i odd



    //fun fact no need to do that perticular stuff in  this question
    //just apply move zeros concept ;
    int i=0;
    int j=nums.size()-1;
    while(i<j){
        //both even
        if(nums[i]%2==0&&nums[j]%2==0){
           i++;
        }
        else if(nums[i]%2!=0&&nums[j]%2!=0){
            j--;
        }
        else if(nums[i]%2==0&&nums[j]%2!=0){
            i++;
        } else  {
            swap(nums[i],nums[j]);
            i++;
        }
    }
        
}
vector<int> solution(vector<int>&nums){
    int top= 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0){
            swap(nums[i],nums[top]);
            top++;
        } else {
            continue;
        }

    }
    return nums;

}


int main(){




    return  0;
}