#include <iostream>  
#include <string>  
using namespace std;
class Processor {
private:
    string brand;
    float speed; // ���  

public:
    Processor(const string& b, float s) : brand(b), speed(s) {}

    void display() const {
        cout << "��������: " << brand << ", ��������: " << speed << " ���\n";
    }
};

class RAM {
private:
    int size; // ��  
   string type; // DDR4, DDR5, ����  

public:
    RAM(int s, const string& t) : size(s), type(t) {}

    void display() const {
        cout << "���������� ���'���: " << size << " ��, ���: " << type << "\n";
    }
};

class HardDrive {
private:
    int capacity; // ��  
    string type; // HDD ��� SSD  

public:
    HardDrive(int c, const string& t) : capacity(c), type(t) {}

    void display() const {
        cout << "�������� ����: " << capacity << " ��, ���: " << type << "\n";
    }
};

class GraphicsCard {
private:
    string brand;

public:
    GraphicsCard(const string& b) : brand(b) {}

    void display() const {
        cout << "³��������: " << brand << "\n";
    }
};

class Battery {
private:
    int capacity; // ���  

public:
    Battery(int c) : capacity(c) {}

    void display() const {
        cout << "�������: " << capacity << " ���\n";
    }
};

class OperatingSystem {
private:
    string name;

public:
    OperatingSystem(const string& n) : name(n) {}

    void display() const {
        cout << "���������� �������: " << name << "\n";
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
        cout << "������������ ��������:\n";
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
    myLaptop.displaySpecifications(); // �������� ������������ ��������  

    return 0;
}