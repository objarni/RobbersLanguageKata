#include <string>
#include <gtest/gtest.h>

const std::string toRobbersLanguage(std::string const & english);

TEST(RobbersLanguage, SingleConsonant) {
    EXPECT_EQ("lol", toRobbersLanguage("l"));
}

TEST(RobbersLanguage, AnotherSingleConsonant) {
    EXPECT_EQ("ror", toRobbersLanguage("r"));
}

TEST(RobbersLanguage, SingleVowel) {
    EXPECT_EQ("o", toRobbersLanguage("o"));
}

