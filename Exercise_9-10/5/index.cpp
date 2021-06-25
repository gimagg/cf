#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{

    int others = 0,
        vowels = 0,
        consonants = 0;

    string word;

    cout << "Enter words (q to quit)\n";

    // read a word at a time till a single 'q'
    while ( cin >> word  &&  word != "q" )
    {
        // consider only the first letter of the word
        char c = word[0];
        if ( isalpha(c) )
        {
            if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                 c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
            {
                ++vowels;
            }
            else
            {
                ++consonants;
            }
        }
        else
        {
            ++others;
        } 
    }
    cout << vowels << " words beginning with vowels\n";
    cout << consonants << " words beginning with consonant\n";
    cout << others << " others\n";

    return 0;
}