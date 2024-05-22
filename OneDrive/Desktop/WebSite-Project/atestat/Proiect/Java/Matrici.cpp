#include <iostream>
using namespace std;

int main()
{
    int n, a[25][25];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            {
                if(i==j || i+j==n+1)
                    a[i][j]=1;
                else
                    a[i][j]=3;
            }
    }
}