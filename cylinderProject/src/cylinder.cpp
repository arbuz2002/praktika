#include <iostream>
#include <cmath>
#include <limits>
#include "cylinder.h"

Cylinder::Cylinder(double height, double radius, double x, double y, double z) 
    : height(height), radius(radius), x(x), y(y), z(z) {}

double Cylinder::getHeight() const {
    return height;
}

double Cylinder::getRadius() const {
    return radius;
}

double Cylinder::getDiameter() const {
    return 2 * radius;
}

double Cylinder::getLateralSurfaceArea() const {
    return 2 * M_PI * radius * height;
}

double Cylinder::getTotalSurfaceArea() const {
    return 2 * M_PI * radius * (height + radius);
}

double Cylinder::getBaseArea() const {
    return M_PI * radius * radius;
}

double Cylinder::getVolume() const {
    return M_PI * radius * radius * height;
}

void Cylinder::getBottomCenter(double &x, double &y, double &z) const {
    x = this->x;
    y = this->y;
    z = this->z;
}

void Cylinder::getTopCenter(double &x, double &y, double &z) const {
    x = this->x;
    y = this->y;
    z = this->z + height;
}

void Cylinder::setHeight(double height) {
    this->height = height;
}

void Cylinder::setRadius(double radius) {
    this->radius = radius;
}

void Cylinder::setBottomCenter(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

bool inputDouble1(double &value) {
    std::cin >> value;
    if (std::cin.fail()) {
        std::cin.clear(); // сбрасываем флаг ошибки
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // игнорируем оставшееся в буфере
        std::cout << "Ошибка ввода. Попробуйте снова: ";
        return false;
    }
    return true;
}

void showMenu3() {
    double height = 0, radius = 0, x = 0, y = 0, z = 0;
    int choice;

    while (true) {
        std::cout << "\nВыберите способ задания цилиндра:\n";
        std::cout << "1. Задать высоту и радиус основания\n";
        std::cout << "2. Задать высоту и диаметр основания\n";
        std::cout << "3. Задать координаты центра нижнего основания, высоту и радиус\n";
        std::cout << "4. Вычислить свойства цилиндра\n";
        std::cout << "5. Выход\n";
        std::cout << "Введите выбор: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Введите высоту цилиндра: ";
            while (!inputDouble1(height) || height <= 0) {
                std::cout << "Высота должна быть положительным числом. Попробуйте снова: ";
            }
            std::cout << "Введите радиус основания цилиндра: ";
            while (!inputDouble1(radius) || radius <= 0) {
                std::cout << "Радиус должен быть положительным числом. Попробуйте снова: ";
            }
            x = y = z = 0; // координаты центра нижнего основания (0, 0, 0)
        } else if (choice == 2) {
            double diameter;
            std::cout << "Введите высоту цилиндра: ";
            while (!inputDouble1(height) || height <= 0) {
                std::cout << "Высота должна быть положительным числом. Попробуйте снова: ";
            }
            std::cout << "Введите диаметр основания цилиндра: ";
            while (!inputDouble1(diameter) || diameter <= 0) {
                std::cout << "Диаметр должен быть положительным числом. Попробуйте снова: ";
            }
            radius = diameter / 2;
            x = y = z = 0; // координаты центра нижнего основания (0, 0, 0)
        } else if (choice == 3) {
            std::cout << "Введите координаты центра нижнего основания (x y z): ";
            while (!inputDouble1(x)) {
                std::cout << "Ошибка ввода. Попробуйте снова: ";
            }
            while (!inputDouble1(y)) {
                std::cout << "Ошибка ввода. Попробуйте снова: ";
            }
            while (!inputDouble1(z)) {
                std::cout << "Ошибка ввода. Попробуйте снова: ";
            }
            std::cout << "Введите высоту цилиндра: ";
            while (!inputDouble1(height) || height <= 0) {
                std::cout << "Высота должна быть положительным числом. Попробуйте снова: ";
            }
            std::cout << "Введите радиус основания цилиндра: ";
            while (!inputDouble1(radius) || radius <= 0) {
                std::cout << "Радиус должен быть положительным числом. Попробуйте снова: ";
            }
        } else if (choice == 4) {
            Cylinder cylinder(height, radius, x, y, z);

            std::cout << "Свойства цилиндра:\n";
            std::cout << "Высота: " << cylinder.getHeight() << "\n";
            std::cout << "Радиус основания: " << cylinder.getRadius() << "\n";
            std::cout << "Диаметр основания: " << cylinder.getDiameter() << "\n";
            std::cout << "Площадь боковой поверхности: " << cylinder.getLateralSurfaceArea() << "\n";
            std::cout << "Площадь полной поверхности: " << cylinder.getTotalSurfaceArea() << "\n";
            std::cout << "Площадь основания: " << cylinder.getBaseArea() << "\n";
            std::cout << "Объем цилиндра: " << cylinder.getVolume() << "\n";

            double topX, topY, topZ;
            cylinder.getTopCenter(topX, topY, topZ);
            std::cout << "Координаты центра нижнего основания: (" << x << ", " << y << ", " << z << ")\n";
            std::cout << "Координаты центра верхнего основания: (" << topX << ", " << topY << ", " << topZ << ")\n";
        } else if (choice == 5) {
            break;
        } else {
            std::cout << "Неправильный выбор, попробуйте снова.\n";
        }
    }
}

