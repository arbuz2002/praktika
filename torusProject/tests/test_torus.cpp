#include <gtest/gtest.h>
#include "torus.h"

// Тесты для класса Torus
TEST(TorusTests, ConstructorWithZeroCenter) {
    Torus torus(5.0, 2.0);
    EXPECT_DOUBLE_EQ(torus.getMajorRadius(), 5.0);
    EXPECT_DOUBLE_EQ(torus.getMinorRadius(), 2.0);
}

TEST(TorusTests, ConstructorWithCustomCenter) {
    Torus torus(1.0, 2.0, 3.0, 5.0, 2.0);
    EXPECT_DOUBLE_EQ(torus.getMajorRadius(), 5.0);
    EXPECT_DOUBLE_EQ(torus.getMinorRadius(), 2.0);
}

TEST(TorusTests, ExtremePointsWithZeroCenter) {
    Torus torus(5.0, 2.0);
    double xMin, xMax, yMin, yMax;
    torus.getExtremePoints(xMin, xMax, yMin, yMax);
    EXPECT_DOUBLE_EQ(xMin, -5.0);
    EXPECT_DOUBLE_EQ(xMax, 5.0);
    EXPECT_DOUBLE_EQ(yMin, -5.0);
    EXPECT_DOUBLE_EQ(yMax, 5.0);
}

TEST(TorusTests, ExtremePointsWithCustomCenter) {
    Torus torus(1.0, 2.0, 3.0, 5.0, 2.0);
    double xMin, xMax, yMin, yMax;
    torus.getExtremePoints(xMin, xMax, yMin, yMax);
    EXPECT_DOUBLE_EQ(xMin, 1.0 - 5.0);
    EXPECT_DOUBLE_EQ(xMax, 1.0 + 5.0);
    EXPECT_DOUBLE_EQ(yMin, 2.0 - 5.0);
    EXPECT_DOUBLE_EQ(yMax, 2.0 + 5.0);
}

TEST(TorusTests, SurfaceArea) {
    Torus torus(5.0, 2.0);
    EXPECT_NEAR(torus.surfaceArea(), 4 * M_PI * M_PI * 5.0 * 2.0, 1e-9);
}

TEST(TorusTests, Volume) {
    Torus torus(5.0, 2.0);
    EXPECT_NEAR(torus.volume(), 2 * M_PI * M_PI * 5.0 * 2.0 * 2.0, 1e-9);
}

TEST(InputTests, ValidPositiveInput) {
    double value;
    std::istringstream input("10.5");
    std::streambuf* orig = std::cin.rdbuf(input.rdbuf());
    EXPECT_TRUE(getPositiveDoubleInput("Enter a positive number: ", value));
    EXPECT_DOUBLE_EQ(value, 10.5);
    std::cin.rdbuf(orig);
}

TEST(InputTests, InvalidNonNumericInput) {
    double value;
    std::istringstream input("abc");
    std::streambuf* orig = std::cin.rdbuf(input.rdbuf());
    EXPECT_FALSE(getPositiveDoubleInput("Enter a positive number: ", value));
    std::cin.rdbuf(orig);
}

TEST(InputTests, InvalidNegativeInput) {
    double value;
    std::istringstream input("-5.0");
    std::streambuf* orig = std::cin.rdbuf(input.rdbuf());
    EXPECT_FALSE(getPositiveDoubleInput("Enter a positive number: ", value));
    std::cin.rdbuf(orig);
}

TEST(InputTests, InvalidZeroInput) {
    double value;
    std::istringstream input("0.0");
    std::streambuf* orig = std::cin.rdbuf(input.rdbuf());
    EXPECT_FALSE(getPositiveDoubleInput("Enter a positive number: ", value));
    std::cin.rdbuf(orig);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
