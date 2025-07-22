#include<iostream>
using namespace std;

int FiboDP(int n,vector<int>&memo){
    if(n<=1) return n;
    if(memo[n]!=-1) return memo[n];
    memo[n]=FiboDP(n-1,memo)+FiboDP(n-2,memo);
    return memo[n];
}

int main(){
    int n=7;
    vector<int>memo(n+1,-1);
    int result=FiboDP(n,memo);
    cout<<"nth Fibonacci : "<<result<<endl;
    return 0;
}
