/*Write a program that uses an inline function to calculate the area of a circle. The function
should take in the radius as a parameter and return the area. Test the function with the
following values*/

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

inline double Area(double r) { return 3.1415*r*r;}

int main()
{
    float n;
    cin >> n;
    if(n>0){
        cout << fixed << setprecision(2) << Area(n);
    }
    else{
        cout << "Invalid";
    }
    return 0;
}
