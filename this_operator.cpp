age_person

#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        string name;
        int age;

    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }
};

int main(){
    Person p("John",25);
    cout << "Name: " << p.getName() << ", Age: " << p.getAge() << endl;
}
