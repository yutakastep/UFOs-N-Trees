#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

void readLine(string& line, vector<string>& tokens) {
    istringstream in(line);
    string token;
    while (getline(ss, token, '|')) {
        tokens.push_back(token);
    }
}

int main() {
    //Tree tree;

    vector<string> allTokens;
    int csv_size;
    for (int i = 1; i < csv_size; ++i) {
        for (int j = 0; j < csv_size; ++j) {
            string line;
            getline(cin, line);
            readLine(line, allTokens);
        }
    }
}
