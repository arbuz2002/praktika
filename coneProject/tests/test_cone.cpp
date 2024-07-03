#include "gtest/gtest.h"
#include "cone.h"

TEST(ConeTest, DefaultConstructor) {
    Cone cone;
    EXPECT_EQ(cone.getRadius(), 0.0);
    EXPECT_EQ(cone.getHeight(), 0.0);
    EXPECT_EQ(cone.getSlantHeight(), 0.0);
}

TEST(ConeTest, SetRadiusHeight) {
    Cone cone;
    cone.setRadius(5.0);
    cone.setHeight(10.0);
    EXPECT_EQ(cone.getRadius(), 5.0);
    EXPECT_EQ(cone.getHeight(), 10.0);
    EXPECT_NEAR(cone.getSlantHeight(), 11.1803, 0.0001);
}

TEST(ConeTest, GetDiameter) {
    Cone cone(5.0, 10.0);
    EXPECT_EQ(cone.getDiameter(), 10.0);
}

TEST(ConeTest, GetVolume) {
    Cone cone(5.0, 10.0);
    EXPECT_NEAR(cone.getVolume(), 261.799, 0.001);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
