#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int delete_prefix_and_suffix(string name){
    //   string p = name[0];
    //   string s = name[1];
    
    }

};
int delete_prefix_and_suffix(string s){
      int i=0;
      int j=s.length()-1;
      if(s.length()==1) return s.length();
      while(i<j && s[i]==s[j]){
            char ch = s[i];
            while(s[i]==ch&&i<j ){
                i++;
            }
            while(s[j]==ch&&j>= i){
                j--;
            }
      }
      return j-i+1;
    }

int main(){
 string name = "example";
 delete_prefix_and_suffix(name);


    return 0;
}