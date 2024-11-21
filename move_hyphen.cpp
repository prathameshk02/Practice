/*
Implement the following functions.a

char*MoveHyphen(char str[],int n);

The function accepts a string “str” of length ‘n’, that contains alphabets and hyphens (-). Implement the function to move all hyphens(-) in the string to the front of the given string.

Input Format
A string which contains alphabets and hyphens.

Constraints
Return null if str is null

Output Format
A new string by moving all hyphens into front.

Sample Input 0
Move-Hyphens-to-Front

Sample Output 0
---MoveHyphenstoFront
*/

#include<iostream>
using namespace std;

string mvhyphen(string s, int n){
    string result = "";
    int count =0;
    if(s == ""){
        return NULL;
    }

    for(int i=0; i<n; i++){
        if(s[i] == '-'){
            count++;
        }
        else{
            result = result + s[i];
        }    
    }
    while(count>=1){
            result = '-' + result;
            count--;
    }
    return result;
}

int main(){
    string s;
    cin>>s;
    cout<<mvhyphen(s, s.length());
}
