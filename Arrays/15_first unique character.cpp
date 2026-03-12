#include <iostream>
using namespace std;

int main() {
    string s = "loveleetcode";

    int freq[26] = {0};

    // Step 1: Count frequency
    for(int i = 0; i < s.length(); i++) {
        freq[s[i] - 'a']++;
    }

    // Step 2: Find first unique character
    for(int i = 0; i < s.length(); i++) {
        if(freq[s[i] - 'a'] == 1) {
            cout << i;
            return 0;
        }
    }

    cout << -1;
}
