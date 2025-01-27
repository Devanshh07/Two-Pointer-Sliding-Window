#include<bits/stdc++.h>

using namespace std;


int main(){

  string s = "Hello jiii  ";
  //find length of the last word

  int e = s.length();
  while(e>=0 && s[e]==' '){
     e--;
  }
  int start = e;
  while(e>=0&&s[e]!=' '){
        e--;
  }
  cout<<start-e;


    return 0;
}