#include<iostream>
using namespace std;

int main()
{
    /* Q1:  Ramesh’s basic salary is input through the keyboard. His
    dearness allowance is 40% of basic salary, and house rent
    allowance is 20% of basic salary. Write a program to calculate
    his gross salary */
    
    float sal, dear_allowance, house_allowance, gross_sal;

    cout<<endl<<"Question 1:";
    cout<<endl<<"Enter basic salary =";
    cin>>sal;

    dear_allowance= 0.4*sal;
    house_allowance= 0.2*sal;

    gross_sal= dear_allowance + house_allowance + sal;

    cout<<endl<<"Dearness Allowance = "<<dear_allowance;
    cout<<endl<<"House rent Allowance = "<<house_allowance;
    cout<<endl<<"Gross Salary is = "<<gross_sal;

    return 0;

}


    



     


    



    



 



    











