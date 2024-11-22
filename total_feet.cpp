/*
Find Total Feet

Given an array of integers representing measurements in inches, write a program to calculate the total of measurements in feet. Ignore the measurements that are less than a feet (eg. 10).
Note:
You are expected to write code in the findTotalFeet function only which will receive the first parameter as the number of items in the array and second parameter as the array itself. You are not required to take input from the console

Example:
Finding the total measurements in feet from a list of 5 numbers

Input
5
18 11 27 12 14

Output
5

Explanation:
The first parameter (5) is the size of the array. Next is an array of measurements in inches. The total number of feet is 5 which is calculated as shown below:
18->1
11->0
27->2
12->1
14->1
*/

#include<iostream>
using namespace std;

int solve(int arr[], int n){
    int feet[n];
    int sum=0;
    for(int i=0; i<n; i++){
        if(arr[i]<12){
            feet[i]=0;
        }
        else if(arr[i]>=12){
            feet[i] = arr[i]/12;
            sum += feet[i];
        }
    }
    
    return sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Solution: ";
    cout<<solve(arr, n)<<endl;
}
