#include<bits/stdc++.h>

using namespace std;

// https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/
//sorted array;
//O(n) solution -> brute force;
char solution(vector<char>&letters,char target){
  int n=letters.size();
  for(int i=0;i<n;i++){
    if(letters[i]>target){
      return letters[i];
    }else{
      continue;
    }
  }
  return letters[0];
  
}
//using binary Search
//O(n/2)
char solution_optimized(vector<char> &letter,char target){
  int n = letter.size();
  int left = 0;
  int right = n-1;
  int ans = 0;
  for(int i=0;i<n;i++){
    int mid = left+(right-left)/2;
    if(letter[mid]==target){
      left = mid+1;
    } else if(letter[mid]>target){
      right = mid-1;
      ans = mid;
    } else{
      left = mid+1;
    }
  }
  return letter[ans];

}
int main(){




  return 0;
}