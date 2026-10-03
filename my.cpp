#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    char map[101][101];
    char map_after[101][101];
    memset(map_after, '0', sizeof(map_after));
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++)
        {
            cin >> map[i][j];
        }
    }
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            if (map[i][j] == '*'){
                map_after[i][j] = '*';
            }
            else{
                for (int k=i-1;k<=i+1;k++)
                {
                    for (int l=j-1;l<=j+1;l++)
                    {
                        if (map[k][l] == '*')
                        {
                            map_after[i][j]++;
                        }
                    }
                }
            }
        }
    }
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            cout << map_after[i][j];
        }
        cout << endl;
    }
    return 0;
}