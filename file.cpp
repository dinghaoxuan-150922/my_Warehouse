#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m;
    cin >> n >> k >> m;
    int a[100];
    int people = n;
    for(int i=0;i<n;i++)
    {
        a[i] = i;
    }
    for(int i=0;i<n;i++)
    {
        k = (k+m-1)%people;
        for (int j = k;j < people-1;j++){
            a[j] = a[j+1];
        }
        people--;  
    }
    cout << a[0] << endl;
    return 0;
}
//n = 4, k = 2, m = 1
//people = 4
//a = [1, 2, 3, 4]
//
