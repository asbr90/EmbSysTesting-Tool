#include "datalogger.h"

datalogger::datalogger(const char *delimiter, int deviceType, const char* filename, int columns)
{
    this->delimiter = delimiter;
    this->deviceType = deviceType;
    this->storageform = storageform;
    this->filename = filename;
    this->columns = columns;
    cntColumn = 1;

   storageFile.open(filename,ios::out);

}

bool datalogger::writeData(const char* data){
    if(!storageFile.bad()){
        if(cntColumn < columns){
            storageFile << data << delimiter;
            cntColumn+=1;
        }else{
            storageFile << data << endl;
            cntColumn = 1;
        }
        return false;
    }else{
        return true;
    }
}

