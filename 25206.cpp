#include<iostream>
#include<string>
using namespace std;

int main(){
  float grade_sum = 0.0, num_grade_sum = 0.0;
  for(int i=0; i<20; i++){
    string name, grade; float num_grade;
    cin>>name>>num_grade>>grade;
    grade_sum += num_grade;
    if(grade=="P") grade_sum -= num_grade;
    else if(grade=="A+") num_grade_sum += num_grade*4.5;
    else if(grade=="A0") num_grade_sum += num_grade*4.0;
    else if(grade=="B+") num_grade_sum += num_grade*3.5;
    else if(grade=="B0") num_grade_sum += num_grade*3.0;
    else if(grade=="C+") num_grade_sum += num_grade*2.5;
    else if(grade=="C0") num_grade_sum += num_grade*2.0;
    else if(grade=="D+") num_grade_sum += num_grade*1.5;
    else if(grade=="D0") num_grade_sum += num_grade*1.0;
  }
  float t = num_grade_sum/grade_sum;
  cout<<t;
  return 0;
}