/*
The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second largest element from the even positions and second smallest from the odd position of given ‘arr’

Input Format
Line 1 accepts size of array lets say n
Line 2 accepts n integer values

Constraints
All array elements are unique
Treat the 0th position as even

Output Format
An integer value which is the sum of large and small, otherwise 0

Sample Input 0
6
3 2 1 7 5 4

Sample Output 0
7

Explanation 0
Second largest among even position elements(1 3 5) is 3
Second smallest among odd position element(2 4 7) is 4
Thus output is 3+4 = 7

Sample Input 1
3
6 4 2

Sample Output 1
0

Explanation 1
check constraint
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
int solution(int arr[], int len){
    if(len<=3){
        return 0;
    }
    vector<int> evenpos, oddpos;
    for(int i=0; i<len; i++){
        if(i%2==0){
            evenpos.push_back(arr[i]);
        }
        else{
            oddpos.push_back(arr[i]);
        }
    }
    sort(evenpos.begin(),evenpos.end());
    sort(oddpos.begin(),oddpos.end());
    return evenpos[evenpos.size()-2] + oddpos[1];
}
*/
int solution(int arr[], int n){

    if(n<=3){
        return 0;
    }

    int half = n/2;
    int even[half], odd[half];
    for(int i=0; i<n; i++){
        if(i%2==0){
            even[i/2] = arr[i];
        }
        else{
            odd[i/2] = arr[i];
        }
    }
    for(int i=0; i<half; i++){
        for(int j=0; j<half-i; i++){
            if(even[j]>even[j+1]){
                int temp = even[j];
                even[j] = even[j+1];
                even[j+1] = temp;
            }
        }
    }
    for(int i=0; i<half; i++){
        for(int j=0; j<half-i; j++){
            if(odd[j]>odd[j+1]){
                int temp = odd[j];
                odd[j] = odd[j+1];
                odd[j+1] = temp;
            }
        }
    }
    
    return even[half-2] + odd[1];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Solution is: ";
    cout<<solution(arr,n);
}
