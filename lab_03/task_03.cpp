#include <iostream>
#include <fstream>

using namespace std;
char ch, ch2;

void doubleSignDetector()
{
    if (ch == '+' && ch2 == '+')
    {
        cout << "Naeem_increament" << endl;
    }
    else if (ch == '-' && ch2 == '-')
    {
        cout << "Naeem_decreament" << endl;
    }
    else if (ch == '!' && ch2 == '=')
    {
        cout << "Naeem_not_equal" << endl;
    }
    else if (ch == '/' && ch2 == '/')
    {
        cout << "Naeem_comment" << endl;
    }
    else if (ch == '>' && ch2 == '=')
    {
        cout << "Naeem_greater_than_equals" << endl;
    }
    else if (ch == '<' && ch2 == '=')
    {
        cout << "Naeem_smaller_than_equals" << endl;
    }
    else if (ch == '&' && ch2 == '=')
    {
        cout << "Naeem_adress_assignment" << endl;
    }
}

int main()
{
    fstream inputFile;

    inputFile.open("datafile_02.txt", ios::in); // text file open in read mode

    if (inputFile.is_open())
    {
        inputFile.get(ch);
        while (!inputFile.eof() && inputFile.get(ch2)) // loop until not the end of file and there's no character left in the text file
        {
            doubleSignDetector();
            ch = ch2;
        }
    }
    else
    {
        cout << "File is missing." << endl;
    }

    inputFile.close(); // close the text file
    return 0;
}
