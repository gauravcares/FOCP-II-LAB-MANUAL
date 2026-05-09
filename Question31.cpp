#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int total=0;
    float average;
    
    for(int i=0;i<10;i++)
    {
        cout<<"enter the salary of people"<<i+1<<endl;
        
        cin>>arr[i];
        total += arr[i];
    }
    average = total / 10.0;
    cout << "Average salary of 10 people: " << average << endl;
 return 0;
}
