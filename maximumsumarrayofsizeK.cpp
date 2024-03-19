#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxsum=INT_MIN;
    int maxidx=0;
    int prevsum=0;
    // for(int i=0;i<n-k;i++){
    //     int sum=0;
    //     for(int j=i;j<i+k;j++){
    //         sum+=arr[j];
    //     }
    //     if(maxsum<sum){
    //         maxsum=sum;
    //         maxidx=i;
    //     }
    // }
    for(int i=0;i<k;i++){
        prevsum+=arr[i];
    }
    maxsum=prevsum;
    int i=1;
    int j=k;
    while(j<n){
        prevsum=prevsum+arr[j]-arr[i-1];
        if(prevsum>maxsum){
            maxsum=prevsum;
            maxidx=i;
        }
        i++;
        j++;
    }
    cout<<maxsum<<" "<<maxidx;
}