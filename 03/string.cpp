#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main() {
    // A
    string word1, word2, word3;
    cin >> word1 >> word2 >> word3;

    // B
    ostringstream oss;
    oss << word1 << " " << word2 << " " << word3 << ".";
    string sentence = oss.str();
    cout << sentence << endl;

    // C
    cout << "Length 1: " << word1.length() << endl;
    cout << "Length 2: " << word2.length() << endl;
    cout << "Length 3: " << word3.length() << endl;
    cout << "Total: " << sentence.length() << endl;

    // D
    string sentence2 = sentence;

    // E
    if (sentence2.length() > 12) {
        sentence2.replace(9, 3, "xxx");
        cout << sentence << endl << sentence2 << endl;
    }

    // F
    if (sentence.length() >= 5) {
        string sentence_start = sentence.substr(0, 5);
        cout << sentence << endl << sentence_start << endl;
    }

    // G
    if (sentence.contains("hello")) {
        cout << "Inneholder hallo!" << endl;
    }

    // H
    int count = 0;
    int pos = sentence.find("er", 0);
    while (pos != string::npos) {
        count++;
        pos = sentence.find("er", pos + 1);
    }
    cout << "Setningen inneholder " << count << " 'er'-er." << endl;
}