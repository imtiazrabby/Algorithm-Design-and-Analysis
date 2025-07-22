#include<iostream>
using namespace std;

const int MAX_N=100;
const int MAX_CAPA=1000;

int dp[MAX_N+1][MAX_CAPA+1];

int knapsackMemo(int capa,int wt[],int val[],int n){
    if(n==0 || capa==0) return 0;
    if(dp[n][capa]!= -1) return dp[n][capa];
    if(wt[n-1]>capa) return dp[n][capa] = knapsackMemo(capa,wt,val,n-1);

    return dp[n][capa]=max(val[n-1]+knapsackMemo(capa-wt[n-1],wt,val,n-1),
        knapsackMemo(capa, wt, val, n - 1)
    );
}

int main() {
    int val[]={60,100,120};
    int wt[]={10,20,30};
    int capa=50;
    int n=sizeof(val)/sizeof(val[0]);

    for(int i=0;i<=n;i++)
        for(int j= 0;j<=capa;j++)
            dp[i][j]=-1;

    cout<<"Memoization Result: "<<knapsackMemo(capa,wt,val,n)<< endl;

    return 0;
}
