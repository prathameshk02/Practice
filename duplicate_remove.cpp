/*
An algorithm to remove all the duplicate numbers of the list so that the list contains only distinct numbers in the same order as they appear in the input list

Input
The first line of the input consists of an integer size, representing the number of elements in the list (N). The second line consists of N space- separated integers - arr[0], arr[1].........., arr[N-1] representing the list of positive integers.

Output
Print space-separated integers representing the distinct elements obtained by removing all the duplicate elements from the given list.

Input: 8
Input: 11321454

Output
13245
*/

#include<iostream>
using namespace std;

int solve(int arr[], int n){
    //int new_arr[20];
    for(int i =0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                for(int k=j; k<n; k++){
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }
        }
    }

    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Result is: ";
    solve(arr,n);
}
