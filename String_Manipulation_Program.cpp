#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str = "Good ";

    //Concatenation
    string greating = str + "Morning";
    cout << "Concatenation : " <<greating <<endl;

    /*Now greating has : Good Morning*/

    //Substring
    string part = greating.substr(5,7);
    cout << "Substring : " <<part <<endl;

    //Find
    size_t pos = greating.find("Morning");
    cout << "Find : 'Morning' found at position " <<pos <<endl;

    //Replace
    string replaced = greating;
    replaced.replace(pos , 7 , "Evening");
    cout << "Replace : " <<replaced <<endl;

    //Insert
    string inserted = greating;
    inserted.insert(12 ," Handsome");
    cout << "Insert : " <<inserted <<endl;

    //Erase
    string erased = inserted;
    erased.erase(12 , 9);
    cout <<"Erase : " <<erased <<endl;

    //To Uppercase
    string uppercase = greating;
    for (char &c : uppercase) c = toupper(c);
    cout <<"To Uppercase : " <<uppercase <<endl;

    //To Lowercase
    string lowercase = greating;
    for (char &c : lowercase) c = tolower(c);
    cout <<"To Lowercase : " <<lowercase <<endl;


    return 0;
}