//
// Created by czr on 2021/11/29.
//

#include "p187.h"
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

vector<string> P187Solution1::findRepeatedDnaSequences(string s) {
    vector<string> ans;
    unordered_map<string, int> m;
    int l = s.length();
    for(int i=0; i+9<l; i++) {
        string t = s.substr(i, 10);
        int c = m.count(t);
        //printf("%s %d\n", s.c_str(), c);
        if (c == 0){
            m.insert(pair<string, int>(t, 1));
        } else if (c == 1) {
            if (m[t] == 1) {
                ans.push_back(t);
                m[t]++;
            } else {
                m[t]++;
            }
        }
    }
    return ans;
}

vector<string> P187Solution3::findRepeatedDnaSequences(string s) {
    vector<string> ans;
    int32_t N = 1e5+10, P=131313;
    int h[N];
    int p[N];
    int l = s.length();
    unordered_map<int, int> m;
    p[0] = 1;
    for(int i=1; i<=l; i++){
        h[i] = (int)(h[i-1]*P + s.at(i));
        p[i] = (int)(p[i-1]*P);
    }
    for(int i=1; i+9<=l; i++){
        int j = i+9;
        int hash = h[j] - h[i-1] * p[j-i+1];
        if(m[hash] == 1){
            ans.push_back(s.substr(i, 10));
        }
        m[hash]++;
    }
    return ans;
}

vector<string> test(string s) {
    P187Solution1 solution1;
    P187Solution3 solution3;
    return solution3.findRepeatedDnaSequences(s);
}

