//QUESTION 2: Letter combinations of phone number. 

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> fun(string digits) {
    vector<string> ans;
    vector<string> mp = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    ans.push_back("");

    for (int i = 0; i < digits.size(); i++) {
        vector<string> temp;
        int n = digits[i] - '0';

        for (int j = 0; j < ans.size(); j++) {
            for (int k = 0; k < mp[n].size(); k++) {
                temp.push_back(ans[j] + mp[n][k]);
            }
        }

        ans = temp;
    }

    return ans;
}

int main() {
    string digits = "32";

    vector<string> ans = fun(digits);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    cout << endl << ans.size();

    return 0;
}
