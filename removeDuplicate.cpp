#include<bits/stdc++.h>

using namespace std;

int duplicate(vector<int> nums){
    int i=0;
    int j=1;
    while(j>i){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
        } else{
            j++;
        }
    }
    
    //(length return karni hai)
}
int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout<<duplicate(nums);



    return 0;
}