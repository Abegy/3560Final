/**
 * @file main.cc
 * @brief program to take an input txt file and output the amount of characters and lines the file has
 * @author Aaron Begy
 * 
 */


#include <fstream>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

int countChar(string input);
int countLine(string input);

/**
 * @file main.cc
 * @fn main
 * @brief this will run the programs functions in a way decided by the user, and then output the test results
 * @param argc is the number of arguments 
 */


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
/**
 * @file main.cc
 * @fn countLine
 * @brief outputs the number of lines in a string
 */
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
/**
 * @file main.cc
 * @fn countChar
 * @brief this function will output the number of characters 
 */
int countChar(string pName)
{
    return pName.size();
}