/*
Problem: A. Summation
Source: Assiut Sheet - Arrays
Link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

Pseudo-code:
1- Take from the user the number (n) which represents the number of elements
2- Define an array called nums
3- Use a for loop to take the elements from the user
4- Use another for loop to access each element and calculate the sum
5- Use if & else to make the sum always positive (absolute value)

*/
#include<bits/stdc++.h>
using namespace std;
int main (){
    long long  n ,x , sum=0 ;
    cin >> n;
    int nums  [n];
    for (int i =0 ; i< n ; i++)
    {
        cin>> x;
        nums [i]=x ;  
    }
    
    for (int i = 0; i < n; i++) 
    {
        sum = (sum) + (nums [i]);
        
    }
    if (sum<0)
    {
        sum=-1*sum;
        cout << sum ;
    }
    else
    {
        cout<< sum;
    }

    }
