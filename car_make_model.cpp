/*Create a class called "Car" with attributes "make", "model", and "year". Create an object of
the class and print out its attributes.*/
#include<iostream>
using namespace std;

class Student{
    public:
    int DataID;
    string name;
    void getstu(int n, string m){
        DataID = n;
        name = m;
    }
    void putstu(){
        cout << "\n" << "ID:" << DataID << endl;
        cout << "Name: "<< name << endl;
    }
};

class Mark: public Student{
    public:
    int m1;
    int m2;
    int m3;
    void getmarks(int a,int b,int c){
        m1 = a;
        m2 = b;
        m3 = c;
    }
    void putmarks(){
        cout << "Mark1:" << m1 <<endl;
        cout << "Mark2:" <<m2 <<endl;
        cout << "Mark3:" <<m3 <<endl;
    }
};

class Result: public Mark{
    public:
    float total = m1+m2+m3;
    float average = (m1+m2+m3)/3;
    void show(){
        cout << "Total:" << total << endl;
        cout << "Average:" << average << endl;
    }
    
};

int main(){
    int a,b,c,n;
    string m;
    cin >> n;
    cin >> m;
    cin >> a >> b >> c;

    Result s1;
    s1.getstu(n,m);
    s1.getmarks(a,b,c);
    s1.putstu();
    s1.putmarks();
    //s1.show();
    return 0;
}

