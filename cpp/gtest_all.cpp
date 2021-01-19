#include <string>
#include <gtest/gtest.h>

const std::string toRobbersLanguage(std::string const & english);

TEST(RobbersLanguage, Test1) {
    EXPECT_EQ("lol", toRobbersLanguage("l"));
}


TEST(RobbersLanguage, Test2) {
    EXPECT_EQ("aa", toRobbersLanguage("aa"));
}

