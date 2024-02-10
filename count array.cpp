#include<bits/stdc++.h>
using namespace std;
int arr[2000001];
int freq[2000001];
int main()
{
    int n;
    cin>>n;
    int maxi=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
        maxi=max(maxi,arr[i]);
    }
    for(int i=0;i<=maxi;i++){
        if(freq[i]>0)
            cout<<i<<" "<<freq[i]<<endl;
    }
}
