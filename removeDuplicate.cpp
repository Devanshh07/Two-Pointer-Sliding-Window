#include<bits/stdc++.h>

using namespace std;

int duplicate(vector<int> nums){
    int j=1,i=0;
    while(j<nums.size()){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]= nums[j];
            
        }
        j++;
    }
    return i+1;//(length return karni hai)
}
int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout<<duplicate(nums);



    return 0;
}