#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

vector<string> splitToTokens(string& input)
{
    istringstream ss(input);
    vector<string> tokens;
    
    for(string singleToken; ss >> singleToken;) 
        tokens.push_back(singleToken);    

    return tokens;
}

void countUniqueTokens(string& input)
{
    vector<string> tokens = splitToTokens(input);
    
    sort(tokens.begin(), tokens.end());
    tokens.erase(std::unique(tokens.begin(), tokens.end()), tokens.end());
    
    cout << "N of unique words: " << tokens.size() << endl;
}


int main()
{
    string input;
    getline(cin, input);
    countUniqueTokens(input);
}
