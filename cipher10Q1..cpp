#include<iostream>
using namespace std;

int findmax(int ar[],int n){
    int i;
    int max=ar[0];
    for(i=1;i<n;i++){
        if(ar[i]>max){
            max=ar[i];
        }
    }
    return max;
}
int main(){
    int n,i,j;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    int maximum=findmax(ar,n);
    cout<<maximum;
}