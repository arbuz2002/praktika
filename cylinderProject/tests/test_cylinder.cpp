#include <gtest/gtest.h>
#include "cylinder.h"

// Тесты для конструктора
TEST(CylinderTest, Constructor) {
    Cylinder cylinder(10.0, 5.0, 1.0, 2.0, 3.0);
    EXPECT_DOUBLE_EQ(cylinder.getHeight(), 10.0);
    EXPECT_DOUBLE_EQ(cylinder.getRadius(), 5.0);
    double x, y, z;
    cylinder.getBottomCenter(x, y, z);
    EXPECT_DOUBLE_EQ(x, 1.0);
    EXPECT_DOUBLE_EQ(y, 2.0);
    EXPECT_DOUBLE_EQ(z, 3.0);
}

// Тесты для методов получения значений
TEST(CylinderTest, Getters) {
    Cylinder cylinder(10.0, 5.0);
    EXPECT_DOUBLE_EQ(cylinder.getHeight(), 10.0);
    EXPECT_DOUBLE_EQ(cylinder.getRadius(), 5.0);
    EXPECT_DOUBLE_EQ(cylinder.getDiameter(), 10.0);
    EXPECT_DOUBLE_EQ(cylinder.getLateralSurfaceArea(), 2 * M_PI * 5.0 * 10.0);
    EXPECT_DOUBLE_EQ(cylinder.getTotalSurfaceArea(), 2 * M_PI * 5.0 * (10.0 + 5.0));
    EXPECT_DOUBLE_EQ(cylinder.getBaseArea(), M_PI * 5.0 * 5.0);
    EXPECT_DOUBLE_EQ(cylinder.getVolume(), M_PI * 5.0 * 5.0 * 10.0);
}

// Тесты для методов установки значений
TEST(CylinderTest, Setters) {
    Cylinder cylinder(10.0, 5.0);
    cylinder.setHeight(20.0);
    cylinder.setRadius(10.0);
    EXPECT_DOUBLE_EQ(cylinder.getHeight(), 20.0);
    EXPECT_DOUBLE_EQ(cylinder.getRadius(), 10.0);

    cylinder.setBottomCenter(1.0, 2.0, 3.0);
    double x, y, z;
    cylinder.getBottomCenter(x, y, z);
    EXPECT_DOUBLE_EQ(x, 1.0);
    EXPECT_DOUBLE_EQ(y, 2.0);
    EXPECT_DOUBLE_EQ(z, 3.0);
}

// Тесты для координат центра нижнего и верхнего оснований
TEST(CylinderTest, CenterCoordinates) {
    Cylinder cylinder(10.0, 5.0, 1.0, 2.0, 3.0);
    double x, y, z;

    cylinder.getBottomCenter(x, y, z);
    EXPECT_DOUBLE_EQ(x, 1.0);
    EXPECT_DOUBLE_EQ(y, 2.0);
    EXPECT_DOUBLE_EQ(z, 3.0);

    cylinder.getTopCenter(x, y, z);
    EXPECT_DOUBLE_EQ(x, 1.0);
    EXPECT_DOUBLE_EQ(y, 2.0);
    EXPECT_DOUBLE_EQ(z, 13.0); 
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
