#ifndef TOOLS_H
#define TOOLS_H

#include <iomanip>
#include <locale>
#include <sstream>
#include <string> // this should be already included in <sstream>


template <typename T>
T StringToNumber ( const string &Text )
{
    istringstream ss(Text);
    T result;
    return ss >> result ? result : 0;
}

template <typename T>
string NumberToString ( T Number )
{
    ostringstream ss;
    ss << Number;
    return ss.str();
}

#endif // TOOLS_H
