#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/longest-palindromic-substring/description/?envType=problem-list-v2&envId=two-pointers
//Longest Palindromic substring


//bruteForce Approach -> O(n^3);
class Solution {
public:
    std::string longestPalindrome(std::string s) {
        if (s.length() <= 1) {
            return s;
        }
        
        int max_len = 1;
        std::string max_str = s.substr(0, 1);
        
        for (int i = 0; i < s.length(); ++i) {
            for (int j = i + max_len; j <= s.length(); ++j) {
                if (j - i > max_len && isPalindrome(s.substr(i, j - i))) {
                    max_len = j - i;
                    max_str = s.substr(i, j - i);
                }
            }
        }

        return max_str;
    }

private:
    bool isPalindrome(const std::string& str) {
        int left = 0;
        int right = str.length() - 1;
        
        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            ++left;
            --right;
        }
        
        return true;
    }
};

//two pointer //Sliding window

class optimizedSolution{
    public:
    string palindrome(string s){
        string max_Str= s.substr(0,1);
        int n=s.length();
        
         auto expand__ = [&](int left,int right){
            while(left>=0&&right&&s[left]==s[right]){
                left--;
                right++;
            }
            return s.substr(left+1,right-left-1);
         };

        for(int i=0;i<n;i++){
            string odd = expand__(i,i);
            string even = expand__(i,i+1);
            if(odd.length()>max_Str.length()){
                max_Str = odd;
            }
            if(even.length()>max_Str.length()){
                max_Str = even;
            }
        }
return max_Str;
    }


};
int main(){
string s = "babad";



    return 0;
}