#include <iostream>
#include <vector>

using namespace std;

int input_num;

vector<int> arr1;
vector<int> arr2;

vector<int> first_fun(vector<int> &vec){
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


int main(){
    int x;
    
    for (int i = 0; i < 10; i++) {
        cin >> x;
        arr1.emplace_back(x);
    }
    

    vector<int> res = first_fun(arr1);

    for (auto e : res) cout << e << " ";

}