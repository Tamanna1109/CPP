#include<iostream>
using namespace std;
int main(){

    int array[]={1,2,3,4};

    int size=sizeof(array)/sizeof(array[0]);

    char vowels[5];

    for(int idx=0;idx<5;idx++){
        cin>>vowels[idx];
    }

    for(int idx=0;idx<5;idx++){
        cout<<vowels[idx]<<" ";
    }

    
    return 0;

    }

    