#include <sstream>
#include <iostream>
#include <windows.h>





using namespace std;

void kylskapMedWhileTrue()
{
    SetConsoleOutputCP(1252);


    cout << "V�lkommen till kylsk�psloopen 1" << endl;
 

 
    while (true)
    {
        int temp2;
        string temp;

        cout << "Vilken temp har kylsk�pet? " << endl;
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
            cout << "F�r kallt" << endl;
        }
        if(temp2 >= 8)
        {
            cout << "F�r varmt" << endl;
        }
        if (temp2 > 2 || temp2 < 8) 
        {
            cout << "Lagom" << endl;
        }
    }
    cout << "L�mnar kylsk�psloopen 1" << endl;

}

void kylskapMedWhileVillkor() 
{
    SetConsoleOutputCP(1252);

    cout << "V�lkommen till kylsk�psloopen 2" << endl; 
    double temperatur = 0; 
    while (temperatur > -273) 
    {
        int temp2;
        string temp;

        cout << "Vilken temp har kylsk�pet? (om du vill avbryta skriv (avbryt)) " << endl;
        cin >> temp;

        stringstream ss;
        ss << temp;
        ss >> temp2;
        if (temp2 <= 2)
        {
            cout << "F�r kallt" << endl;
        }
        if (temp2 >= 8)
        {
            cout << "F�r varmt" << endl;
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
    
    cout << "L�mnar kylsk�psloopen 2" << endl;
}

int main()
{
    //kylskapMedWhileTrue ();
    kylskapMedWhileVillkor();
}