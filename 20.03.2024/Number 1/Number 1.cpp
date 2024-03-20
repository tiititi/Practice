#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int anagram(const string& str1, const string& str2)
{
    string cleanStr1, cleanStr2;

    for (char c : str1) {
        if (!isspace(c)) {
            cleanStr1 += tolower(c);
        }
    }

    for (char c : str2) {
        if (!isspace(c)) {
            cleanStr2 += tolower(c);
        }
    }

    sort(cleanStr1.begin(), cleanStr1.end());
    sort(cleanStr2.begin(), cleanStr2.end());

    return cleanStr1 == cleanStr2;
}

int main() {
    string str1, str2;

    cout << "Введите первую строку: ";
    getline(cin, str1);

    cout << "Введите вторую строку: ";
    getline(cin, str2);

    if (anagram(str1, str2))
    {
        cout << "Анаграммы" << endl;
    }
    else
    {
        cout << "Не анаграммы" << endl;
    }

    return 0;
}