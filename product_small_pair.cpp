#include<iostream>
using namespace std;

int sum_pair(int sum, int arr[], int n){

    if(n==0){
        return -1;
    }
    if(n<2){
        return 0;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int n1 = arr[0];
    int n2 = arr[1];
    for(int i=2; i<n; i++){
        if(n1==n2){
            n2 = arr[i];
        }
    }
    if((n1 + n2)<sum){
        return n1*n2;
    }
    return 0;
}

int main(){
    int sum,n;
    cin>>sum;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Solution: ";
    cout<<sum_pair(sum,arr,n)<<endl;
}
/*
#include<algorithm>

int solve(int arr[], int n, int sum){
    sort(arr, arr+n);
    if((arr[0]+arr[1])<sum){
        return arr[0]*arr[1];
    }
    return 0;
}

int main(){
    int sum,n;
    cin>>sum;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(n==0){
        cout<<"-1";
        return 0;
    }
    else if(n<2){
        cout<<"0";
        return 0;
    }
    cout<<"Solution: ";
    cout<<solve(arr, n, sum);
}
*/
