#include <string>
#include <gtest/gtest.h>

const std::string toRobbersLanguage(std::string const & english);

TEST(RobbersLanguage, TwoLetters) {
    EXPECT_EQ("lole", toRobbersLanguage("le"));
}


