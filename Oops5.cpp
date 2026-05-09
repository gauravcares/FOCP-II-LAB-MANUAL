#include<iostream>
using namespace std;
class book
{
     string title;
     string author;
     double price;
     public:
     void input_details()
     {
        cout<<"enter the title of the book=";
        getline(cin,title);
        cout<<"enter the author name =";
        getline(cin,author);
        cout<<"enter the price=";
        cin>>price;

     }
     void display_details()
     {
      cout<<"the title is="<<title<<endl;
      cout<<"author name is="<<author<<endl;
      cout<<"the price is ="<<price<<endl;

     }

};
int main()
{
   book b1;
   b1.input_details();
   b1.display_details();
   return 0;

}
