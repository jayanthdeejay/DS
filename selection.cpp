#include<iostream>
using namespace std;
int main() {
    int A[100]={0}, val;
    while(1) {
        cout<<"Enter number of elements to be sorted (<100): ";
        cin>>val;
        if(val>1 && val<101){
            break;
        }
    }
    cout<<"Enter unsorted elements:"<<endl;
    for(int i=0;i<val;i++) {
        cin>>A[i];
    }
    int i=0, j=0;
    while(j<val-1) {
        int key=A[j];
        for(i=j+1;i<val;i++) {
            if(A[j]>A[i]) {
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
        j++;
    }
    cout<<"Sorted elements: ";
    for(i=0;i<val;i++) {
        cout<<A[i]<<" ";
    }
    cout<<endl;
return 0;
}
