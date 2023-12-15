//
//  main.cpp
//  class Laptop
//
//  Created by Michalis on 15.12.2023.
//

#include <iostream>
#include <string.h>
using namespace std;


class Processor{
private:
    string model;
public:
    Processor(const string& model):model(model){};
    void showPr() const{
        cout<<"Model: "<<model<<endl;
    }
};

class Screen{
private:
    int size;
public:
    Screen(const int &size):size(size){};
    void showSc() const{
        cout<<"Size of Screen: "<<size<<" inches"<<endl;
    }
};

class Battery{
private:
    int capacity;
public:
    Battery(const int &capacity):capacity(capacity){};
    void showBt() const{
        cout<<"Сapacity: "<<capacity<<"mAh"<<endl;
    }
};

class Laptop{
private:
    Processor processor;
    Screen screen;
    Battery battery;
public:
    Laptop(const Processor &processor, const Screen &screen, const Battery &battery):processor(processor),screen(screen), battery(battery){};
    void showLaptop() const{
        cout<<"Laptop components: "<<endl;
        processor.showPr();
        screen.showSc();
        battery.showBt();
    }
};


int main() {
    
    Processor pr1("Core I7");
    Screen sc1(16);
    Battery bt1(30000);
    Laptop lp1(pr1, sc1, bt1);
    lp1.showLaptop();
    
    
    
    
    
    
    return 0;
}
