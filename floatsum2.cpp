#include <iostream>

using namespace std;
int main(){
    
    float x,y,d;
    cout<<"Enter the first number :";//getting the 1st input from user
    cin>>x;
    cout<<"Enter the second number :";//getting the 2nd input from user
    cin>>y;
    d=(float)x-y;//arithmatic operation is taking place
    printf("%0.1f",d);
    return 0;
}