/******************************
 *                            *
 *    Author :  Mahmoud Saleh *
 *    Created:  __.__.2023    *
 *                            *
 ******************************
 *******************************************************
 *                                                     *
 *  ***-->           RE STUDENT             <--***     *
 *  ***--> 	      MALWARE ANALYST           <--***     *
 *  ***--> COMPUTER SCIENCE AND ENGINEERING <--***     *
 *                                                     *
 *******************************************************/
#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
#define INF INT64_MAX
#define NINF INT64_MIN
#define int ll
#define endl "\n"
#define all(x) x.begin(), x.end()
int dx[] = {1, -1, 0, 1, -1, 1, 0, -1};
int dy[] = {1, -1, 1, 0, 1, -1, -1, 0};

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve()
{
    string str, abc = "abc";
    cin >> str;
    int ctr = 0;
    for (int i = 0; i < 3; i++)
        if (str[i] == abc[i])
            ctr++;
    cout << (ctr ? "YES" : "NO") << endl;
}
int32_t main()
{
    fast();
    int tc = 1;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        // cout << "Case #" << i << ": ";
        solve();
    }
}
