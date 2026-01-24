// 290. Word Pattern
#include<iostream>
#include<unordered_map>
#include <sstream>
#include <vector>
using namespace std;

bool wordPattern(string pattern, string s){

    vector<string> words;
    string word;
    stringstream ss(s);

    while (ss >> word){
        words.push_back(word);
    }
    if (pattern.size() != words.size())
        return false;

    unordered_map<char, string> p2w;
    unordered_map<string, char> w2p;

    for (int i = 0; i < pattern.size(); i++)
    {
        char p = pattern[i];
        string w = words[i];

        // check pattern → word
        if (p2w.count(p) && p2w[p] != w)
            return false;

        // check word → pattern
        if (w2p.count(w) && w2p[w] != p)
            return false;

        p2w[p] = w;
        w2p[w] = p;
    }

    return true;
}

int main(){
    string pattern = "abba";
    string s = "dog cat cat dog";

    cout << wordPattern(pattern, s) << endl;

    return 0;
}