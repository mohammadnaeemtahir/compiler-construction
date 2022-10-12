#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch;
    fstream inputFile;
    inputFile.open("datafile.txt", ios::in); // text file open in read mode

    if (inputFile.is_open())
    {
        while (!inputFile.eof() && inputFile.get(ch)) // loop until not the end of file and there's no character left in the text file
        {
            if (ch == '+')
            {
                cout << "Plus: +" << endl;
            }
            else if (ch == '-')
            {
                cout << "Dash (minus): -" << endl;
            }
            else if (ch == '*')
            {
                cout << "Asterisk: *" << endl;
            }
            else if (ch == '/')
            {
                cout << "Forward_slash: /" << endl;
            }
            else if (ch == '=')
            {
                cout << "Assignment_operator: =" << endl;
            }
            else
            {
                continue;
            }
        }
    }
    else
    {
        cout << "File is missing." << endl;
    }

    inputFile.close(); // close the text file
    return 0;
}