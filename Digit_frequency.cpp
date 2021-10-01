#include<bits/stdc++.h>
using namespace std;

int getMaxfre(int arr[],int n, int d) {

    int count = 0;
    for (int i=0; i < n; i++){
       if (arr[i] == d){
          count++;
           
       }
    }
          return count;
}


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;

    cout<<getMaxfre(arr,n,d)<<endl;

    return 0;
}




