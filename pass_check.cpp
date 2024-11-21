/*
You are given a function.
int CheckPassword(char str[], int n);

The function accepts string str of size n as an argument. Implement the function which returns 1 if given string str is valid password else 0.

str is a valid password if it satisfies the below conditions.
– At least 4 characters
– At least one numeric digit
– At Least one Capital Letter
– Must not have space or slash (/)
– Starting character must not be a number

Input Format
A single line which contains password in string format

Constraints
Input string will not be empty.

Output Format
1 if password is valid, otherwise 0

Sample Input 0
aA1_67

Sample Output 0
1
*/
#include <iostream>
#include<cstring>
using namespace std;
/*
// Using ascii value
int check_password(string s, int len){
    int i,capital=0, number=0, flag=0, result=0;
    if(len<4){
        return 0; // String should be greater than 4 digits
    }
    if(s[0]>=48 && s[0]<=57){ 
        return 0; // First letter should not be numeric 48 to 57 is tring value
    }
    for(i=0;i<len;i++){
        if(s[i]>=65 && s[i]<=90){ 
            capital++; // Capital letter found 65 to 90 is uppercases
        }
        else if(s[i]>=48 && s[i]<=57){
            number++; // Number found
        }
        else if(s[i]==32 || s[i]=='/'){ // 32 is white space and from 97 to 122 is lowercase alphabet
            flag=1;
            break;
        }
    }
    if(flag==1){
        result=0; // As we have space and / in our password
    }
    else if(capital!=0 && number!=0){
        result=1; // AS we have capital letter and numbers in our password return 1
    }
    return result;
}
*/

int CheckPassword(string str, int n) {
    // Check if string length is at least 4
    if (n < 4) {
        return 0;
    }

    // Check if the first character is a digit
    if (str[0] >= '0' && str[0] <= '9') {
        return 0;
    }

    // Initialize flags for conditions
    bool hasDigit = false;
    bool hasUppercase = false;

    // Iterate through the string
    for (int i = 0; i < n; i++) {
        char ch = str[i];

        // Check for spaces or '/'
        if (ch == ' ' || ch == '/') {
            return 0;
        }

        // Check if it contains a numeric digit
        if (ch >= '0' && ch <= '9') {
            hasDigit = true;
        }

        // Check if it contains an uppercase letter
        if (ch >= 'A' && ch <= 'Z') {
            hasUppercase = true;
        }
    }

    // Check if all conditions are satisfied
    if (hasDigit && hasUppercase) {
        return 1; // Valid password
    }

    return 0; // Invalid password
}


int main(){
    string s;
    cin>>s;
    int len = s.length();
    cout<<CheckPassword(s,len);
}
