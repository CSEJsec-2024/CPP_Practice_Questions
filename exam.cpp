#include <iostream>
using namespace std;
int main(){
    float x,y,d;
    cout<<"Enter the total number of classes held :";
    cin>>x;
    cout<<"Enter the no. of classes attended by students :";
    cin>>y;
    d=(y/x)*100;
    if (d>=75){
        std :: cout<<"The student is allowed to sit in the exam";
        std :: cout<<d;
    }
    
    else {
        std :: cout<<"The student is allowed to sit in the exam : ";
        std :: cout<<d;
        }
    return 0;
} 