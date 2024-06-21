#include "lsd.h"

void lsd_sort(vector<string>& arr) {
    int count = arr[0].length();
    
    while (count > 0) {
        vector<int> keys(256, 0);
        count--;
        vector<string> tmp = arr;
        
        for (string s : arr) {
            keys[(int)s[count]]++;
        }

        for (int i = 1; i < 256; i++) {
            keys[i] += keys[i - 1];
        }

        for (int i = arr.size() - 1; i >= 0; i--) {
            keys[(int)arr[i][count]]--;
            int ind = keys[(int)arr[i][count]];
            tmp[ind] = arr[i];
        }

        arr = std::move(tmp);
    }
}
