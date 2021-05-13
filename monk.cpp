#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter :";
    cin>>n;
    int a[n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<"Enter1 :";
            cin>>a[i][j];
        }
    }
    int i=0,j=0,c=0;
    while (1)
    {
        if ((a[i][j]<a[i+1][j] && a[i+1][j]>a[i][j+1]) && i<n)
        {
            i=i+1;
        }
        else if((a[i][j]<a[i][j+1] && a[i][j+1]>a[i+1][j]) && j<n)
        {
            j=j+1;
        }
        else
        break;
        c++;  
    }
    cout<<c;
    return 0;
}