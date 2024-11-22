#include<iostream>
using namespace std;

int main(){
    int num, n1, n2, nxt;
    cout<<"Enter no1: ";
    cin>>n1;
    cout<<"Enter no2: ";
    cin>>n2;
    cout<<"Enter the number of terms: ";
    cin>>num;
    for(int i=0; i<num; i++){
        cout<<n1<<" ";
        nxt = n1 +n2;
        n1=n2;
        n2=nxt;
    }
    return 0;
}


