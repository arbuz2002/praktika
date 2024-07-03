#include <gtest/gtest.h>
#include "ball.h"

// Тесты конструктора по умолчанию
TEST(BallTest, DefaultConstructor) {
    Ball ball;
    EXPECT_EQ(ball.getRadius(), 1);
    EXPECT_FALSE(ball.isCentered());
}

// Тесты конструктора с радиусом
TEST(BallTest, RadiusConstructor) {
    Ball ball(5.0);
    EXPECT_EQ(ball.getRadius(), 5.0);
    EXPECT_FALSE(ball.isCentered());
}

// Тесты конструктора с центром и радиусом
TEST(BallTest, CenterRadiusConstructor) {
    Ball ball(1.0, 2.0, 3.0, 4.0);
    EXPECT_EQ(ball.getRadius(), 4.0);
    EXPECT_TRUE(ball.isCentered());
}

// Тесты установки радиуса
TEST(BallTest, SetRadius) {
    Ball ball;
    ball.setRadius(6.0);
    EXPECT_EQ(ball.getRadius(), 6.0);
    EXPECT_FALSE(ball.isCentered());
}

// Тесты установки центра
TEST(BallTest, SetCenter) {
    Ball ball;
    ball.setCenter(4.0, 5.0, 6.0);
    EXPECT_TRUE(ball.isCentered());
}

// Тесты крайних точек
TEST(BallTest, ExtremePoints) {
    Ball ball(1.0, 2.0, 3.0, 4.0);
    double minX, maxX, minY, maxY, minZ, maxZ;
    ball.getExtremePoints(minX, maxX, minY, maxY, minZ, maxZ);
    EXPECT_EQ(minX, -3.0);
    EXPECT_EQ(maxX, 5.0);
    EXPECT_EQ(minY, -2.0);
    EXPECT_EQ(maxY, 6.0);
    EXPECT_EQ(minZ, -1.0);
    EXPECT_EQ(maxZ, 7.0);
}

// Тесты площади поверхности
TEST(BallTest, SurfaceArea) {
    Ball ball(2.0);
    EXPECT_NEAR(ball.getSurfaceArea(), 4 * M_PI * 4.0, 1e-5);
}

// Тесты объема
TEST(BallTest, Volume) {
    Ball ball(3.0);
    EXPECT_NEAR(ball.getVolume(), (4.0 / 3.0) * M_PI * 27.0, 1e-5);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

