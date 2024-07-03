#include <iostream>
#include "ball.cpp"
#include "cone.cpp"
//#include "cylinder.cpp"
#include "torus.cpp"

using namespace std;

int showMainMenu() {
    int choice;
    
    cout << "Выберите фигуру:" << endl;
    cout << "1. Шар" << endl;
    cout << "2. Конус" << endl;
    cout << "3. Цилиндр" << endl;
    cout << "4. Тор" << endl;
    cout << "5. Выйти" << endl;
    cout << "Введите номер: ";
    cin >> choice;
    
    return choice;
}

int main() {
    int choice;
    
    do {
        choice = showMainMenu(); 
        
        switch(choice) {
            case 1:
                showMenu1();
                break;
            case 2:
                showMenu2();
                break;
            // case 3:
            //     showMenu3();
            //     break;
            case 4:
                showMenu4();
                break;
            case 5:
                cout << "Выход из программы." << endl;
                break;
            default:
                cout << "Неверный выбор. Попробуйте снова." << endl;
        }
        
        cout << endl;
    } while (choice != 5); 

    return 0; 
}
