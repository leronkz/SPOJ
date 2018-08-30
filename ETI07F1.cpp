#include <iostream>
using namespace std;

#define FOR(x, b, e) for(int x = b; x <= (e); ++x)
const int UNDEF = -1, MAXN = 105, MAXA = 205, MAXB = 205;
int dp[MAXN][MAXA][MAXB], A[MAXA], B[MAXB], n, a, b;

int Calc(int i, int j, int k)
{
	if(dp[i][j][k] != UNDEF) return dp[i][j][k];
	if(i == n || j <= 0 || k <= 0) return 0;
	if(j < A[i] || k < B[i]) return dp[i][j][k] = Calc(i+1, j, k);
	else return dp[i][j][k] = max(1+Calc(i+1, j-A[i], k-B[i]), Calc(i+1,j,k));
}

int main()
{
	cin>>n>>a>>b;
	for(int i=0; i<n; i++) cin>>A[i]>>B[i];

	FOR(i,0,n+1)
	{
		FOR(j, 0, a+1)
		{
			FOR(k, 0, b+1) dp[i][j][k] = UNDEF;
		}
	}

	int ans = Calc(0, a, b);
	cout<<ans<<endl;

	return 0;
}
