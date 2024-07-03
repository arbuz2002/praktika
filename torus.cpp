#include "torus.h"
#include <iostream>
#include <cmath>
#include <limits>

Torus::Torus(double R, double r)
    : majorRadius(R), minorRadius(r), centerX(0), centerY(0), centerZ(0) {}

Torus::Torus(double cx, double cy, double cz, double R, double r)
    : centerX(cx), centerY(cy), centerZ(cz), majorRadius(R), minorRadius(r) {}

double Torus::getMajorRadius() const {
    return majorRadius;
}

double Torus::getMinorRadius() const {
    return minorRadius;
}

double Torus::getMajorDiameter() const {
    return 2 * majorRadius;
}

double Torus::getMinorDiameter() const {
    return 2 * minorRadius;
}

double Torus::surfaceArea() const {
    return 4 * M_PI * M_PI * majorRadius * minorRadius;
}

double Torus::volume() const {
    return 2 * M_PI * M_PI * majorRadius * minorRadius * minorRadius;
}

void Torus::getExtremePoints(double &xMin, double &xMax, double &yMin, double &yMax) const {
    xMin = centerX - majorRadius;
    xMax = centerX + majorRadius;
    yMin = centerY - majorRadius;
    yMax = centerY + majorRadius;
}

bool getDoubleInput(const char* prompt, double &value) {
    std::cout << prompt;
    std::cin >> value;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка ввода. Пожалуйста, введите число.\n";
        return false;
    }
    return true;
}

bool getPositiveDoubleInput(const char* prompt, double &value) {
    if (!getDoubleInput(prompt, value)) {
        return false;
    }
    if (value <= 0) {
        std::cout << "Значение должно быть положительным и больше нуля.\n";
        return false;
    }
    return true;
}

void showMenu() {
    int choice;
    double R, r, cx, cy, cz;
    Torus* torus = nullptr;

    do {
        std::cout << "Меню:\n";
        std::cout << "1. Задать тор (по умолчанию центр в (0,0,0))\n";
        std::cout << "2. Задать тор с координатами центра\n";
        std::cout << "3. Вычислить радиус большого круга\n";
        std::cout << "4. Вычислить радиус малого круга\n";
        std::cout << "5. Вычислить диаметр большого круга\n";
        std::cout << "6. Вычислить диаметр малого круга\n";
        std::cout << "7. Вычислить площадь поверхности тора\n";
        std::cout << "8. Вычислить объем тора\n";
        std::cout << "9. Вычислить крайние точки по осям x и y\n";
        std::cout << "10. Выйти\n";
        std::cout << "Выберите действие: ";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Ошибка ввода. Пожалуйста, выберите пункт из меню.\n";
            continue;
        }

        switch (choice) {
            case 1:
                if (getPositiveDoubleInput("Введите радиус большого круга: ", R) &&
                    getPositiveDoubleInput("Введите радиус малого круга: ", r)) {
                    if (r >= R) {
                        std::cout << "Радиус малого круга должен быть меньше радиуса большого круга.\n";
                    } else {
                        delete torus; // Удаляем предыдущий объект, если был
                        torus = new Torus(R, r);
                        std::cout << "Тор задан.\n";
                    }
                }
                break;
            case 2:
                if (getDoubleInput("Введите координаты центра (x): ", cx) &&
                    getDoubleInput("Введите координаты центра (y): ", cy) &&
                    getDoubleInput("Введите координаты центра (z): ", cz) &&
                    getPositiveDoubleInput("Введите радиус большого круга: ", R) &&
                    getPositiveDoubleInput("Введите радиус малого круга: ", r)) {
                    if (r >= R) {
                        std::cout << "Радиус малого круга должен быть меньше радиуса большого круга.\n";
                    } else {
                        delete torus; // Удаляем предыдущий объект, если был
                        torus = new Torus(cx, cy, cz, R, r);
                        std::cout << "Тор задан.\n";
                    }
                }
                break;
            case 3:
                if (torus) {
                    std::cout << "Радиус большого круга: " << torus->getMajorRadius() << "\n";
                } else {
                    std::cout << "Тор не задан.\n";
                }
                break;
            case 4:
                if (torus) {
                    std::cout << "Радиус малого круга: " << torus->getMinorRadius() << "\n";
                } else {
                    std::cout << "Тор не задан.\n";
                }
                break;
            case 5:
                if (torus) {
                    std::cout << "Диаметр большого круга: " << torus->getMajorDiameter() << "\n";
                } else {
                    std::cout << "Тор не задан.\n";
                }
                break;
            case 6:
                if (torus) {
                    std::cout << "Диаметр малого круга: " << torus->getMinorDiameter() << "\n";
                } else {
                    std::cout << "Тор не задан.\n";
                }
                break;
            case 7:
                if (torus) {
                    std::cout << "Площадь поверхности тора: " << torus->surfaceArea() << "\n";
                } else {
                    std::cout << "Тор не задан.\n";
                }
                break;
            case 8:
                if (torus) {
                    std::cout << "Объем тора: " << torus->volume() << "\n";
                } else {
                    std::cout << "Тор не задан.\n";
                }
                break;
            case 9:
                if (torus) {
                    double xMin, xMax, yMin, yMax;
                    torus->getExtremePoints(xMin, xMax, yMin, yMax);
                    std::cout << "Крайние точки по оси x: (" << xMin << ", " << xMax << ")\n";
                    std::cout << "Крайние точки по оси y: (" << yMin << ", " << yMax << ")\n";
                } else {
                    std::cout << "Тор не задан.\n";
                }
                break;
            case 10:
                std::cout << "Выход...\n";
                break;
            default:
                std::cout << "Неправильный выбор. Попробуйте еще раз.\n";
        }
    } while (choice != 10);

    delete torus; // Удаляем объект тор перед выходом
}

