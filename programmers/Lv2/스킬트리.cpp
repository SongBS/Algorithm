#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    int postion = 0;
    bool isError = false;

    for (unsigned int i = 0; i < skill_trees.size(); i++) {

        cout << "----------------------------------------------" << endl;
        string skill_tree = skill_trees[i];
        postion = 0;
        isError = false;

        for (unsigned int j = 0; j < skill_tree.size(); j++) {
            cout << skill_tree[j] << endl;
            for (unsigned int k = 0; k < skill.size(); k++) {
                if (skill_tree[j] == skill[k]) {
                    if (k != postion) {
                        isError = true;
                        break;
                    } else {
                        postion++;
                    }
                }
            }
        }
        if (isError == false) {
            answer++;
        }
    }
    return answer;
}

/*
int main()
{
    string skill = "CBD";
    vector<string> users_trees = { "BACDE", "CBADF", "AECB", "BDA" };
    //vector<string> users_trees = { "BACDE" };

    cout << "----------------------------------------------" << endl;
    cout << "skill count: " << solution(skill, users_trees) << endl;
    return 0;
}
*/

