#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if (j == 0 )
                k = 1;
            else
                k = k*(i-j+1)/j;

            cout <<k<< " ";
        }
        cout << endl;
    }
    return 0;
}