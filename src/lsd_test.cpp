#include "lsd.h"
#include <algorithm>
#include <gtest/gtest.h>

TEST(lsd, SimpleStrings) {
    vector<string> test_list1 = {
        "January",
        "Februar",
        "MarthMa",
        "AprilAp",
        "MayMayy",
        "JuneJun",
        "JulyJul",
        "AugustA",
        "Septemb",
        "October",
        "Novembe",
        "Decembe",
    };
    vector<string> test_list2 = test_list1;

    lsd_sort(test_list1);
    sort(test_list2.begin(), test_list2.end());
    
    EXPECT_EQ(test_list1, test_list2);
}

TEST(lsd, DegitStrings) {
    vector<string> test_list1 = {
        "83246",
        "15832",
        "78254",
        "81264",
        "12485",
        "82169",
        "92781",
        "87245",
        "87245",
        "87999",
        "11111",
        "01250",
    };
    vector<string> test_list2 = test_list1;

    lsd_sort(test_list1);
    sort(test_list2.begin(), test_list2.end());
    
    EXPECT_EQ(test_list1, test_list2);
}

TEST(lsd, CombinedStrings) {
    vector<string> test_list1 = {
        "8A3ff2g*&46",
        "15832rtue))",
        "o8fd2i54oru",
        "8126ioSay4$",
        "124#@8lf5da",
        "828721Fs169",
        "v2796^^^*81",
        "87(2)usy4g5",
        "87sa2g4sad5",
    };
    vector<string> test_list2 = test_list1;

    lsd_sort(test_list1);
    sort(test_list2.begin(), test_list2.end());
    
    EXPECT_EQ(test_list1, test_list2);
}

