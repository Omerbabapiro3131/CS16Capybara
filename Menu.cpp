#include "Menu.h"
#include <Windows.h>
#include <iostream>

extern bool espEnabled;
extern bool legitBotEnabled;
extern bool itemEsp;
extern bool bombEsp;
extern bool showMenu;

void DrawMenu() {
    system("cls");
    std::cout << "[Insert] Menü Aç/Kapat\n";
    std::cout << "[1] ESP: " << (espEnabled ? "AÇIK" : "KAPALI") << "\n";
    std::cout << "[2] LegitBot: " << (legitBotEnabled ? "AÇIK" : "KAPALI") << "\n";
    std::cout << "[3] Item ESP: " << (itemEsp ? "AÇIK" : "KAPALI") << "\n";
    std::cout << "[4] Bomba ESP: " << (bombEsp ? "AÇIK" : "KAPALI") << "\n";
}
