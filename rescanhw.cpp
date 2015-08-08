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

int wmain()
{
	std::wcout << "Starting scan for hardware changes..." << std::endl;
	HMACHINE machineHandle = NULL;
	DEVINST devRoot;
	CM_Locate_DevNode_Ex(&devRoot,NULL,CM_LOCATE_DEVNODE_NORMAL,machineHandle);
	DWORD result = CM_Reenumerate_DevNode_Ex(devRoot, CM_REENUMERATE_SYNCHRONOUS, machineHandle); 
	if(result != CR_SUCCESS)
	{
		std::cout << "Scan incomplete. Error code:" + to_string(result);
		ExitProcess(result);
	}
	std::cout << "Scan successfully complete.";
 }
