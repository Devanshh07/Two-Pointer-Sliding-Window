#include<bits/stdc++.h>

using namespace std;
int remove_II(vector<int> nums){
       int n = nums.size();
        if(n<=2){
            return n;
        }

        int j = 2;
        for(int i=2; i<n; i++){
            if(nums[i] != nums[j-2]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    
}

int main(){
    vector<int> ans = {0,0,1,1,1,1,2,3,3};
    cout<<remove_II(ans);



    return 0;
}