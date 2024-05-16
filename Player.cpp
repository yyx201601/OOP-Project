#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(std::string name, int level) : name(name), level(level) {}

string Player::getName() const {
    return name;
}

int Player::getLevel() const {
    return level;
}

vector<string> Player::getAchievements() const {
    return achievements;
}

void Player::setName(const string &name) {
    this->name = name;
}

void Player::setLevel(int level) {
    this->level = level;
}

void Player::addAchievement(const string &achievement) {
    achievements.push_back(achievement);
}

void Player::displayInfo() const {
    cout << "Player: " << name << "\nLevel: " << level << "\nAchievements:\n";
    for (const auto& achievement : achievements) {
        cout << "- " << achievement << "\n";
    }
}
