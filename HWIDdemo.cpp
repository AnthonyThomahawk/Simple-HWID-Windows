#include "HWIDwin.h"

int main()
{
	// simply call GetHWID() to get a system's HWID (serial of its C: volume)

	cout << "Simple HWID for Windows, by Anthony T." << endl;
	cout << "This system's HWID : " << GetHWID() << endl;

	return 0;
}
