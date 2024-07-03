#include <iostream>
#include <cmath>
#include <limits>
#include "ball.h"

Ball::Ball() : radius(1), x(0), y(0), z(0), centered(false) {}

Ball::Ball(double radius) : radius(radius), x(0), y(0), z(0), centered(false) {}

Ball::Ball(double x, double y, double z, double radius) : radius(radius), x(x), y(y), z(z), centered(true) {}

void Ball::setRadius(double radius) {
    this->radius = radius;
    if (!centered) {
        this->x = 0;
        this->y = 0;
        this->z = 0;
    }
}

void Ball::setCenter(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
    this->centered = true;
}

double Ball::getRadius() const {
    return radius;
}

double Ball::getDiameter() const {
    return 2 * radius;
}

double Ball::getSurfaceArea() const {
    return 4 * M_PI * radius * radius;
}

double Ball::getVolume() const {
    return (4.0 / 3.0) * M_PI * std::pow(radius, 3);
}

bool Ball::isCentered() const {
    return centered;
}

void Ball::getExtremePoints(double& minX, double& maxX, double& minY, double& maxY, double& minZ, double& maxZ) const {
    minX = x - radius;
    maxX = x + radius;
    minY = y - radius;
    maxY = y + radius;
    minZ = z - radius;
    maxZ = z + radius;
}

double getValidNumber(bool allowNegative = false) {
    double number;
    while (true) {
        std::cin >> number;
        if (std::cin.fail() || (!allowNegative && number < 0)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Неправильный ввод. Пожалуйста, введите " << (allowNegative ? "" : "положительное ") << "число: ";
        } else {
            return number;
        }
    }
}

void showMenu() {
    Ball ball;
    int choice;

    do {
        std::cout << "\nМеню:\n";
        std::cout << "1. Задать шар радиусом\n";
        std::cout << "2. Задать шар центром и радиусом\n";
        std::cout << "3. Показать радиус\n";
        std::cout << "4. Показать диаметр\n";
        std::cout << "5. Показать площадь поверхности\n";
        std::cout << "6. Показать объем\n";
        std::cout << "7. Показать крайние точки шара\n";
        std::cout << "0. Выход\n";
        std::cout << "Выберите действие: ";
        choice = static_cast<int>(getValidNumber());

        switch (choice) {
            case 1: {
                std::cout << "Введите радиус: ";
                double radius = getValidNumber();
                ball.setRadius(radius);
                ball.setCenter(0, 0, 0);
                break;
            }
            case 2: {
                std::cout << "Введите координаты центра (x y z): ";
                double x = getValidNumber(true);
                double y = getValidNumber(true);
                double z = getValidNumber(true);
                std::cout << "Введите радиус: ";
                double radius = getValidNumber(true);
                ball.setCenter(x, y, z);
                ball.setRadius(radius);
                break;
            }
            case 3:
                std::cout << "Радиус: " << ball.getRadius() << std::endl;
                break;
            case 4:
                std::cout << "Диаметр: " << ball.getDiameter() << std::endl;
                break;
            case 5:
                std::cout << "Площадь поверхности: " << ball.getSurfaceArea() << std::endl;
                break;
            case 6:
                std::cout << "Объем: " << ball.getVolume() << std::endl;
                break;
            case 7:
                if (ball.isCentered()) {
                    double minX, maxX, minY, maxY, minZ, maxZ;
                    ball.getExtremePoints(minX, maxX, minY, maxY, minZ, maxZ);
                    std::cout << "Крайние точки шара:\n";
                    std::cout << "По оси X: [" << minX << ", " << maxX << "]\n";
                    std::cout << "По оси Y: [" << minY << ", " << maxY << "]\n";
                    std::cout << "По оси Z: [" << minZ << ", " << maxZ << "]\n";
                } else {
                    std::cout << "Координаты шара не заданы.\n";
                }
                break;
            case 0:
                std::cout << "Выход...\n";
                break;
            default:
                std::cout << "Неправильный выбор. Пожалуйста, попробуйте снова.\n";
                break;
        }
    } while (choice != 0);
}

