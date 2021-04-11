#include<iostream>
using namespace std;

int binarySearch(int A[],int n,int x){
    int low=0,high=n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(x==A[mid]) return mid;//find X,return (exit)
        else if(x<A[mid]) high = mid-1;//x less before mid
        else low = mid+1;//x lies after mid


    }
    return -1;
    
}

int main(){
    int A[] = {2, 4, 5, 7, 13 , 14, 15, 23};
    cout<<"enter a number\n";
    int x,n;
    n = sizeof(A)/sizeof(A[0]);
    
    cin>>x;
    int index = binarySearch(A,n,x);
    if(index != -1) cout<<"Number"<<x<<"is at index "<<index;

    return 0;
}