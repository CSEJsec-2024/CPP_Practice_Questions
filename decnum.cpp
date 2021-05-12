// Decrese the number by 0.5 everytime
#include <iostream>
using namespace std;
int main()
{
    float xvalue;// intial value
    cout<<"Enter a value :";
    cin>>xvalue;// taking value from the user
    while(xvalue>=0)
    {
        cout<<xvalue<<"\n";
        xvalue-=0.5;// decreasing the number by 0.5
    }
    return 0;
}