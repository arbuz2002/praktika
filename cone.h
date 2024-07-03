#ifndef CONE_H
#define CONE_H

class Cone {
private:
    double radius;
    double height;
    double slantHeight;
    double vertexX;
    double vertexY;
    double vertexZ;
    double baseCenterX;
    double baseCenterY;
    double baseCenterZ;

public:
    Cone();
    Cone(double radius, double height);
    Cone(double radius, double height, double slantHeight);
    Cone(double centerX, double centerY, double centerZ, double height, double radius);

    void setRadius(double radius);
    void setHeight(double height);
    void setSlantHeight(double slantHeight);
    void setBaseCenter(double centerX, double centerY, double centerZ);

    double getRadius() const;
    double getHeight() const;
    double getSlantHeight() const;
    double getDiameter() const;
    double getLateralSurfaceArea() const;
    double getTotalSurfaceArea() const;
    double getVolume() const;
    void getVertexCoordinates(double &x, double &y, double &z) const;
    void getBaseCenterCoordinates(double &x, double &y, double &z) const;
};

void showMenu();
bool inputDouble(double &value, bool allowZeroNegative = true);

#endif // CONE_H

