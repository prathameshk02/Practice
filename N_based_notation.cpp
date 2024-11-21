/*
N-base notation is a system for writing numbers that uses only n different symbols, This symbols are the first n symbols from the given notation list(Including the symbol for o) Decimal to n base notation are (0:0, 1:1, 2:2, 3:3, 4:4, 5:5, 6:6, 7:7, 8:8, 9:9, 10:A,11:B and so on upto 35:Z)

Implement the following function
Char* DectoNBase(int n, int num):

The function accept positive integer n and num Implement the function to calculate the n-base equivalent of num and return the same as a string

Input Format
Line 1 accepts, value of 'n', base value
Line 2 accepts, value of 'num', which is needed to be converted.

Constraints
1 <= n <=36

Output Format
Conversion obtained in string format.

Sample Input 0
12
718

Sample Output 0
4BA

Explanation 0
num       Divisor       quotient       remainder
718          12            59            10(A)
59           12            4             11(B)
4            12            0              4(4)
*/


#include<iostream>
#include<vector>
using namespace std;

string solve(int n, int num){
    int reminder;
    string result = "";
    vector<int> v;
    while(num>0){
        reminder = num % n;
        v.push_back(reminder);
        num = num/n;        
    }
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]<10){
            result = result+to_string(v[i]);
        }
        else{
            result = result + (char)(v[i]-10+65);
        }
    }
    return result;
}

int main(){
    int n, num;
    cin >> n >> num;
    cout<<solve(n,num);
}
