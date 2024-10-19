#include<iostream>
using namespace std;
int main()
{
        string city,country;
        cout<<"enter the city name: " <<endl;
        cin>>city;
        cin.ignore();
        cout<<"enter the country name: " <<endl;
        getline (cin,country);
        cout<<"You live in "<<city<<","<<country;
        return 0;
}
