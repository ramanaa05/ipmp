#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0, n=s.size();
        while(i<n){
            reverse(s.begin()+i, s.begin()+min(i+k, n));
            i+=2*k;
        }
        return s;
    }
};

int main(void){
    Solution S;
    S.reverseStr("hello world", 3);
}