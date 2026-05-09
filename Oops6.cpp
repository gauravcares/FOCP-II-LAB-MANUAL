// CONvert  FAHRIENTITE TO CELSIUIS
#include<iostream>
using namespace std;
class temperature
{    
    float celsius,fahrenheit;
   public:
    void input_temperature()
    {
        cout<<"enter the value of fahrenheit=";
        cin>>fahrenheit;
      
    }
    float convert()
    {
        celsius=(fahrenheit-35)*9.0/5.0;
        return celsius;
    }
    void display()
    {
     cout<<"enter the value of celsius="<<celsius<<endl;
       cout<<"enter the value of fahrenheit="<<fahrenheit<<endl;
    }
};
int main()
{
    temperature t1;
    t1.input_temperature();
    t1. convert();
  t1.display();
return 0;
}
