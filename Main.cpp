#include "Logger.h"


int main()
{
    Logger::init("logs.txt");

    Logger::info("Anti-cheat starting");
    Logger::warn("Unsigned module detected");
    Logger::detected("Memory write in protected region");
    return 0;
}