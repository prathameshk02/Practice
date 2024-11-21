/*
You are given a function,
Void *ReplaceCharacter(Char str[], int n, char ch1, char ch2);
The function accepts a string ‘ str’ of length n and two characters ‘ch1’ and ‘ch2’ as its arguments . Implement the function to modify and return the string ‘ str’ in such a way that all occurrences of ‘ch1’ in original string are replaced by ‘ch2’ and all occurrences of ‘ch2’ in original string are replaced by ‘ch1’.

Input Format
Line 1 accepts value of string str
Line 2 accepts value of ch1
Line 2 accepts value of ch2

Constraints
String Contains only lower-case alphabetical letters.
Return null if string is null.
If both characters are not present in string or both of them are same , then return the string unchanged.

Output Format
A string which could be modified or not otherwise null

Sample Input 0
apples
a
p

Sample Output 0
paales

Explanation 0
‘a’ in original string is replaced with ‘p’ and ‘p’ in original string is replaced with ‘a’, thus output is paales.
*/

#include<iostream>
#include<cctype>
using namespace std;

void solve(char str[20], int n, char a, char b){

    if(n==0){
        cout<<"NULL";
    }
    int ca=0, cb=0;

    for(int i=0; i<n; i++){
        if(str[i]==a){
            str[i]=b;
            ca++;
        }
        else if(str[i]==b){
            str[i]=a;
            cb++;
        }
    }
    if((ca==0 && cb==0) || a==b){
        cout<<"the string unchanged";
    }
    cout<<str;
}

int main(){
    char str[20], a,b;
    cin>>str;
    int len = sizeof(str)/sizeof(str[1]);
    cin>>a;
    cin>>b;
    solve(str, len, a, b);
}
