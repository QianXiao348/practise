#include<bits/stdc++.h>
using namespace std;
#define PASE cin.tie(0), ios::sync_with_stdio(false);
#define fi first
#define se second
typedef long long LL;
typedef pair<int,int> PII;
const int dx[] = {-1, 0, 1, 0, -1, 1, 1, -1};
const int dy[] = {0, 1, 0, -1, 1, 1, -1, -1};
const int MOD = 1e9 + 7;
const int N = 110;
int a[N][N][N];
LL s[N][N][N];

void solve(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            for(int k = 1; k <= n; k++){
                cin >> a[i][j][k];
                s[i][j][k] = s[i-1][j][k] + s[i][j-1][k] + s[i][j][k-1]
                            - s[i-1][j-1][k] - s[i][j-1][k-1] - s[i-1][j][k-1]
                            + s[i-1][j-1][k-1] + a[i][j][k];
            }
    
    int q;
    cin >> q;
    while(q--){
        int x1, x2, y1, y2, z1, z2;
        cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
        cout << s[x2][y2][z2]
             - s[x1-1][y2][z2] - s[x2][y1-1][z2] - s[x2][y2][z1-1]
             + s[x1-1][y1-1][z2] + s[x1-1][y2][z1-1] + s[x2][y1-1][z1-1]
             - s[x1-1][y1-1][z1-1] << endl;
    }
}

int main(){
    PASE;
    int _ = 1;
    while(_--){
        solve();
    }
    return 0;
}

