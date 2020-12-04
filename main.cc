/*
Aaron Begy
Hands-On CS 3560 
12/3/2020
*/

#include <fstream>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

int countChar(string input);
int countLine(string input);


int main(int argc, char *argv[])
{ 
    fstream input;
    string pName;
    if(argc > 1)
    {
        
        string filename = argv[1];
        input.open(filename);
        if(input.fail())
        {
            cout << "Cannot Open file, try again" << endl;
            return 0;
        }

        char c;
        input.get(c);
        while(!input.eof())
        {
            pName += c;
            input.get(c);
        }
        cout << countLine(pName) << " Lines." << endl;
        cout << countChar(pName) << " Characters." << endl;
    }
    else{
        cout << countLine("Ohio University") << " Lines." << endl;
        cout << countChar("Athens") << " Characters." << endl;
    }
    input.close();
    return 0;
}

int countLine(string pName)
{
    int count = 1;
    for(size_t i = 0; i < pName.size(); i++)
    {
        if(pName[i] == '\n')
        {
       count++;
        }
    }
    return count; 
}

int countChar(string pName)
{
    return pName.size();
}