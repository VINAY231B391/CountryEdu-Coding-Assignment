//QUESTION 1: Substring with Concatenation of All Words 

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> find(string s, vector<string> words) {
    vector<int> ans;
    int len = 0;

    for (int i = 0; i < words.size(); i++) {
        len += words[i].size();
    }

    for (int i = 0; i + len <= s.size(); i++) {
        string temp = s.substr(i, len);
        vector<string> a = words;

        for (int j = 0; j < a.size(); j++) {
            int pos = temp.find(a[j]);

            if (pos != string::npos) {
                temp.erase(pos, a[j].size());
            }
        }

        if (temp.size() == 0) {
            ans.push_back(i);
        }
    }

    return ans;
}

int main() {
    //Example 1
     string s = "abbakadabbakaabba";
    vector<string> words = {"abba", "ka"};
    
    // Example 2
    // string s = "wordgoodgoodwordbest";
     //vector<string> words = {"good","word","best","word"};

    vector<int> ans = find(s, words);
     if (ans.size() == 0)
    {
        cout << "No Output";
    }
    else

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
