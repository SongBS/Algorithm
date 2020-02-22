#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
  
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    for (unsigned int i = 0; i < participant.size(); i++) {
        if (participant[i] != completion[i]) {
            return participant[i];
        }
    }
    return *participant.end();
}


int main()
{
    vector<string> participant = { "leo", "kiki", "eden" }; 
    vector<string> completion = { "eden", "kiki" };

    cout << solution(participant, completion) << endl;
    return 0;
}