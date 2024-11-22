#include<iostream>
using namespace std;
/*
//Check prime or not
int main(){
    int n,count=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not a Prime Number"<<endl;
    }
}
*/

// print n prime no

int main(){
    int low,high;
    cin>>low>>high;
    for(int i=low; i<= high; i++){
        int count = 0;
        for(int j=2; j*j<i; j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
