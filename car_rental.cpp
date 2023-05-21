car_rental

/*A car rental company wants to keep track of its fleet of cars. Each car has a make, model,
year, and rental price. The company wants to be able to calculate the total rental price of all
its cars and also find the car with the highest rental price. Design a program using OOPs and
the "this" pointer to implement this scenario. Create a new car object and verify that all the
attributes are set correctly using the "this" pointer.*/

#include<iostream>
#include<string.h>
using namespace std;

class Car{
    public:
    string Model;
    int year;
    int R_price;
    Car(){
        this->Model = "Swift";
        this->year = 2022;
        this->R_price = 15000;
    }
};

int main(){
    string n;
    Car ob1;
    getline(cin,n);
    if(n == "Model"){
    cout << ob1.Model;
    }
    else if(n == "Year"){
    cout << ob1.year;
    }
    else if(n == "Rental Price"){
    cout << ob1.R_price;
    }
}
