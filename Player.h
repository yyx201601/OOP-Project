#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
using namespace std;

class Player {
private:
    string name;
    int level;
    vector<string> achievements;

public:
    Player(string name, int level);

    string getName() const;
    int getLevel() const;
    vector<std::string> getAchievements() const;

    void setName(const string &name);
    void setLevel(int level);
    void addAchievement(const string &achievement);

    void displayInfo() const;
};

#endif
