#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int strength = 5;   //(0-10)
    int stamina = 5;    //(0-10)
    int energy = 10;    //(0-10)
    int day = 1;        
    cout << "Ви - бодібілдер. Ваше завдання: стати сильним і витривалим!\n";
