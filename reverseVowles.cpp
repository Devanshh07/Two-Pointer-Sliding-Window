#include<bits/stdc++.h>

using namespace std;

void reverseVow(string &s){
    int i=0;
    int j=s.size()-1;
    
    while(j>i){
        if(s[i]!='a'||s[i]!='e'||s[i]!='i'||s[i]!='o'||s[i]!='u'||s[i]!='A'||
         s[i]!='E'||s[i]!='I'||s[i]!='O'||s[i]!='U'){
            i++;
         } 
         else if(s[j]!='a'||s[j]!='e'||s[j]!='i'||s[j]!='o'||s[j]!='u'||s[j]!='A'||
         s[j]!='E'||s[j]!='I'||s[j]!='O'||s[j]!='U'){
            j--;
         }
         if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||
         s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')&&
         (s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||
         s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')){
            swap(s[i],s[j]);
            i++;
            j--;
         }
         
    }
}

int main(){
    string s="hello";
    reverseVow(s);
    cout<<s;

    return 0;
}