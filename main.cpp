#include <iostream>

using namespace std;

int main()
{
    /* Q\ Write C++ code to ask the user for four different strings (street number, city, region, and
          country) and concatenate them into a full address to display back to the user. */

    int streetNumber;
    string city, region, country;


    cout << "Please enter your Street Number: ";
    cin >> streetNumber;

    cout << "Please enter your city: ";
    cin >> city;

    cout << "Please enter your region: ";
    cin >> region;

    cout << "Please enter your country: ";
    cin >> country;

    cout << "Country: " << country <<"\nCity: " << city << "\nRegion: " << region << "\nStreet Number: "<< streetNumber << endl;


    return 0;
}
