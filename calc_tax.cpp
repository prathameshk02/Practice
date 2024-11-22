/*
Q1. Calculate Total Tax
Write a program to calculate the total bill tax amount for a list of billing amounts passed as an array of long integers.
Up to the amount 1000, there is no tax applicable, subsequently, a flat tax of 10% is applicable for the remaining amount as per the tax rate.

Note:
All calculations and results should be integer based ignoring fractions
You are expected to write code int the calcTotalTax function only which will receive the first parameter as the number of items in the array and second parameter as the array itself. You are not required to take input from the console.


Example
Calculating total tax for a list of 5 billing amount

Input
5
1000 2000 3000 4000 5000

Tech Mahindra Technical Assessment

Output
1000
*/

#include<iostream>
using namespace std;

int clacTotalTax(int n, int arr[]){
    int tax_amount, tax=0;
    for(int i = 0; i< n; i++){
        if(arr[i]>1000){
            tax_amount = arr[i]-1000;
            tax += (tax_amount*10)/100; 
        }
    }
    return tax;
}

int main(){
    int n, arr[20];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }    
    cout<<clacTotalTax(n,arr);
}

