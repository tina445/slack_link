#include <iostream>
#include <string>

using namespace std;

bool digit(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (!isdigit(str[i])) return false;
    }

    return true;
}

int main() {
    string str, ret{}, sig; 
    int err{};
    
    while (1) {
        if (err > 2) {
            ret = "error";
            break;
        }

        cin >> str;
        int size{str.length()};
        if (str[0] == '-') {
            sig = '-';
            str.erase(str.begin());
        }
        
        if (!digit(str) || size >= 20) {
            cout << "다시 입력해주세요.\n";
            err++;
            continue;
        }
    
    int cnt{};
    for (int i = str.length()-1; i >= 0; i--) {
        ret = str[i] + ret;
        if(++cnt % 3 == 0 && i != 0) ret = ',' + ret;
    }
        break;
    }

    cout << sig + ret << "\n";
}