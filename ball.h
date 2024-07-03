#ifndef BALL_H
#define BALL_H

class Ball {
public:
    Ball();
    Ball(double radius);
    Ball(double x, double y, double z, double radius);

    void setRadius(double radius);
    void setCenter(double x, double y, double z);

    double getRadius() const;
    double getDiameter() const;
    double getSurfaceArea() const;
    double getVolume() const;

    bool isCentered() const;
    void getExtremePoints(double& minX, double& maxX, double& minY, double& maxY, double& minZ, double& maxZ) const;

private:
    double radius;
    double x, y, z;
    bool centered;
};

void showMenu1();

#endif // BALL_H

