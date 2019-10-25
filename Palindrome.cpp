#include<bits/stdc++.h>
using namespace std;

int pow(int a,int b){
    int x;
    if(b==1)
        return a;
    if(b==0)
        return 1;
    
    if(b%2==0){
        int x=pow(a,b/2);
        return x*x;
    }    
    else{
        x=pow(a,b/2);
        return a*x*x;
    }    
}

int length(int n){
    int r=n,len=0;
    while(r){
        r=r/10;
        len++;
    }
    return len;
}

bool isPalin(int n,int len){
    
    if(len==0||len==1)
        return true;
    int x=n%10;
    int y=n/pow(10,len-1);
    if(x==y)
        return isPalin((n/10)%pow(10,len-2),len-2);
    else
        return false;
        
}
int main(){
    int n ;
    cin>>n;
    int len=length(n);
    cout<<isPalin(n,len);
    
    return 0;
}