even_or_odd

/*Write a program that takes in a number and outputs whether it is even or odd.Using C++.*/

#include<iostream>
using namespace std;

int main(){
    float n;
    cin >> n;
    if((int)n == (float)n){
        if((int)n%2!=0)
        {
            cout << "Odd";
        }
        else
        {
            cout << "Even";    
        }
        return 0;
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}
