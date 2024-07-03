#ifndef TORUS_H
#define TORUS_H

class Torus {
private:
    double majorRadius;  // Радиус большого круга
    double minorRadius;  // Радиус малого круга
    double centerX;      // Координата X центра тора
    double centerY;      // Координата Y центра тора
    double centerZ;      // Координата Z центра тора

public:
    Torus(double R, double r);
    Torus(double cx, double cy, double cz, double R, double r);

    double getMajorRadius() const;
    double getMinorRadius() const;
    double getMajorDiameter() const;
    double getMinorDiameter() const;
    double surfaceArea() const;
    double volume() const;
    void getExtremePoints(double &xMin, double &xMax, double &yMin, double &yMax) const;
};

void showMenu();
bool getDoubleInput(const char* prompt, double &value);
bool getPositiveDoubleInput(const char* prompt, double &value);

#endif // TORUS_H

