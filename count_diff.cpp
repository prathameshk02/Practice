/*

You are given a function,
int findCount(int arr[], int length, int num, int diff);

The function accepts an integer array ‘arr’, its length and two integer variables ‘num’ and ‘diff’. Implement this function to find and return the number of elements of ‘arr’ having an absolute difference of less than or equal to ‘diff’ with ‘num’. Note: In case there is no element in ‘arr’ whose absolute difference with ‘num’ is less than or equal to ‘diff’, return -1.

Input Format
Line 1 accepts size of array
Line 2 accepts values for array
Line 3 accepts value of 'num'
Line 4 accepts value of 'diff'

Constraints
NA

Output Format
If possible then result, otherwise -1.

Sample Input 0
6
12 3 14 56 77 13
13
2

Sample Output 0
3

Explanation 0
arr: 12 3 14 56 77 13
num: 13
diff: 2
Elements of ‘arr’ having absolute difference of less than or equal to ‘diff’ i.e. 2 with ‘num’ i.e. 13 are 12, 13 and 14.
*/

#include<iostream>
using namespace std;

int findCount(int arr[], int length, int num, int diff){
    int count = 0;
    for(int i=0; i<length; i++){
        if(abs(arr[i] - num) <= diff){
            count++;
        }
    }
    return count;
}

int main(){
    int length,num,diff;
    cout<<"Enter the length of array: ";
    cin>>length;
    int arr[length];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<length; i++){
        cin>>arr[i];
    }
    cout<<"Enter the number and difference";
    cin>>num>>diff;

    cout<<"The count is: "<<findCount(arr,length,num,diff);
}
