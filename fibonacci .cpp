#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,first=0,second=1,next;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<first<<endl; //0//1
        next=first+second;//0+1=1//2
        first=second; //1//1
        second=next; //1//2
    }
}
