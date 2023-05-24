//bank_employee
#include<iostream>
using namespace std;

class employee{
    public:
    int emp_no;
    string name;
    string designation;

    
    void get1(int n,string m,string o){
        emp_no = n;
        name = m;
        designation = o;
        
    }
    
    void put1(){
        cout << "Emp number:"<<emp_no << endl;
        cout << "Emp Name:"<<name << endl;
        cout << "Designation:"<<designation << endl;
    }
};

class salary:public employee{
    public:
    int bp;
    int hra;
    int da;
    int pf;
    
    void get2(int a,int b,int c, int d=0){
        hra = a;
        da = b;
        pf = c;
        bp = d;
    }
    
    void put2(){
        cout << "hra:"<<hra << endl;
        cout << "da:"<<da << endl;
        cout << "pf:"<<pf << endl;
//      cout << "bp:" << bp <<endl;
    }
    int net_pay(){
        return bp - (hra+da+pf);
    }
};

class bank_details:public salary{
    public:
    string Bank_name;
    int Acc_no;
    
    void get3(string x,int y){
        Bank_name = x;
        Acc_no = y;
    }
    
    void put3(){
        cout << "Bank Name: " << Bank_name<< endl;
        cout << "Account Number: " << Acc_no << endl;
    }
};

int main(){
    bank_details ob1;
    int n,a,b,c,d,y;
    string m,o,x;
    cin >> n >> m >> o;
    cin >> a >> b >> c;
    cin >> x >> y;
    ob1.get1(n,m,o);
    ob1.get2(a,b,c);
    ob1.get3(x,y);
    ob1.put1();
    ob1.put2();
    ob1.put3();
    
}
