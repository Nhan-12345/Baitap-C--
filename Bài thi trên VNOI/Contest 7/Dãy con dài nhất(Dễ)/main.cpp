#include <bits/stdc++.h>
#define faster cin.tie(NULL)->ios_base::sync_with_stdio(false)
#define logg long long
#define vr vector<int>
#define ft(a,b,c) for(int a=b; a<=c; a++)
#define fg(a,b,c) for(int a=b; a>=c; a--)
using namespace std;
const int N=1e4+4;
const logg mod=2e11+3e2;
const int inf=1e9+5;
int n;
vr a(N), F(N);
int main()
{
    faster;
    cin>>n;
    ft(i,1,n)
        cin>>a[i];
    a[0]=-inf, a[n+1]=inf;
    F[0]=1, F[1]=2;
    ft(i,2,n+1){
        fg(j,i-1,0)
            if (a[j]<a[i]&&F[i]<F[j]+1)
                F[i]=F[j]+1;
            }
    cout<<F[n+1]-2;
    return 0;
    return 0;
}
