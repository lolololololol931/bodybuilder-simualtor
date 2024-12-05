#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    short strength = 5;   //(0-10)
    short stamina = 5;    //(0-10)
    short energy = 10;    //(0-10)
    short day = 1;
    short choice;
    cout << "Ви - бодібілдер. Ваше завдання: стати сильним і витривалим!\n";
    while (true) {
        cout << "\n=== День " << day << " ===\n";
        cout << "Сила: " << strength << "/10 | Витривалість: " << stamina << "/10 | Енергія: " << energy << "/10\n";
        cout << "Що ви хочете зробити?\n";
        cout << "1. Піти на тренування (покращує силу, але знижує енергію).\n";
        cout << "2. Кардіо (покращує витривалість, але трохи знижує енергію).\n";
        cout << "3. Відпочити (відновлює енергію).\n";
        cout << "4. Попросити іншого бодібілдера підстрахувати у жимі лежачи.\n";
        cout << "Ваш вибір: ";
    }


    return 0;
}

    