#include<bits/stdc++.h>

using namespace std;
class solution {

    public:
    int m = 1e9+7;
    int validPartion(vector<int> nums){
       
        int ans = 1;
        unordered_map<int,int> last_index;
        for(int i=0;i<nums.size();i++){
            last_index[nums[i]]=i;
        }
        int i=0;
        int j= max(j,last_index[nums[i]]);
        while(i<nums.size()){
           if(i>j){
             ans = (ans*2)%m;
           }
           j=max(j,last_index[nums[i]]);
           i++;
        }
        return ans%m;
    }

};
int main(){



    return 0;
}


