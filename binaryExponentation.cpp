#include<bits/stdc++.h>
using namespace std;
const int M =1e9+7;
//recursive way
int binaryExponentiation(long int a,long int b){

    if(b==1){
        return a;
    }

    long int res=binaryExponentiation(a,b/2);
    if(b&1){
        return (a*(res*res)%M)%M;
    }else{
        return (res*res)%M;
    }
}
int binaryMultiply(long long a,long long b){
    int ans=0;
    while(b){
        if(b&1){
            ans=ans+a;
        }
        a=a+a;
        b>>=1;
    }
    return ans;
}
int binaryItrExponentiation(int a,int b){
    int ans=1;

    while(b){
        if(b&1){
            ans=binaryMultiply(ans,a);
        }
        a=binaryMultiply(a,a);
        b>>=1;
    }
    return ans;
}

int main(){
    cout<<binaryExponentiation(2,3)<<endl;
    cout<<binaryItrExponentiation(2,13)<<endl;
    return 0;
}