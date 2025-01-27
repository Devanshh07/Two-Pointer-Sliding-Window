#include<bits/stdc++.h>
using namespace std;

//valid palindrome question -> 125 leetCode;
/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

 Given a string s, return true if it is a palindrome, or false otherwise.
 Example 1:

 Input: s = "A man, a plan, a canal: Panama"
 Output: true
 Explanation: "amanaplanacanalpanama" is a palindrome.
 Example 2:

 Input: s = "race a car"
 Output: false
Explanation: "raceacar" is not a palindrome.
 Example 3:

 Input: s = " "
 Output: true
 Explanation: s is an empty string "" after removing non-alphanumeric characters.
 Since an empty string reads the same forward and backward, it is a palindrome.
 bool check_palindrome*/
int main(){

string s = "A man, a plan, a canal: Panama";
string lowr="";
for( char ch: s){
    if(isalnum(ch)){
        lowr+=tolower(ch);
    }
}
int n=lowr.length();
int l=0;
int r=n-1;
while(l<=r){
    if(lowr[l]!=lowr[r]){
        return 0;
    } else{
        l++;r--;
    }
}

//O(n) ,space -> O(1)

string ss="A man, a plan, a canal: Panama";
int st=0;
int e=ss.length()-1;
while(st<=e){
    if(!isalnum(ss[st])){st++;continue;}
    if(!isalnum(ss[e])){e--;continue;}
    if(tolower(ss[st])!=tolower(ss[e])){return 0;}
    else{
        st++;
        e--;
    }
}
      
    return 0;
}