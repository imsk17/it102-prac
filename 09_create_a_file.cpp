#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Create and open a text file
    ofstream MyFile("sayhi.txt");
    cout << "Created a file" << endl;

    // Write to the file
    MyFile << "Files can be tricky, but it is fun enough!";
    cout << "Written to file" << endl;

    // Close the file
    MyFile.close();
}
