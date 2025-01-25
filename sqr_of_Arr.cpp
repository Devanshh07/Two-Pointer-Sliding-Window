#include<bits/stdc++.h>

using namespace std;

//return the sorted sqaure of an given array

//Brute force
//O(nlogn+nlogn+n);
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            temp.push_back(nums[i]*nums[i]);
        }
        sort(temp.begin(),temp.end());
        return temp;
        
    }
};
vector<int> sortedarr(vector<int> &nums){
    int n=nums.size();
     int i=0;
     int j=n-1;
     vector<int> v(n);
     while(i<=j){
         
        if(abs(nums[j])>abs(nums[i])){
            v.push_back(abs(nums[j]*nums[j]));
            j--;
        } else{
            v.push_back(abs(nums[i]*nums[i]));
            i++;
        }
     }
     reverse(begin(v),end(v));
     return v;
}
int main(){


    return 0;
}