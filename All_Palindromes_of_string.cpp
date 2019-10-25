#include<bits/stdc++.h>
using namespace std;

bool isPalin(char*c,int l,int r){
    if(l>=r)
        return true;
    if(c[l]==c[r])
        return isPalin(c,l+1,r-1);
    else
        return false;
}

void allPalin(char* c,int i,int len){
    if(len==0)
        return;
    if((i+len-1)<strlen(c)){   
        if(isPalin(c,i,i+len-1)){
            for(int k=i;k<=i+len-1;k++)
                cout<<c[k];
            cout<<" ";
        }
        allPalin(c,i+1,len);
    }    
    else{
        allPalin(c,0,len-1);
    }    
}

int main(){
    
    char a[1000];
    cin>>a;
    int len=strlen(a);
    allPalin(a,0,len);
    return 0;
}