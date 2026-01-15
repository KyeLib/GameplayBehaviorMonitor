#include "Logger.h"
#include "Processes.h"






int main()
{
    Logger::init("logs.txt");

    listProcesses();

    Logger::end();

    return 0;
}