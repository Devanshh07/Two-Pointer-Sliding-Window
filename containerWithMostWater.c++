#include<bits/stdc++.h>
using namespace std;

//container with most water LeetCode 11{Two Pointer}
//https://leetcode.com/problems/container-with-most-water/description/?envType=problem-list-v2&envId=two-pointers


//brute force approach-> O(n^2)
int mostWater(vector<int> height){
  int n=height.size();
  int maxx=0;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int gap = j-i;
        int minimum = min(height[i],height[j]);
        maxx = max(maxx,gap*minimum);
    }
  }
  return maxx;
}

//optimal approach O(n)
//approach-> take two pointer Left(0) or Right(n-1)
//move next (which is smaller,bcz height high -> area hight)
int water(vector<int> height){
    int n=height.size();
    int l=0;
    int r=n-1;
    int max_area = 0;
    
        while(r>l){
            int width = r-l;
            int hight = min(height[r],height[l]);
            max_area = max(max_area,width*hight);
            if(height[r]>height[l]){
                l++;
            } 
            else{
                r--;
            }
        }
        return max_area;
    
}

int main(){
 vector<int> height = {1,8,6,2,5,4,8,3,7};
 cout<<water(height)<<mostWater(height);

    return 0;
}