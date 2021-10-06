#include <sstream>
#include <iostream>
#include <windows.h>





using namespace std;

void kylskapMedWhileTrue()
{
    SetConsoleOutputCP(1252);


    cout << "Välkommen till kylskåpsloopen 1" << endl;
 

 
    while (true)
    {
        int temp2;
        string temp;

        cout << "Vilken temp har kylskåpet? " << endl;
        cin >> temp;

        stringstream ss;
        ss << temp;

        ss >> temp2;

        if (temp2 < -273) 
        {
            break;
        }
        if (temp2 <= 2) 
        {
            cout << "För kallt" << endl;
        }
        if(temp2 >= 8)
        {
            cout << "För varmt" << endl;
        }
        if (temp2 > 2 || temp2 < 8) 
        {
            cout << "Lagom" << endl;
        }
    }
    cout << "Lämnar kylskåpsloopen 1" << endl;

}

void kylskapMedWhileVillkor() 
{
    SetConsoleOutputCP(1252);

    cout << "Välkommen till kylskåpsloopen 2" << endl; 
    double temperatur = 0; 
    while (temperatur > -273) 
    {
        int temp2;
        string temp;

        cout << "Vilken temp har kylskåpet? (om du vill avbryta skriv (avbryt)) " << endl;
        cin >> temp;

        stringstream ss;
        ss << temp;
        ss >> temp2;
        if (temp2 <= 2)
        {
            cout << "För kallt" << endl;
        }
        if (temp2 >= 8)
        {
            cout << "För varmt" << endl;
        }
        if (temp2 > 2 || temp2 < 8)
        {
            cout << "Lagom" << endl;
        }
        if (temp == "avbryt") 
        {
            temperatur = -274;
        }
    }
    
    cout << "Lämnar kylskåpsloopen 2" << endl;
}

int main()
{
    //kylskapMedWhileTrue ();
    kylskapMedWhileVillkor();
}