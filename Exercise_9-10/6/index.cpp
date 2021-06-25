#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("text.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText))
    {
        // Output the text from the file
        cout << myText << endl;
        cout << "Size: " << myText.size() << endl;
    }

    // Close the file
    MyReadFile.close();
}