# rescanhw
Console program which scans for hardware chages. 
If success returns 0, otherwise returns one of CR_-prefixed error codes defined in Cfgmgr32.h

build
g++ -O1 -static -municode rescanhw.cpp -lcfgmgr32 -o rescanhw.exe
strip rescanhw.exe
