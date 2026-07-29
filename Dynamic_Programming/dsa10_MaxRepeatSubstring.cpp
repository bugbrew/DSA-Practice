// 1668. Maximum Repeating Substring

#include <iostream>
#include <string>
using namespace std;

int maxRepeating(string sequence, string word)
{
    int k = 0;
    string temp = word;

    while (sequence.find(temp) != string::npos)
    {
        k++;
        temp += word;
    }

    return k;
}

int main(){

    string sequence, word;

    cout << "Enter sequence: ";
    cin >> sequence;

    cout << "Enter word: ";
    cin >> word;

    cout << "Maximum k-repeating value = "
         << maxRepeating(sequence, word);

    return 0;
    
}