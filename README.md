# Simple-HWID-Windows
A simple HWID (Hardware-ID) demo for Windows systems that uses GetVolumeInformationA WinAPI function, to get the serial number of Volume C:/ .

# Usage
Probably you can compile this with any C++ compiler, as long as you have the **Windows SDK (usually installed with Visual Studio)**.


To compile with visual studio, simply create an empty project and add HWIDdemo.cpp, then select Release and x86 (32-bit) architecture.


Be sure to run the binary as an administrator to always get the serial number of the HDD correctly.

After you run the program, a command-promt window will open with your HWID, from there you can select it and copy-paste it anywhere you want (for example in your [Silverblade](https://github.com/AnthonyThomahawk/Silverblade-CSGO#hwid-lock) build).
