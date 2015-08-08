#include <iostream>
#include <sstream>
#include <windows.h>
#include <strsafe.h>
#include <cfgmgr32.h>

std::string to_string(int i)
{
	std::stringstream ss;
	ss << i;
	return ss.str();
}
