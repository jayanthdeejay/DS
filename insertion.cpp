#Insertion sort algorithm taken from CLRS
#include<iostream>
using namespace std;
int main() {
    int A[100]={0}, val;
    while(1) {
        cout<<"Enter number of integers to be sorted(<=100): ";
        cin>>val;
        if(val>1 && val<101)
            break;
    }
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<val;i++) {
        cin>>A[i];
    }
    cout<<"Array contents are: ";
    for(int i=0;i<val;i++) {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    int j=1;
    while(j<val) {
        int key=A[j];
        int i=j-1;
        while(i>-1 && A[i]>key) {
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=key;
        j++;
    }
    cout<<"Sorted array: ";
    for(int i=0;i<val;i++) {
        cout<<A[i]<<" ";
    }
    cout<<endl;
return 0;
}
