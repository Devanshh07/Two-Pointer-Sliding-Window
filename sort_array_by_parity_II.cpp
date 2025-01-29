#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int>&nums){
    int i =0; //track even indi;
    int j = 1; //track odd
    while(i<nums.size()&&j<nums.size()){
        if(nums[i]%2==0) i+=2; //right place par hai
        if(nums[j]%2!=0) j+=2; //right place for Odd
        else{
            //dono glt hain Just Swape it
            swap(nums[i],nums[j]);
        }
    }

}
int main(){



    return 0;
}