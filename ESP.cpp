#include "ESP.h"
#include <iostream>

extern bool itemEsp;
extern bool bombEsp;

void DrawESP() {
    std::cout << "[ESP] Düşman kutusu çiziliyor...\n";
    if (itemEsp) std::cout << "[ESP] Item ESP aktif\n";
    if (bombEsp) std::cout << "[ESP] Bomba ESP aktif\n";
}
