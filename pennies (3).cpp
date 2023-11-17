/* Name: Nathan Lindblade
Date: February 12, 2023
Assignment: Homework #3
Due Date: February 15, 2023
About this project: Calculates how much money a person would have if their 
pennies doubled daily
Assumptions: Assumes the number of days will be entered as an integer

All work below was performed by Nathan Lindblade */


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     //Declarations and Initializations
     int daysWorked;
     double overall = 0.01, day, sum;
     
     //Prompt user to enter number of days
     cout << "Please enter the number of days worked: ";
     cin >> daysWorked;
     
     //If days entered is a 0 or a negative value
     while (daysWorked <= 0)
     {
         cout << "Invalid number of days. Try again " << endl;
         cout << "Please enter the number of days worked: ";
         cin >> daysWorked;
     }
     //Prints the table
     if (daysWorked > 0)
     {
         cout << endl << "Day" << "\t\t\t" << "Amount Earned" << endl <<
         "-------------------------------------------" << endl;
         for (day = 1; day <= daysWorked; day++)
         {
             cout << day << "\t\t\t$" << overall << endl;
             sum = sum + overall;
             overall = overall * 2;
         }
         //Adds up the total earnings
         cout << endl << "Total earnings: $" << sum;
     }
     
     return 0;
}





