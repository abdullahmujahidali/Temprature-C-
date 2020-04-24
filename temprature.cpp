#include<iostream>
using namespace std;
//menu function
int menu()
{
    int choice;
    cout<<"1. Fahrenheit to Celsius"<<endl;
    cout<<"2. Celsius to Fahrenheit"<<endl;
    cout<<"3. Quit"<<endl;
    cin>>choice;
    return choice;
}
//Fahrenheit to Celsius function
void Fahrenheit_Celsius()
{
    //variable decleration
    float temperature_celsius,temperature_fahrenheit;
    //prompt for temperature in Fahrenheit
    cout<<"Enter the temperature in Fahrenheit: ";
    //inputs temperature in Fahrenheit
    cin>>temperature_fahrenheit;
    //As throwing an exception to check the input temperature by the user
    if((temperature_fahrenheit<0) || (temperature_fahrenheit<32)){
        // Prompt the message for reentering the value
        cout<<"INVALID Temperature .. Please Re-Enter the temperature in Fahrenheit "<<endl;
        //taking input again in case of wrong input by the user
        cin>>temperature_fahrenheit;
    }
    //calculating temperature in Celsius
    temperature_celsius=(temperature_fahrenheit-32)*(float(5)/float(9));
    //printing output
    cout<<"Temperature in Fahrenheit: "<<temperature_fahrenheit<<" Temperature in Celsius: "<<temperature_celsius<<endl;
}
//Celsius to Fahrenheit
void Celsius_Fahrenheit()
{
    //variable decleration
    float temperature_celsius,temperature_fahrenheit;
    //prompt for temperature in Celsius
    cout<<"Enter the temperature in celsius: ";
    //inputs temperature in Celsius
    cin>>temperature_celsius;
    //As throwing an exception to check the input temperature by the user
    if(temperature_celsius<0 ){
        // Prompt the message for reentering the value
        cout<<"INVALID Temperature .. Please Re-Enter the temperature in Celsius "<<endl;
        //taking input again in case of wrong input by the user
        cin>>temperature_celsius;
    }

    //calculating temperature in Fahrenheit
    temperature_fahrenheit=(temperature_celsius*(float(9)/float(5)))+32;
    //printing output
    cout<<"Temperature in Celsius: "<<temperature_celsius<<" Temperature in Fahrenheit: "<<temperature_fahrenheit<<endl;
}
int main()
{
    int choice;
    while(true)
    {
        //calling menu function
        choice=menu();
        //if choice is 1
        if(choice==1)
        {
            //calling Fahrenheit to Celsius function
            Fahrenheit_Celsius();
        }
            //if choice is 2
        else if(choice==2)
        {
            //calling Celsius to Fahrenheit function
            Celsius_Fahrenheit();
        }
            //if choice is 3
        else if(choice==3)
        {
            //exiting from program
            break;
        }
            //if choice is wrong
        else
        {
            cout<<"Wrong choice! Try again...."<<endl;
        }
    }
    return 0;
}
