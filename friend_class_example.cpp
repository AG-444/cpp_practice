#include<iostream>
using namespace std;

class DM {
public:
    int D_m;
    int D_cm;

    friend class DB;    
};

class DB : public DM {
public:
    int D_f;
    int D_i;
    float result;

    void setdis2(int p, int q) {
        D_f = p;
        D_i = q;
    }

    float Add() {
        result = (((D_m * 100) + D_cm) + ((D_f * 30) + (D_i * 2.54)))/100;
        return result;
    }
};

int main() {
    int n, m, p, q;
    cin >> n >> m;
    cin >> p >> q;
    DB ob1;
    ob1.D_m = n;
    ob1.D_cm = m;
    ob1.setdis2(p, q);
    ob1.Add();
    cout << ob1.result;
    return 0;
}
