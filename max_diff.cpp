// Find the max difference from the adjacent element

#include<iostream>
using namespace std;

int solve(int arr[], int n){
    int max = 000;
    int m=n-1;
    int diff[m];
    for(int i=0; i<m; i++){
        diff[i] = arr[i]-arr[i+1];
    }
    for(int i=0; i<m; i++){
        if(diff[i]>max){
            max = diff[i];
        }
    }
    return max;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"solution:"<<solve(arr,n);
}
