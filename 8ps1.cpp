/*using LOOPS & IF ELSE ****************************************************************************************************** 

QUESTION :-
    Binod  is giving chocolates to his three daughters.He has two chocolates boxes.
    One containsA chocolates, and the other containsB chocolates. 
    He can thus give A chocolates,B chocolates or A+B chocolates to his daughters (He cannot open the boxes). 
    Your task is to determine whether Binod can give chocolates to his three daughters
     so that each of them can have the same number of chocolates.

    //  Input :
        -->First line will contain T, number of testcases. Then the testcases follow.
        -->Each testcase contains of a single line of input, two integers A,B.

    //  Output :
        --> For each test case if it is possible to give chocolates
            so that each of the three daughters can have the same number of chocolates, 
            print YES; otherwise, print NO.

    //  EXPLANATION :
        --> Sample 1- If Binod gives nine chocolates, each of the three daughters can have three chocolates.

        -->Sample 2- Since there are only two chocolates, the three daughters cannot have the same number of chocolates no matter what Binod gives to them.

*******************************************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int A,B,T;
    cout<<"Enter no. of choclates in 1st box :";// input from the user no. of choclates in 1st box
    cin>>A;
    cout<<"Enter no. of choclates in 2nd box :";// input from the user no. of choclates in 2nd box
    cin>>B;
    T=A+B //Total no. of choclates in both the boxes

}


