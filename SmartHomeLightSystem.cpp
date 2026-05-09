#include<iostream>
#include<string>
using namespace std;

class SmartLight
{
    string brand;
    int brightness;
    bool isOn;

public:

    //  Default Constructor
    SmartLight()
    {
        brand = "Unknown";
        brightness = 50;
        isOn = false;
    }

    //  Parameterized Constructor
    SmartLight(string b, int br, bool status)
    {
        brand = b;
        brightness=br;
        isOn=status;

    }
     void increaseBrightness()
    { 
        if(brightness+10>100)
        brightness=100;
        else
      brightness+=10;
    }
    void decreasebrightness()
    {
        if (brightness-10<0)
        brightness=0;
        else 
        brightness-=10;
    }


    void turnOn()
    {
        isOn = true;
        cout << "Light ON\n";
    }

    void turnOff()
    {
        isOn = false;
        cout << "Light OFF\n";
    }

  



    void displayStatus()
    {
        cout << "\nBrand: " << brand;
        cout << "\nStatus: " << (isOn ? "ON" : "OFF");
        cout << "\nBrightness: " << brightness << endl;
    }

    ~SmartLight()
    {
        cout << "Object destroyed\n";
    }
};

int main()
{
    SmartLight light1;                     // Default constructor
    SmartLight light2("Philips", 101, 1);   // Parameterized constructor

    cout << "\n--- Light 1 ---";
    light1.turnOn();
    light1.increaseBrightness();
    light1.displayStatus();

    cout << "\n--- Light 2 ---";
    light2.decreasebrightness();
    light2.turnOff();
    light2.displayStatus();

    return 0;
}
