#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

/*
switch (l) {
        case 'a':
            return 0;
            break;
        case 'b':
            return 1;
            break;
        case 'c':
            return 2;
            break;
        case 'd':
            return 3;
            break;
        case 'e':
            return 4;
            break;
        case 'f':
            return 5;
            break;
        case 'g':
            return 6;
            break;
        case 'h':
            return 7;
            break;
        case 'i':
            return 8;
            break;
        case 'j':
            return 9;
            break;
        case 'k':
            return 10;
            break;
        case 'l':
            return 11;
            break;
        case 'm':
            return 12;
            break;
        case 'n':
            return 13;
            break;
        case 'o':
            return 14;
            break;
        case 'p':
            return 15;
            break;
        case 'q':
            return 16;
            break;
        case 'r':
            return 17;
            break;
        case 's':
            return 18;
            break;
        case 't':
            return 19;
            break;
        case 'u':
            return 20;
            break;
        case 'v':
            return 21;
            break;
        case 'w':
            return 22;
            break;
        case 'x':
            return 23;
            break;
        case 'y':
            return 24;
            break;
        case 'z':
            return 25;
            break;
        default:
            return -1;
    };
    return -1;

*/

int convert(char l) {
    vector<char> chars = {'a','b','c','d','e','f','g','h','i','j','k','l',
    'm','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,
    21,22,23,24,25};

    for (unsigned int i = 0; i < nums.size(); i++) {
        if (l == chars[i] || l == toupper(chars[i])) {
            return nums[i];
        }
    }
    return -1;
}

char convertBack(int n) {
    vector<char> chars = {'a','b','c','d','e','f','g','h','i','j','k','l',
    'm','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,
    21,22,23,24,25};

    for (unsigned int i = 0; i < nums.size(); i++) {
        if (n == nums[i]) {
            return chars[i];
        }
    }
    return -1;
}

int main() {
    vector<char> charUI = {};
    vector<int> encrypt = {};
    string userInput;

    cout << "Input >> ";
    cin >> userInput;

    for (unsigned int i = 0; i < userInput.length(); i++) {
        charUI.push_back(userInput[i]);
    }

    for (unsigned int i = 0; i < charUI.size(); i++) {
        int n = convert(charUI[i]);
        encrypt.push_back(n);
    }

    cout << "Encrypted >> ";
    for (unsigned int i = 0; i < encrypt.size(); i++) { cout << encrypt[i] << ' '; }
}