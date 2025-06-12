#include<bits/stdc++.h>
using namespace std;

class Student{
    string name;
    string address;
    int roll_number;
    int attendance ;
    float cgpa;
    public:
    Student(string name, string address, int roll, float cgpa) {
	   this->name = name;
	   this->address = address;
	   this->roll_number = roll;
	   this->attendance = 0;
	   this->cgpa = cgpa;
   }
    public:
    void mark_attendance()
    {
        this->attendance +=1;
    }
    public:
    void display_details()
    {
        cout<<"The Name of Student is "<<this->name << " and address is "<<this->address<< " roll number is "<<this->roll_number<< " attendace is " <<this->attendance <<" cgpa "<<this->cgpa<<endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Student ram("ram", "Delhi", 1, 9.5);
    ram.mark_attendance();
    ram.mark_attendance();
    ram.mark_attendance();
    ram.display_details();
    return 0;
}