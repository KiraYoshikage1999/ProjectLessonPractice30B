#include <iostream>
#include <string>

using namespace std;

class Gadget {
protected:
    int weight;
    string name;

public:

    Gadget(string name, int weight ) {
        this->name = name;
        this->weight = weight;
    }
     




};

class Mobile : protected Gadget  {
    int size;
    string model;
public:

    Mobile(int size, string model, string name, int weight) : Gadget(name, weight) {
        this->size = 0;
        this->model = "None";
    }

    void BuySomething() {
        int UserChoose;

        cout << "Choose what to buy 1-4 : Tablet , Phone , SmartWatch, Laptop" << endl;
        cin >> UserChoose;

        if (UserChoose == 1) {
            cout << "You bought Tablet" << endl;
        }
        else if (UserChoose == 2) {
            cout << "You bought Phone" << endl;
        }
        else if (UserChoose == 3) {
            cout << "You bought SmartWatch" << endl;
        }
        else if (UserChoose == 4) {
            cout << "You bought Laptop" << endl;
        }
        else {
            cout << "You entered something wrong" << endl;
        }
    }
};


class Tablet : protected Mobile {
    int size;
    string model;

public:

    Tablet(string name , int weight , int size) : Mobile(size, name, model, weight) {
        this->name = "Tablet";
        this->weight = 2;
        this->size = 30;
    }

    void TabletUsing() {
        cout << "You take tablet and look something in there" << endl;
    }

};

class Phone : protected Mobile {
    int size;
    string model;
public:

    Phone(string name, int weight, int size, string model) : Mobile(size , name , model , weight) {
        this->name = "Phone";
        this->weight = 1;
        this->size = 10;
        this->model = "AGalaxy";
    }

    void PhoneSomeone() {
        cout << "You phoned your friend" << endl;
    }
};

class SmartWatch : protected Mobile {
    int size;
    string model;
public:

    SmartWatch(string name, int weight, int size, string model) : Mobile(size, name, model, weight) {
        this->name = "SmartWatch";
        this->weight = 0;
        this->size = 5;
        this->model = "Fitness";
    }
        
    void WatchTime() {
        cout << "You looked time" << endl;
    }
};

class Laptop : protected Mobile {
    int size;
    string model;
    string type;
public:

    Laptop(string name, int weight, int size, string model, string type) : Mobile(size, name, model, weight) {
        this->name = "Laptop";
        this->weight = 5;
        this->size = 50;
        this->model = "working";
    }

    void WorkOnLaptop() {
        cout << "You start work on laptop" << endl;
    }
};


class Static : protected Gadget  {
    int size;
    string model;
public:

    Static(int size, string model , int weight , string name ) : Gadget(name, weight) {
        this->size = 0;
        this->model = "None";
    }

    void BuySomething() {
        int UserChoose;

        cout << "Choose what to buy 1-4 : PC , TV , monitor , PS4" << endl;
        cin >> UserChoose;

        if (UserChoose == 1) {
            cout << "You bought PC" << endl;
        }
        else if (UserChoose == 2) {
            cout << "You bought TV" << endl;
        }
        else if (UserChoose == 3) {
            cout << "You bought monitor" << endl;
        }
        else if (UserChoose == 4) {
            cout << "You bought PS4" << endl;
        }
        else {
            cout << "You entered something wrong" << endl;
        }
    }
};

class PC : protected Static {
    int size;
    string model;
    string type;
public:

    PC(string name, int weight, int size, string model, string type) : Static(size, model, weight, name) {
        this->name = "Laptop";
        this->weight = 5;
        this->size = 50;
        this->type = "working";
    }

    void WorkOnPC() {
        cout << "You start work on laptop" << endl;
    }
};

class TV : protected Static {
    int size;
    string model;
    int typeOfMonitor;
public:

    TV(string name, int weight, int size, int typeOfMonitor, string type) : Static(size, model , weight , name) {
        this->name = "Laptop";
        this->weight = 5;
        this->size = 50;
        this->typeOfMonitor = 1900;
    }

    void WorkOnLaptop() {
        cout << "You start watch TV" << endl;
    }
};

class monitor : protected Static {
    int size;
    string model;
    int typeOfMonitor;
public:

    monitor(string name, int weight, int size, string model, string type) : Static(size, model, weight, name){
        this->name = "Laptop";
        this->weight = 5;
        this->size = 50;
        this->typeOfMonitor = 1900;
    }

    void WorkOnLaptop() {
        cout << "You start watch Monitor    " << endl;
    }
};

class PS : protected Static {
    int size;
    string model;
    string type;
public:

    PS(string name, int weight, int size, string model, string type) : Static(size, model, weight, name) {
        this->name = "Laptop";
        this->weight = 5;
        this->size = 50;
        this->type = "working";
        this->model = "Sony";
    }

    void WorkOnLaptop() {
        cout << "You start work on laptop" << endl;
    }
};

int main()
{
    while (true) {
        int UserChoose;
        Mobile obj = Mobile(30,"Xiaomi" , "Phone" , 30);
        Static obj2 = Static(50, "Lenovo", 30, "PC");
        
        cout << "Choose Gadget 1 - 2" << endl;
        cin >> UserChoose;
        if (UserChoose == 1) {
            obj.BuySomething();
        }
        if (UserChoose == 2) {
            obj2.BuySomething();
            
        }

    }
}

