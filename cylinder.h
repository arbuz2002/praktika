#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder {
public:
    Cylinder(double height, double radius, double x = 0, double y = 0, double z = 0);

    double getHeight() const;
    double getRadius() const;
    double getDiameter() const;
    double getLateralSurfaceArea() const;
    double getTotalSurfaceArea() const;
    double getBaseArea() const;
    double getVolume() const;

    void getBottomCenter(double &x, double &y, double &z) const;
    void getTopCenter(double &x, double &y, double &z) const;

    void setHeight(double height);
    void setRadius(double radius);
    void setBottomCenter(double x, double y, double z);

private:
    double height;
    double radius;
    double x, y, z;
};

void showMenu3();

#endif // CYLINDER_H

