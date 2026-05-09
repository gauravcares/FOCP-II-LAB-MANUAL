// online learning platform
#include<iostream>
 using namespace std;

 class course
 {
  string course_name;
  string instructor_name;
  int courseduration;

  //parastermised construtor
  course(string c,string i,int w)
  {
  course_name=c;
  instructor_name=i;
  courseduration=w;
  }
  void display()
  {
    cout<<"course name"<<course_name;
    cout<<"instructor name"
  }


 };
