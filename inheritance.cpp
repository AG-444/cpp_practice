#include <iostream>
using namespace std;

class Courier {
    protected:
        int courier_id;
        string name;
    
    public:
        Courier(int id, string name) {
            courier_id = id;
            this->name = name;
        }
        
        void print_bill(double base_fare) {
            double shipping_cost = base_fare + 30;
            cout << "Courier ID: " << courier_id << endl;
            cout << "Name of Courier: " << name << endl;
            cout << "Shipping Cost: " << shipping_cost << endl;
        }
};

class International_services : public Courier {
    private:
        string destination;
        double weight;
    
    public:
        International_services(int id, string name, string destination, double weight)
            : Courier(id, name) {
            this->destination = destination;
            this->weight = weight;
        }
        
        void final_bill(double base_fare) {
            double total_shipping_cost = base_fare * weight;
            cout << "Total Shipping Cost: " << total_shipping_cost << endl;
            if (total_shipping_cost > 100) {
                cout << "More Sale" << endl;
            } else {
                cout << "Less Sale" << endl;
            }
        }
};

int main() {
    int courier_id;
    string name, destination;
    double base_fare, weight;
    
    cout << "Enter courier ID: ";
    cin >> courier_id;
    cout << "Enter name of courier: ";
    cin >> name;
    cout << "Enter base fare: ";
    cin >> base_fare;
    cout << "Enter weight (in kg): ";
    cin >> weight;

    International_services courier(courier_id, name, destination, weight);


    cout << "\n";
    courier.print_bill(base_fare);
    courier.final_bill(base_fare);
    
    return 0;
}
