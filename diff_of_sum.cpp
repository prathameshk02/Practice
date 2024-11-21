/*
Define a function according to below specifications:
The function accepts two integers n, m as arguments Find the sum of all numbers in range from 1 to m(both inclusive) that are not divisible by n. Return difference between sum of integers not divisible by n with sum of numbers divisible by n.

Input Format
Value of n
Value of m

Constraints
n>0 and m>0
Sum lies between integral range

Output Format
An integer value which is the difference between sum of factors and sum of non-factors

Sample Input 0
4
20

Sample Output 0
90

Explanation 0
Sum of numbers divisible by 4 are 4 + 8 + 12 + 16 + 20 = 60
Sum of numbers not divisible by 4 are 1 +2 + 3 + 5 + 6 + 7 + 9 + 10 + 11 + 13 + 14 + 15 + 17 + 18 + 19 = 150
Difference 150 – 60 = 90
*/

#include<iostream>
using namespace std;

int sum_of_siff(int n, int m){
    int sum_divisible = 0, sum_not_divisible = 0;
    for(int i=1; i<=m; i++){
        if(i%n==0){
            sum_divisible += i;
        }
        else{
            sum_not_divisible += i;
        }
    }
    int diff = sum_not_divisible - sum_divisible;
    return diff;
}

int main(){
    int n, m;
    cin >> n >> m;
    cout<<sum_of_siff(n,m);
}
