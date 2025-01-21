#include<bits/stdc++.h>

using namespace std;

int maxLength(string s){
    int maxLen=0;
    int n=s.length();
    
    for(int i=0;i<n;i++){
        vector<int>hash(26,0);
        for(int j=i;j<n;j++){
            if(hash[s[j]-'a']==1) break;
            else{
            maxLen = max(maxLen,j-i+1);
            hash[s[j]-'a']==1;
            }
        }
    }
    return maxLen;
}

int main(){
string s = "cadbzabcd";
cout<<maxLength(s);


    return 0;
}