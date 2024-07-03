#include <iostream>
#include <cmath>
#include <limits>
#include "cone.h"

using namespace std;

Cone::Cone() : radius(0), height(0), slantHeight(0), vertexX(0), vertexY(0), vertexZ(0), baseCenterX(0), baseCenterY(0), baseCenterZ(0) {}

Cone::Cone(double radius, double height) : radius(radius), height(height) {
    slantHeight = sqrt(radius * radius + height * height);
    // Устанавливаем координаты центра основания на 0 0 0
    baseCenterX = 0;
    baseCenterY = 0;
    baseCenterZ = 0;
    // Устанавливаем координаты вершины конуса на 0 0 0 + height
    vertexX = 0;
    vertexY = 0;
    vertexZ = height;
}

Cone::Cone(double radius, double height, double slantHeight) : radius(radius), height(height), slantHeight(slantHeight) {
    // Устанавливаем координаты центра основания на 0 0 0
    baseCenterX = 0;
    baseCenterY = 0;
    baseCenterZ = 0;
    // Устанавливаем координаты вершины конуса на 0 0 0 + height
    vertexX = 0;
    vertexY = 0;
    vertexZ = height;
}

Cone::Cone(double centerX, double centerY, double centerZ, double height, double radius) : height(height), radius(radius) {
   
    double baseCenterToVertexDistance = sqrt(radius * radius + height * height);
    
  
    slantHeight = baseCenterToVertexDistance;
    

    vertexX = centerX;
    vertexY = centerY;
    vertexZ = centerZ + height;
    

    baseCenterX = centerX;
    baseCenterY = centerY;
    baseCenterZ = centerZ;
}

void Cone::setRadius(double radius) {
    this->radius = radius;
}

void Cone::setHeight(double height) {
    this->height = height;
    slantHeight = sqrt(radius * radius + height * height);
    // Устанавливаем координаты вершины конуса на 0 0 0 + height
    vertexX = 0;
    vertexY = 0;
    vertexZ = height;
}

void Cone::setSlantHeight(double slantHeight) {
    this->slantHeight = slantHeight;
}

void Cone::setBaseCenter(double centerX, double centerY, double centerZ) {
    baseCenterX = centerX;
    baseCenterY = centerY;
    baseCenterZ = centerZ;
    
  
    vertexX = centerX;
    vertexY = centerY;
    vertexZ = centerZ + height;
    
   
    slantHeight = sqrt(pow(vertexX - baseCenterX, 2) + pow(vertexY - baseCenterY, 2) + pow(vertexZ - baseCenterZ, 2));
}

double Cone::getRadius() const {
    return radius;
}

double Cone::getHeight() const {
    return height;
}

double Cone::getSlantHeight() const {
    return slantHeight;
}

double Cone::getDiameter() const {
    return 2 * radius;
}

double Cone::getLateralSurfaceArea() const {
    return M_PI * radius * slantHeight;
}

double Cone::getTotalSurfaceArea() const {
    return M_PI * radius * (slantHeight + radius);
}

double Cone::getVolume() const {
    return (1.0 / 3) * M_PI * radius * radius * height;
}

void Cone::getVertexCoordinates(double &x, double &y, double &z) const {
    x = vertexX;
    y = vertexY;
    z = vertexZ;
}

void Cone::getBaseCenterCoordinates(double &x, double &y, double &z) const {
    x = baseCenterX;
    y = baseCenterY;
    z = baseCenterZ;
}

bool inputDouble(double &value, bool allowZeroNegative) {
    while (true) {
        if (!(cin >> value)) {
            cout << "Неверный ввод. Пожалуйста, введите число: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (!allowZeroNegative && (value <= 0)) {
            cout << "Число должно быть положительным и больше нуля. Пожалуйста, введите корректное число: ";
        } else {
            break;
        }
    }
    return true;
}

void showMenu2() {
    Cone cone;
    double choice;

    do {
        cout << "\nМеню работы с конусом:\n";
        cout << "1. Задать параметры конуса (радиус и высота)\n";
        cout << "2. Задать параметры конуса (радиус, высота и образующая)\n";
        cout << "3. Задать параметры конуса (центр основания, высота и радиус)\n";
        cout << "4. Вычислить свойства\n";
        cout << "5. Выйти\n";
        cout << "Введите ваш выбор: ";
        inputDouble(choice);

        switch (static_cast<int>(choice)) {
            case 1: {
                double radius, height;
                cout << "Введите радиус: ";
                inputDouble(radius, false);  // Не разрешаем вводить 0 и отрицательные значения
                cout << "Введите высоту: ";
                inputDouble(height, false);  // Не разрешаем вводить 0 и отрицательные значения
                cone = Cone(radius, height);
                break;
            }
            case 2: {
                double radius, height, slantHeight;
                cout << "Введите радиус: ";
                inputDouble(radius, false);  // Не разрешаем вводить 0 и отрицательные значения
                cout << "Введите высоту: ";
                inputDouble(height, false);  // Не разрешаем вводить 0 и отрицательные значения
                cout << "Введите образующую: ";
                inputDouble(slantHeight);
                cone = Cone(radius, height, slantHeight);
                break;
            }
            case 3: {
                double centerX, centerY, centerZ, height, radius;
                cout << "Введите координаты центра основания (x y z): ";
                inputDouble(centerX);
                inputDouble(centerY);
                inputDouble(centerZ);
                cout << "Введите высоту: ";
                inputDouble(height);
                cout << "Введите радиус: ";
                inputDouble(radius);
                cone = Cone(centerX, centerY, centerZ, height, radius);
                break;
            }
            case 4: {
                cout << "Радиус: " << cone.getRadius() << endl;
                cout << "Высота: " << cone.getHeight() << endl;
                cout << "Образующая: " << cone.getSlantHeight() << endl;
                
                double vertexX, vertexY, vertexZ;
                cone.getVertexCoordinates(vertexX, vertexY, vertexZ);
                cout << "Координаты вершины конуса: (" << vertexX << ", " << vertexY << ", " << vertexZ << ")" << endl;
                
                double baseCenterX, baseCenterY, baseCenterZ;
                cone.getBaseCenterCoordinates(baseCenterX, baseCenterY, baseCenterZ);
                cout << "Координаты центра основания: (" << baseCenterX << ", " << baseCenterY << ", " << baseCenterZ << ")" << endl;
                
                cout << "Диаметр основания: " << cone.getDiameter() << endl;
                cout << "Площадь боковой поверхности: " << cone.getLateralSurfaceArea() << endl;
                cout << "Площадь полной поверхности: " << cone.getTotalSurfaceArea() << endl;
                cout << "Объем: " << cone.getVolume() << endl;
                break;
            }
            case 5:
                cout << "Выход...\n";
                break;
            default:
                cout << "Неверный выбор. Попробуйте снова.\n";
                break;
        }
    } while (static_cast<int>(choice) != 5);
}

