/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << setw(10)<<setprecision(2)<<fixed;
	
	double salary,netSalary;
	int etype,otHrs,otRate;
	
	cout<<"Enter Employeement type : ";
	cin >>etype;
	
	cout<<"Enter Salary : ";
	cin >>salary;
	
	cout<<"Enter OT Hours : ";
	cin >>otHrs;
	
	switch (etype) 
	{
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
    }
    netSalary=salary+otHrs*otRate;
    cout<<"Net Salary is : " << netSalary;
    return 0;
}
