﻿#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    system("chcp 1251>null");
    srand(time(0));
    short strength = 5;   //(0-30)
    short stamina = 5;    //(0-30)
    short energy = 10;    //(0-10)
    short day = 1;
    short choice;
    short rest=0;
    cout << "Не підведіть свою енергію до 1!!!"<<endl;
    cout << "Ви - бодібілдер. Ваше завдання: стати сильним і витривалим!\n";
    while (true) {
        cout << "\n=== День " << day << " ===\n";
        cout << "Сила: " << strength << "/30 | Витривалість: " << stamina << "/30 | Енергія: " << energy << "/10\n";
        cout << "Що ви хочете зробити?\n";
        cout << "1. Піти на тренування (покращує силу, але знижує енергію).\n";
        cout << "2. Кардіо (покращує витривалість, але трохи знижує енергію).\n";
        cout << "3. Відпочити (відновлює енергію).\n";
        cout << "4. Попросити іншого бодібілдера підстрахувати у жимі лежачи.\n";
        cout << "Ваш вибір: ";

        cin >> choice;

        if (choice == 1) {
            if (energy >= 3) {
                strength += rand() % 2 + 1; 
                energy -= 3;
                cout << "Ви інтенсивно тренувалися! Сила збільшилася.\n";
            }
            else {
                cout << "Ви занадто втомлені для тренувань. Відпочиньте!\n";
            }
        }
        else if (choice == 2) {
            if (energy >= 2) {
                stamina += rand() % 2 + 1; 
                energy -= 2;
                cout << "Ви зробили кардіо! Витривалість збільшилася.\n";
            }
            else {
                cout << "Ви занадто втомлені для кардіо. Відпочиньте!\n";
            }
        }
        else if (choice == 3) {
            energy += rand() % 3 + 1; 
            if (energy > 10) energy = 10;
            cout << "Ви відпочили і відновили енергію.\n";
            rest++;
        }
        else if (choice == 4) {
            if (energy >= 3) {
                cout << "Ви звертаєтеся до іншого бодібілдера.\n";
                cout << "\"Привіт! Можеш підстрахувати мене у жимі лежачи?\"\n";
                int chance = rand() % 2;
                if (chance == 0) {
                    cout << "\"Так, без проблем!\" - відповідає він.\n";
                    strength += rand() % 3 + 2; 
                    energy -= 3;
                    cout << "Ви зробили відмінний сет під наглядом! Сила значно зросла.\n";
                }
                else {
                    cout << "\"Вибач, зараз я зайнятий своїм тренуванням,\" - каже він.\n";
                    cout << "Ви трохи розчаровані, але продовжуєте тренування самі.\n";
                    energy -= 1;
                    continue;
                }
            }
            else {
                cout << "Ви занадто втомлені, щоб звертатися за допомогою. Відпочиньте!\n";
            }
        }
        else {
            cout << "Невірний вибір! Спробуйте ще раз.\n";
            continue;
        }
        cout << endl;

        if (strength > 30) strength = 30;
        if (stamina > 30) stamina = 30;

        if (strength >= 30 && stamina >= 30) {
            cout << "\nВітаємо! Ви стали справжнім бодібілдером!\n";
            break;
        }

        if (energy <= 1) {
            cout << "\nВи занадто виснажені. Спробуйте краще дбати про свій баланс тренувань і відпочинку.\n";
            break;
        }

        if (rest == 3) {
            cout << "Ви багато відпочиваєте та подумали вже тренуватись іншим днем";
            day++;
            energy = 10;
            rest = 0;
            continue;
        }
    }
    return 0;
}

    