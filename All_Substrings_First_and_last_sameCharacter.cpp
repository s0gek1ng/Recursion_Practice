#include<bits/stdc++.h>
using namespace std;

void count(string s,int i,int len){
    static int c=0;
    if(len==0)
        return ;
    
    if((i+len-1)<s.length()){
        if(s[i]==s[i+len-1]){
            for(int k=i;k<=i+len-1;k++)
                cout<<s[k];
            cout<<endl;    
        }    
        count(s,i+1,len);
    }   
    else
        count(s,0,len-1);
}

int main(){
    string s;
    getline(cin,s);
    
    count(s,0,s.length());
    
    return 0;
    
}