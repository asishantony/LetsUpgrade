#include<iostream>
using namespace std;

int main()
{
    /* Q4 Temperature of a city in Fahrenheit degrees is input through
    the keyboard. Write a program to convert this temperature
    into Centigrade degrees. */
    
    float fahren_tmp, centi_temp;

    cout<<endl<<"Enter temperature of city in Fahrenheit degrees = ";
    cin>>fahren_tmp;
    
    centi_temp= (fahren_tmp-32)*5/9;
    
    cout<<endl<<"Temperature of city in centigrades = "<<centi_temp;

    return 0;

}