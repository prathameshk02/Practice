/*
You are required to implement the following function.
Int OperationChoices(int c,int a , int b )
The function accepts 3 positive integers ‘a’ , ‘b’ and ‘c ‘ as its arguments. Implement the function to return.
( a + b ) , if c=1
( a – b ) , if c=2
( a * b ) , if c=3
(a / b) , if c =4

Input Format
Line 1 accepts an integer value of c i.e operation
Line 2 accepts an integer value of a i.e operand-1
Line 3 accepts an integer value of b i.e operand-2

Constraints
All input values are of type integer
All output values are of type integer

Output Format
An integer value which is the result of operation

Sample Input 0
1
12
16

Sample Output 0
28

Explanation 0
Since ‘c’=1 , (12+16) is performed which is equal to 28 , hence 28 is returned.
*/

#include <iostream>
using namespace std;
int calc(int ch, int a, int b){
    switch(ch){
        case 1:
            cout<<"Sum is: "<<a+b;
            break;
        case 2:
            cout<<"Difference is: "<<a-b;
            break;
        case 3:
            cout<<"Product is: "<<a*b;
            break;
        case 4:
            if(b==0){
                cout<<"Invalid number";
            }
            else{
                cout<<"Division is: "<<a/b;
            }
            break;
        default:
            cout<<"Invalid choice: ";
            break;
    }
    return 0;
}
int main() {
    int ch,a,b;
    cin>>ch;
    cin>>a;
    cin>>b;
    calc(ch,a,b);

    return 0;
}
