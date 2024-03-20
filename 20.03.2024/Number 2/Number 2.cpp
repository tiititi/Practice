#include <iostream>
#include <string>
#include <cctype>
#include <unordered_map>
#include <sstream>

using namespace std;

string cleanString(const string& str)
{
    string cleaned;
    for (char c : str)
    {
        if (isalnum(c))
        {
            cleaned += tolower(c);
        }
        else if (c == ' ')
        {
            cleaned += c;
        }
    }
    return cleaned;
}

int main()
{
    string input;
    getline(cin, input);

    string cleaned = cleanString(input);

    unordered_map<string, int> wordCount;
    string word;
    istringstream iss(cleaned);

    while (iss >> word) {
        wordCount[word]++;
    }

    for (const auto& pair : wordCount) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}