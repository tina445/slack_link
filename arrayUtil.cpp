#include <iostream>
#include <vector>

using namespace std;

int input_num;

vector<int> arr1;
vector<int> arr2;

vector<int> arrUnion(vector<int> &vec){
    vector<int> cnt(10, 0);
    vector<int> ret;

    for (int i = 0; i < 10; i++){
        cnt[vec[i]]++;
        
    }

    for (int i = 0; i < 10; i++){
        if (cnt[i]) ret.emplace_back(i);
    }

    return ret;
}

vector<int> arrSum(vector<int> &vec1, vector<int> &vec2) {
    vector<int> cnt1(10, 0), cnt2(10, 0);
    vector<int> ret;

    for (int i = 0; i < 10; i++){
        cnt1[vec1[i]]++;
        cnt2[vec2[i]]++;
    }

    for (int i = 0; i < 10; i++){
        if (cnt1[i] || cnt2[i]) ret.emplace_back(i);
    }

    return ret;
}

vector<int> arrProduct(vector<int> &vec1, vector<int> &vec2) {
    vector<int> cnt1(10, 0), cnt2(10, 0);
    vector<int> ret;

    for (int i = 0; i < 10; i++){
        cnt1[vec1[i]]++;
        cnt2[vec2[i]]++;
    }

    for (int i = 0; i < 10; i++){
        if (cnt1[i] && cnt2[i]) ret.emplace_back(i);
    }

    return ret;
}


int main(){
    int x;
    
    for (int i = 0; i < 10; i++) {
        cin >> x;
        arr1.emplace_back(x);
    }

    for (int i = 0; i < 10; i++) {
        cin >> x;
        arr2.emplace_back(x);
    }
    

    vector<int> res = arrUnion(arr1);

    for (auto e : res) cout << e << " ";
    cout << "\n";

    res = arrSum(arr1, arr2);

    for (auto e : res) cout << e << " ";
    cout << "\n";

    res = arrProduct(arr1, arr2);
    for (auto e : res) cout << e << " ";
    cout << "\n";
}