#include <iostream>  
#include <string>  
using namespace std;
class Processor {
private:
    string brand;
    float speed; // Ггц  

public:
    Processor(const string& b, float s) : brand(b), speed(s) {}

    void display() const {
        cout << "Процесор: " << brand << ", швидкість: " << speed << " ГГц\n";
    }
};

class RAM {
private:
    int size; // ГБ  
   string type; // DDR4, DDR5, тощо  

public:
    RAM(int s, const string& t) : size(s), type(t) {}

    void display() const {
        cout << "Оперативна пам'ять: " << size << " ГБ, тип: " << type << "\n";
    }
};

class HardDrive {
private:
    int capacity; // ГБ  
    string type; // HDD або SSD  

public:
    HardDrive(int c, const string& t) : capacity(c), type(t) {}

    void display() const {
        cout << "Жорсткий диск: " << capacity << " ГБ, тип: " << type << "\n";
    }
};

class GraphicsCard {
private:
    string brand;

public:
    GraphicsCard(const string& b) : brand(b) {}

    void display() const {
        cout << "Відеокарта: " << brand << "\n";
    }
};

class Battery {
private:
    int capacity; // мАг  

public:
    Battery(int c) : capacity(c) {}

    void display() const {
        cout << "Батарея: " << capacity << " мАг\n";
    }
};

class OperatingSystem {
private:
    string name;

public:
    OperatingSystem(const string& n) : name(n) {}

    void display() const {
        cout << "Операційна система: " << name << "\n";
    }
};

class Laptop {
private:
    Processor processor;
    RAM ram;
    HardDrive hardDrive;
    GraphicsCard graphicsCard;
    Battery battery;
    OperatingSystem os;

public:
    Laptop(Processor p, RAM r, HardDrive h, GraphicsCard g, Battery b, OperatingSystem o)
        : processor(p), ram(r), hardDrive(h), graphicsCard(g), battery(b), os(o) {}

    void displaySpecifications() const {
        cout << "Специфікації ноутбука:\n";
        processor.display();
        ram.display();
        hardDrive.display();
        graphicsCard.display();
        battery.display();
        os.display();
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    Processor proc("Intel Core i7", 3.5);
    RAM ram(16, "DDR4");
    HardDrive hdd(512, "SSD");
    GraphicsCard gpu("Nvidia GTX 1660");
    Battery battery(5000);
    OperatingSystem os("Windows 10");

    Laptop myLaptop(proc, ram, hdd, gpu, battery, os);
    myLaptop.displaySpecifications(); // Показати специфікації ноутбука  

    return 0;
}