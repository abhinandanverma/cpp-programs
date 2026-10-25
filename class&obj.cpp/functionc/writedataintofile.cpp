
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Open file for writing
    ofstream fout("student.txt");

    // Write data into file
    fout << "Hello Abhinandan";

    // Close the file
    fout.close();

    // Open file for reading
    ifstream fin("student.txt");

    string text;

    // Read data from file
    getline(fin, text);

    // Display file data
    cout << text << endl;

    // Close the file
    fin.close();

    return 0;
}
