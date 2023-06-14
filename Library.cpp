//small_library


#include<iostream>
#include<string.h>
using namespace std;

class Library{
    public:
    string book;
    string author;
    string isbn;
    Library(string n, string book, string auth){
        this->isbn = n;
        this->book = book;
        this->author = auth;
    }
};

int main(){
    Library arr[3] = {Library("978-006231", "The Alchemist", "Paulo Coelho"), Library("975-200111","CPP","Balagurusamy"), Library("900-234567","Data Structures","Ullman")};
    string title;
    getline(cin, title);
    for (int i=0; i<3; i++){
        if (arr[i].book == title){
            cout << arr[i].author << endl;
            cout << arr[i].isbn << endl;
        }
    }
    return 0;
}
