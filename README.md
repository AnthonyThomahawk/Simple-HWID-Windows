# Simple-HWID-Windows
A simple HWID (Hardware-ID) demo for Windows systems that uses GetVolumeInformationA WinAPI function, to get the serial number of Volume C:/ .

# Compile and run
Probably you can compile this with any C++ compiler, as long as you have the **Windows SDK (usually installed with Visual Studio)**.


To compile with visual studio, simply create an empty project then add HWIDdemo.cpp and HWIDwin.h, then select Release and x86 (32-bit) architecture.


Be sure to run the binary as an administrator to always get the serial number of the HDD correctly.

After you run the program, a command-promt window will open with your HWID, from there you can select it and copy-paste it anywhere you want.

# Using this in your own projects/programs
Using this in your own windows program is very simple, just include HWIDwin.h in your project/program and then call the GetHWID() function to get the HWID.

Example program :
```c++
#include "HWIDwin.h"
using namespace std;

int main()
{
  string DesiredHWID = "someonesHWIDgoeshere"; // the desired HWID of the user
  string HWID = GetHWID();
  if (HWID == DesiredHWID)
  {
    cout << "This computer is authorized !!" << endl;
  }
  else
  {
    cout << "This computer is not authorized !!" << endl;
  }
}
```
