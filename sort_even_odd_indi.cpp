#include<bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> &nums){
    vector<int> odd;
    vector<int> even;
    for(int i=0;i<nums.size();i++){
        if(i%2==0){
            even.push_back(nums[i]);
        } else {
            odd.push_back(nums[i]);
        }
    }
    sort(begin(odd),end(odd));
    sort(begin(even),end(even));
    reverse(begin(even),end(even));
    for(int i=0;i<nums.size();i++){
        if(i%2==0){
            nums[i] = even[i];
            even.erase(even.begin());
        } else{
            nums[i] = odd[0];
            odd.erase(odd.begin());
        }
    }
    return nums;
}

int main(){



    return 0;
}