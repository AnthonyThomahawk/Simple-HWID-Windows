#include <windows.h>
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

string GetHWID()
{
	string initstring;
	initstring = "Error : string is null";
	UCHAR szFileSys[255], szVolNameBuff[255];
	DWORD dwSerial;
	DWORD dwMFL;
	DWORD dwSysFlags;
	int error = 0;

	//request information of Volume C, using GetVolumeInformatioA winapi function
	bool fail = GetVolumeInformationA("C:\\", (LPSTR)szVolNameBuff, 255, &dwSerial, &dwMFL, &dwSysFlags, (LPSTR)szFileSys, 255);
	if (!fail) {
		initstring = "Error : Not elevated (please run this with admin rights)";
		return initstring;
	}

	stringstream hwidstream;
	hwidstream << hex << dwSerial; // convert volume serial to hex

	string HWID = string(hwidstream.str().c_str());

	for (int i = 0; i < HWID.length(); i++) // shift converted serial by 6 characters 
		HWID[i] += 6; // (you can change this to shift as much as you want)

	return HWID;
}

int main()
{
	// simply call GetHWID() to get a system's HWID (serial of its C: volume)

	cout << "Simple HWID for Windows, by Anthony T." << endl;
	cout << "This system's HWID : " << GetHWID() << endl;

	return 0;
}