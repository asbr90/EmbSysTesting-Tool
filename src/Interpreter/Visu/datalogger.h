#ifndef DATALOGGER_H
#define DATALOGGER_H
#include "../../Middleware/Subscriber.h"
#include <fstream>
using namespace std;

class datalogger
{
public:
    datalogger(const char* delimiter, int deviceType, const char *filename, int columns);
    bool writeData(const char* data);
private:
    const char* delimiter;
    int deviceType;
    const char* storageform;
    const char* filename;
    fstream storageFile;
    int columns;
    int cntColumn;

    Subscriber *SubscribeLogger;
};

#endif // DATALOGGER_H
