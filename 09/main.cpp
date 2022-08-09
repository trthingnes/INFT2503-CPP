#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1 = {3, 3, 12, 14, 16, 25, 30};
    vector<int> v2 = {2, 3, 12, 14, 24};

    auto over_15 = find_if(v1.begin(), v1.end(), [](auto &n){ return n > 15; });
    cout << "First element over 15 is number " << (over_15 - v1.begin()) << endl;

    auto is_equal = equal(v1.begin(), v1.begin() + 4, v2.begin(), [](int &a, int &b){
        return abs(a - b) < 2;
    });
    cout << "Ranges are " << (is_equal ? "equal." : "not equal.") << endl;

    vector<int> vec = {};
    vec.resize(v1.size());

    replace_copy_if(v1.begin(), v1.end(), vec.begin(), [](auto &n){ return n % 2 == 1; }, 100);
    for (auto n : vec) {
        cout << n << " ";
    }
}