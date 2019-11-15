#include<bits/stdc++.h>
using namespace std;

void print(int x){
    static int i=x;
    if(x==0)
        return;
    print(x-1);
    cout<<x<<" ";
    if(i==x){
        cout<<"\n";
        i--;
        print(x-1);
    }
}


int main(){
    int x;
    cin>>x;
    print(x);
    return 0;
}