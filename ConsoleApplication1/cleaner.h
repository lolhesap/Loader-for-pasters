#include <iostream>
#include <random>
#include <urlmon.h>
#include <iostream>
#pragma comment(lib, "urlmon.lib")
#include <stdio.h>
#include <string>
#include <windows.h>
#include <Windows.h>
#include <tchar.h>
#include <Wininet.h>
#include <filesystem>
#include <Windows.h>



#include "mac.h"
#include "printa.h"
#include "xor.hpp"
#include <urlmon.h>


//*DONT DO NOTHING HERE*///

void deleteregs()
{
	system(XorString("reg delete HKLM\\SYSTEM\\ControlSet001\\Enum\\DISPLAY\\ACR06A7 /f"));
	system(XorString("reg delete HKLM\\SYSTEM\\ControlSet001\\Enum\\DISPLAY\\PHLC0B1 /f"));
	system(XorString("reg delete HKLM\\SYSTEM\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration /f"));
	system(XorString("reg delete HKLM\\SYSTEM\\CurrentControlSet\\Control\\GraphicsDrivers\\Connectivity /f"));
	system(XorString("reg delete HKLM\\System\\CurrentControlSet\\Control\\TimeZoneInformation /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\Microsoft\\Windows\" \"NT\\CurrentVersion\\Notifications\\Data /v 418A073AA3BC3475 /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f"));
	system(XorString("reg delete HKLM\\HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0 /f"));
	system(XorString("REG ADD HKCU\\Software\\Microsoft\\Direct3D /v WHQLClass /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\ComputerName\\ComputerName /v ComputerName /t REG_SZ /d DESKTOP-%random% /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\ComputerName\\ActiveComputerName /v ComputerName /t REG_SZ /d DESKTOP-%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate /v SusClientId /t REG_SZ /d %random%%random%-%random%-%random%-%random% /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\HardwareConfig /v LastConfig /t REG_SZ /d {%random%-%random%-%random} /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\HardwareConfig\\Current /v BaseBoardProduct /t REG_SZ /d %random%-%random%%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\Software\\Microsoft /v BuildLab /t REG_SZ /d %random%-%random% /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\Software\\Microsoft /v BuildLabEx /t REG_SZ /d %random%-%random% /f"));
	system(XorString("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v BaseBoardProduct /t REG_SZ /d %random%-%random%%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\ControlSet001\\Services\\kbdclass\\Parameters /v WppRecorder_TraceGuid /t REG_SZ /d {%random%-%random%-%random%-%random%%random%} /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\ControlSet001\\Services\\mouhid\\Parameters /v WppRecorder_TraceGuid /t REG_SZ /d {%random%-%random%-%random%-%random%%random%} /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\ControlSet001\\Control\\Class\\{4d36e968-e325-11ce-bfc1-08002be10318}\\0000 /v UserModeDriverGUID /t REG_SZ /d {%random%-%random%-%random%-%random%%random%} /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v BuildBranch /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v BuildGUID /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v BuildLab /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("REG ADD HKLM\\HARDWARE\\DEVICEMAP\\Scsi\\Scsi\" \"Port\" \"0\\Scsi\" \"Bus\" \"0\\Target\" \"Id\" \"0\\Logical\" \"Unit\" \"Id\" \"0 /v Identifier /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("REG ADD HKLM\\HARDWARE\\DEVICEMAP\\Scsi\\Scsi\" \"Port\" \"1\\Scsi\" \"Bus\" \"0\\Target\" \"Id\" \"0\\Logical\" \"Unit\" \"Id\" \"0 /v Identifier /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\MultifunctionAdapter\\0\\DiskController\\0\\DiskPeripheral\\0 /v Identifier /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\MultifunctionAdapter\\0\\DiskController\\0\\DiskPeripheral\\1 /v Identifier /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\ControlSet001\\Services\\BasicDisplay\\Video /v VideoID /t REG_SZ /d {%random%-%random%-%random%-%random%%random%} /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\SQMClient /v MachineId /t REG_SZ /d {%random%-%random%-%random%-%random%%random%} /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters /v Hostname /t REG_SZ /d DESKTOP-%random% /f"));
	system(XorString("REG ADD HKLM\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters /v Domain /t REG_SZ /d %random% /f"));
	system(XorString("REG ADD HKLM\\System\\CurrentControlSet\\Control\\DevQuery\\6 /v UUID /t REG_SZ /d %random% /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters /v NV\" \"Hostname /t REG_SZ /d DESKTOP-%random% /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\IDConfigDB\\Hardware\" \"Profiles\\0001 /v HwProfileGuid /t REG_SZ /d {%random%%random%-%random%-%random%-%random%%random%} /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\IDConfigDB\\Hardware\" \"Profiles\\0001 /v GUID /t REG_SZ /d {%random%%random%-%random%-%random%-%random%%random%} /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v BuildGUID /t REG_SZ /d %random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v REGisteredOwner /t REG_SZ /d %random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v REGisteredOrganization /t REG_SZ /d %random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Cryptography /v GUID /t REG_SZ /d %random%-%random%-%random%-%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Cryptography /v MachineGuid /t REG_SZ /d %random%%random%-%random%-%random%-%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v ProductId /t REG_SZ /d %random%%random%-%random%-%random%-%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v InstallDate /t REG_SZ /d %random%%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v InstallTime /t REG_SZ /d %random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v BuildLabEx /t REG_SZ /d %random% /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\SystemInformation /v ComputerHardwareId /t REG_SZ /d {%random%%random%-%random%-%random%-%random%} /f"));
	system(XorString("REG delete HKCU\\Software\\Epic\" \"Games /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion\\Tracing\\Microsoft\\Profile\\Profile /v Guid /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("reg delete HKLM\\SOFTWARE\\Classes\\com.epicgames.launcher /f"));
	system(XorString("reg delete HKLM\\SOFTWARE\\WOW6432Node\\EpicGames /f"));
	system(XorString("reg delete HKLM\\SOFTWARE\\WOW6432Node\\Epic\" \"Games /f"));
	system(XorString("reg delete HKCR\\com.epicgames.launcher /f"));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Dfrg\\Statistics /f"));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\BitBucket\\Volume /f"));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MountPoints2\\CPC\\Volume /f"));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MountPoints2 /f"));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\BitBucket\\LastEnum /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate /v AccountDomainSid /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate /v PingID /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate /v SusClientId /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("reg delete HKLM\\SYSTEM\\CurrentControlSet\\Services\\mssmbios\\Data /v RegistersData /f"));
	system(XorString("reg delete HKLM\\SYSTEM\\CurrentControlSet\\Services\\mssmbios\\Data /v BiosData /f"));
	system(XorString("reg delete HKLM\\SYSTEM\\CurrentControlSet\\Services\\mssmbios\\Data /v AcpiData /f"));
	system(XorString("reg delete HKLM\\SYSTEM\\CurrentControlSet\\Services\\mssmbios\\Data /v SMBiosData /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\NVIDIA\" \"Corporation\\Global /v ClientUUID /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\NVIDIA\" \"Corporation\\Global /v PersistenceIdentifier /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\NVIDIA\" \"Corporation\\Global\\CoProcManager /v ChipsetMatchID /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("reg delete HKLM\\SYSTEM\\MountedDevices /f"));
	system(XorString("reg delete HKCU\\Software\\Microsoft\\Windows\\Shell\\Associations\\UrlAssociations\\com.epicgames.launcher /f"));
	system(XorString("reg delete HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\BitBucket /v LastEnum /f"));
	system(XorString("REG ADD HKCU\\Software\\Classes\\Interface /v ClsidStore /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\SystemInformation /v ComputerHardwareId /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\SystemInformation /v ComputerHardwareIds /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\SQMClient /v MachineId /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("reg delete HKCU\\Software\\Classes\\Interface /v ClsidStore /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\Class\\{4d36e968-e325-11ce-bfc1-08002be10318}\\0000 /v _DriverProviderInfo /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\Class\\{4d36e968-e325-11ce-bfc1-08002be10318}\\0000 /v UserModeDriverGUID /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f"));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack\\SettingsRequests /f"));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion\\SoftwareProtectionPlatform /v BackupProductKeyDefault /f"));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion\\SoftwareProtectionPlatform /v actionlist /f"));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion\\SoftwareProtectionPlatform /v ServiceSessionId /f"));
	system(XorString("reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\UserAssist /f"));
	system(XorString("reg delete HKCU\\Software\\Hex-Rays\\IDA\\History /f"));
	system(XorString("reg delete HKCU\\Software\\Hex-Rays\\IDA\\History64 /f"));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion\\SoftwareProtectionPlatform /v ServiceSessionId /f"));
	system(XorString("REG ADD HKCU\\Software\\Microsoft\\Direct3D /v WHQLClass /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f"));
	system(XorString("REG ADD HKCU\\Software\\Classes\\Installer\\Dependencies /v MSICache /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Services\\TPM\\WMI /v WindowsAIKHash /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate /v SusClientIdValidation /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f"));
	system(XorString("REG ADD HKCU\\SYSTEM\\CurrentControlSet\\Services\\TPM\\ODUID /v RandomSeed /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Internet\" \"Explorer\\Migration /v IE\" \"Installed\" \"Date /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v DigitalProductId /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v DigitalProductId4 /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\SQMClient /v WinSqmFirstSessionStartTime /t REG_QWORD /d %random%%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v InstallTime /t REG_QWORD /d %random%%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v InstallDate /t REG_QWORD /d %random%%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack\\SevilleEventlogManager /v LastEventlogWrittenTime /t REG_QWORD /d %random%%random%%random% /f"));
	system(XorString("REG ADD HKLM\\System\\CurrentControlSet\\Control\\Notifications /v 418A073AA3BC8075 /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f"));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WINEVT\\Channels\\Microsoft-Windows-Kernel-EventTracing\/Admin /v OwningPublisher /t REG_SZ /d {%random%-%random%-%random%%random%} /f"));;
	system(XorString("REG ADD HKLM\\SOFTWARE\Microsoft\\Windows\" \"NT\\CurrentVersion\\Notifications\\Data /v 418A073AA3BC3475 /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f "));
	system(XorString("reg delete HKLM\\HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0 /f "));
	system(XorString("REG ADD HKCU\\Software\\Microsoft\\Direct3D /v WHQLClass /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\ComputerName\\ComputerName /v ComputerName /t REG_SZ /d DESKTOP-%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\ComputerName\\ActiveComputerName /v ComputerName /t REG_SZ /d DESKTOP-%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate /v SusClientId /t REG_SZ /d %random%-%random%-%random%-%random%-%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\HardwareConfig /v LastConfig /t REG_SZ /d {%random%-%random%-%random} /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\HardwareConfig\\Current /v BaseBoardProduct /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\Software\\Microsoft /v BuildLab /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\Software\\Microsoft /v BuildLabEx /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v BaseBoardProduct /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\ControlSet001\\Services\\kbdclass\\Parameters /v WppRecorder_TraceGuid /t REG_SZ /d {%random%-%random%-%random%-%random%%random%} /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\ControlSet001\\Services\\mouhid\\Parameters /v WppRecorder_TraceGuid /t REG_SZ /d {%random%-%random%-%random%-%random%%random%} /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\ControlSet001\\Control\\Class\\{4d36e968-e325-11ce-bfc1-08002be10318}\\0000 /v UserModeDriverGUID /t REG_SZ /d {%random%-%random%-%random%-%random%%random%} /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v BuildBranch /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v BuildGUID /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v BuildLab /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("REG ADD HKLM\\HARDWARE\\DEVICEMAP\\Scsi\\Scsi\" \"Port\" \"0\\Scsi\" \"Bus\" \"0\\Target\" \"Id\" \"0\\Logical\" \"Unit\" \"Id\" \"0 /v Identifier /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("REG ADD HKLM\\HARDWARE\\DEVICEMAP\\Scsi\\Scsi\" \"Port\" \"1\\Scsi\" \"Bus\" \"0\\Target\" \"Id\" \"0\\Logical\" \"Unit\" \"Id\" \"0 /v Identifier /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\MultifunctionAdapter\\0\\DiskController\\0\\DiskPeripheral\\0 /v Identifier /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\MultifunctionAdapter\\0\\DiskController\\0\\DiskPeripheral\\1 /v Identifier /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\ControlSet001\\Services\\BasicDisplay\\Video /v VideoID /t REG_SZ /d {%random%-%random%-%random%-%random%%random%} /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\SQMClient /v MachineId /t REG_SZ /d {%random%-%random%-%random%-%random%%random%} /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters /v Hostname /t REG_SZ /d DESKTOP-%random% /f "));
	system(XorString("REG ADD HKLM\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters /v Domain /t REG_SZ /d %random% /f "));
	system(XorString("REG ADD HKLM\\System\\CurrentControlSet\\Control\\DevQuery\\6 /v UUID /t REG_SZ /d %random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters /v NV\" \"Hostname /t REG_SZ /d DESKTOP-%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\IDConfigDB\\Hardware\" \"Profiles\\0001 /v HwProfileGuid /t REG_SZ /d {%random%%random%-%random%-%random%-%random%%random%} /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\IDConfigDB\\Hardware\" \"Profiles\\0001 /v GUID /t REG_SZ /d {%random%%random%-%random%-%random%-%random%%random%} /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v BuildGUID /t REG_SZ /d %random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v REGisteredOwner /t REG_SZ /d %random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v REGisteredOrganization /t REG_SZ /d %random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v ProductId /t REG_SZ /d %random%%random%-%random%-%random%-%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v InstallDate /t REG_SZ /d %random%%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v InstallTime /t REG_SZ /d %random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v BuildLabEx /t REG_SZ /d %random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\SystemInformation /v ComputerHardwareId /t REG_SZ /d {%random%%random%-%random%-%random%-%random%} /f "));
	system(XorString("REG delete HKCU\\Software\\Epic\" \"Games /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion\\Tracing\\Microsoft\\Profile\\Profile /v Guid /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("reg delete HKLM\\SOFTWARE\\Classes\\com.epicgames.launcher /f "));
	system(XorString("reg delete HKLM\\SOFTWARE\\WOW6432Node\\EpicGames /f "));
	system(XorString("reg delete HKLM\\SOFTWARE\\WOW6432Node\\Epic\" \"Games /f "));
	system(XorString("reg delete HKCR\\com.epicgames.launcher /f "));
	system(XorString("reg delete HKLM\\SYSTEM\\MountedDevices /f "));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Dfrg\\Statistics /f "));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\BitBucket\\Volume /f "));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MountPoints2\\CPC\\Volume /f "));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MountPoints2 /f "));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\BitBucket\\LastEnum /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate /v AccountDomainSid /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate /v PingID /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate /v SusClientId /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("reg delete HKLM\\SYSTEM\\CurrentControlSet\\Services\\mssmbios\\Data /v SMBiosData /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\NVIDIA\" \"Corporation\\Global /v ClientUUID /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\NVIDIA\" \"Corporation\\Global /v PersistenceIdentifier /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\NVIDIA\" \"Corporation\\Global\\CoProcManager /v ChipsetMatchID /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("reg delete HKLM\\SYSTEM\\MountedDevices /f "));
	system(XorString("reg delete HKCU\\Software\\Microsoft\\Windows\\Shell\\Associations\\UrlAssociations\\com.epicgames.launcher /f "));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Dfrg\\Statistics /f "));
	system(XorString("reg delete HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\BitBucket\\Volume /f "));
	system(XorString("reg delete HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MountPoints2\\CPC\\Volume /f "));
	system(XorString("reg delete HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MountPoints2 /f "));
	system(XorString("reg delete HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\BitBucket /v LastEnum /f "));
	system(XorString("REG ADD HKCU\\Software\\Classes\\Interface /v ClsidStore /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\SystemInformation /v ComputerHardwareId /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\SystemInformation /v ComputerHardwareIds /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\SQMClient /v MachineId /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("reg delete HKCU\\Software\\Classes\\Interface /v ClsidStore /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\Class\\{4d36e968-e325-11ce-bfc1-08002be10318}\\0000 /v _DriverProviderInfo /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Control\\Class\\{4d36e968-e325-11ce-bfc1-08002be10318}\\0000 /v UserModeDriverGUID /t REG_SZ /d %random%-%random%-%random%-%random%%random% /f "));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack\\SettingsRequests /f "));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion\\SoftwareProtectionPlatform /v BackupProductKeyDefault /f "));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion\\SoftwareProtectionPlatform /v actionlist /f "));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion\\SoftwareProtectionPlatform /v ServiceSessionId /f "));
	system(XorString("reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\UserAssist /f "));
	system(XorString("reg delete HKCU\\Software\\Hex-Rays\\IDA\\History /f "));
	system(XorString("reg delete HKCU\\Software\\Hex-Rays\\IDA\\History64 /f "));
	system(XorString("reg delete HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion\\SoftwareProtectionPlatform /v ServiceSessionId /f "));
	system(XorString("REG ADD HKCU\\Software\\Microsoft\\Direct3D /v WHQLClass /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f "));
	system(XorString("REG ADD HKCU\\Software\\Classes\\Installer\\Dependencies /v MSICache /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Services\\TPM\\WMI /v WindowsAIKHash /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate /v SusClientIdValidation /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f "));
	system(XorString("REG ADD HKCU\\SYSTEM\\CurrentControlSet\\Services\\TPM\\ODUID /v RandomSeed /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Internet\" \"Explorer\\Migration /v IE\" \"Installed\" \"Date /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v DigitalProductId /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v DigitalProductId4 /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\SQMClient /v WinSqmFirstSessionStartTime /t REG_QWORD /d %random%%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v InstallTime /t REG_QWORD /d %random%%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v InstallDate /t REG_QWORD /d %random%%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Diagnostics\\DiagTrack\\SevilleEventlogManager /v LastEventlogWrittenTime /t REG_QWORD /d %random%%random%%random% /f "));
	system(XorString("REG ADD HKLM\\System\\CurrentControlSet\\Control\\Notifi%random%ions /v 418A073AA3BC8075 /t REG_BINARY /d %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random%%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WINEVT\\Channels\\Microsoft-Windows-Kernel-EventTracing\/Admin /v OwningPublisher /t REG_SZ /d {%random%-%random%-%random%%random%} /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {037bf8fa-5b18-50b2-ba13-2580426ff357} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {5c8c5d29-b5ed-5229-a26c-e661b1e1129b} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {f2461683-1fa0-5629-b022-d0ffaee63ed0} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {41417485-85de-59b6-a9fa-e7f706b1d992} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {ca09ac19-a9a0-5236-a0f6-ce81dcc46d9a} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {81287c07-f962-5bac-a75b-e98c2c8f5f93} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a0a97217-b3b7-58c7-a1fd-1a9295288031} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {28c62655-d5a5-58ee-9dae-4c1d2c09f9ef} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {67b72407-d583-525b-9f54-cc0f8ee0552e} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a4d0f078-0772-5228-a37a-db55fdb8ee04} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {21a4c841-f6fc-5651-8cde-435c9effc378} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {cd0c55c7-a3ae-55b4-add7-578cdc06511f} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {feb9c5fe-1cdf-59a8-8008-550892c61c37} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {6ef3fe51-9106-55cf-a553-f5d21bb78cc3} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {7b3e1573-c771-5dbd-b795-f8344771349d} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {41417485-85de-59b6-a9fa-e7f706b1d992} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {ca09ac19-a9a0-5236-a0f6-ce81dcc46d9a} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {81287c07-f962-5bac-a75b-e98c2c8f5f93} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a0a97217-b3b7-58c7-a1fd-1a9295288031} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {28c62655-d5a5-58ee-9dae-4c1d2c09f9ef} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {67b72407-d583-525b-9f54-cc0f8ee0552e} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a4d0f078-0772-5228-a37a-db55fdb8ee04} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {21a4c841-f6fc-5651-8cde-435c9effc378} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {cd0c55c7-a3ae-55b4-add7-578cdc06511f} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {feb9c5fe-1cdf-59a8-8008-550892c61c37} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {6ef3fe51-9106-55cf-a553-f5d21bb78cc3} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {7b3e1573-c771-5dbd-b795-f8344771349d} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {037bf8fa-5b18-50b2-ba13-2580426ff357} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {5c8c5d29-b5ed-5229-a26c-e661b1e1129b} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {f2461683-1fa0-5629-b022-d0ffaee63ed0} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {41417485-85de-59b6-a9fa-e7f706b1d992} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {ca09ac19-a9a0-5236-a0f6-ce81dcc46d9a} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {81287c07-f962-5bac-a75b-e98c2c8f5f93} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a0a97217-b3b7-58c7-a1fd-1a9295288031} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {28c62655-d5a5-58ee-9dae-4c1d2c09f9ef} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {67b72407-d583-525b-9f54-cc0f8ee0552e} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a4d0f078-0772-5228-a37a-db55fdb8ee04} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {21a4c841-f6fc-5651-8cde-435c9effc378} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {cd0c55c7-a3ae-55b4-add7-578cdc06511f} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {feb9c5fe-1cdf-59a8-8008-550892c61c37} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {6ef3fe51-9106-55cf-a553-f5d21bb78cc3} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {7b3e1573-c771-5dbd-b795-f8344771349d} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {41417485-85de-59b6-a9fa-e7f706b1d992} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {ca09ac19-a9a0-5236-a0f6-ce81dcc46d9a} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {81287c07-f962-5bac-a75b-e98c2c8f5f93} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a0a97217-b3b7-58c7-a1fd-1a9295288031} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {28c62655-d5a5-58ee-9dae-4c1d2c09f9ef} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {67b72407-d583-525b-9f54-cc0f8ee0552e} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a4d0f078-0772-5228-a37a-db55fdb8ee04} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {21a4c841-f6fc-5651-8cde-435c9effc378} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {cd0c55c7-a3ae-55b4-add7-578cdc06511f} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {feb9c5fe-1cdf-59a8-8008-550892c61c37} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {6ef3fe51-9106-55cf-a553-f5d21bb78cc3} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {7b3e1573-c771-5dbd-b795-f8344771349d} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {037bf8fa-5b18-50b2-ba13-2580426ff357} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {5c8c5d29-b5ed-5229-a26c-e661b1e1129b} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {f2461683-1fa0-5629-b022-d0ffaee63ed0} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {41417485-85de-59b6-a9fa-e7f706b1d992} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {ca09ac19-a9a0-5236-a0f6-ce81dcc46d9a} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {81287c07-f962-5bac-a75b-e98c2c8f5f93} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a0a97217-b3b7-58c7-a1fd-1a9295288031} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {28c62655-d5a5-58ee-9dae-4c1d2c09f9ef} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {67b72407-d583-525b-9f54-cc0f8ee0552e} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a4d0f078-0772-5228-a37a-db55fdb8ee04} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {21a4c841-f6fc-5651-8cde-435c9effc378} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {cd0c55c7-a3ae-55b4-add7-578cdc06511f} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {feb9c5fe-1cdf-59a8-8008-550892c61c37} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {6ef3fe51-9106-55cf-a553-f5d21bb78cc3} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {7b3e1573-c771-5dbd-b795-f8344771349d} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {41417485-85de-59b6-a9fa-e7f706b1d992} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {ca09ac19-a9a0-5236-a0f6-ce81dcc46d9a} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {81287c07-f962-5bac-a75b-e98c2c8f5f93} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a0a97217-b3b7-58c7-a1fd-1a9295288031} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {28c62655-d5a5-58ee-9dae-4c1d2c09f9ef} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {67b72407-d583-525b-9f54-cc0f8ee0552e} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a4d0f078-0772-5228-a37a-db55fdb8ee04} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {21a4c841-f6fc-5651-8cde-435c9effc378} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {cd0c55c7-a3ae-55b4-add7-578cdc06511f} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {feb9c5fe-1cdf-59a8-8008-550892c61c37} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {6ef3fe51-9106-55cf-a553-f5d21bb78cc3} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {7b3e1573-c771-5dbd-b795-f8344771349d} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {037bf8fa-5b18-50b2-ba13-2580426ff357} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {5c8c5d29-b5ed-5229-a26c-e661b1e1129b} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {f2461683-1fa0-5629-b022-d0ffaee63ed0} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {41417485-85de-59b6-a9fa-e7f706b1d992} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {ca09ac19-a9a0-5236-a0f6-ce81dcc46d9a} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {81287c07-f962-5bac-a75b-e98c2c8f5f93} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a0a97217-b3b7-58c7-a1fd-1a9295288031} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {28c62655-d5a5-58ee-9dae-4c1d2c09f9ef} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {67b72407-d583-525b-9f54-cc0f8ee0552e} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a4d0f078-0772-5228-a37a-db55fdb8ee04} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {21a4c841-f6fc-5651-8cde-435c9effc378} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {cd0c55c7-a3ae-55b4-add7-578cdc06511f} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {feb9c5fe-1cdf-59a8-8008-550892c61c37} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {6ef3fe51-9106-55cf-a553-f5d21bb78cc3} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {7b3e1573-c771-5dbd-b795-f8344771349d} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {41417485-85de-59b6-a9fa-e7f706b1d992} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {ca09ac19-a9a0-5236-a0f6-ce81dcc46d9a} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {81287c07-f962-5bac-a75b-e98c2c8f5f93} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a0a97217-b3b7-58c7-a1fd-1a9295288031} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {28c62655-d5a5-58ee-9dae-4c1d2c09f9ef} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {67b72407-d583-525b-9f54-cc0f8ee0552e} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a4d0f078-0772-5228-a37a-db55fdb8ee04} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {21a4c841-f6fc-5651-8cde-435c9effc378} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {cd0c55c7-a3ae-55b4-add7-578cdc06511f} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {feb9c5fe-1cdf-59a8-8008-550892c61c37} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {6ef3fe51-9106-55cf-a553-f5d21bb78cc3} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {7b3e1573-c771-5dbd-b795-f8344771349d} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKU\\S-1-5-21-1890030585-3173979648-977140667-1001_Classes\\Local Settings\\Software\\Microsoft\\Windows\\Shell\\BagMRU\\6\\0\\0\\0 /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\ControlSet001\\Control\\Class\\{4d36e967-e325-11ce-bfc1-08002be10318}\\Configuration\\Variables\\BusDeviceDesc /v PropertyGuid /t REG_SZ /d {%Hex8%-%Hex1%-%Hex0%-%Hex1%-%Hex10%} /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\ControlSet001\\Control\\Class\\{4d36e968-e325-11ce-bfc1-08002be10318}\\Configuration\\Variables\\DeviceDesc /v PropertyGuid /t REG_SZ /d {%Hex8%-%Hex1%-%Hex0%-%Hex1%-%Hex10%} /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\ControlSet001\\Control\\Class\\{4d36e968-e325-11ce-bfc1-08002be10318}\\Configuration\\Variables\\Driver /v PropertyGuid /t REG_SZ /d {%Hex8%-%Hex1%-%Hex0%-%Hex1%-%Hex10%} /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\SystemInformation /v ComputerHardwareId /t REG_SZ /d {%Hex8%-%Hex1%-%Hex0%-%Hex1%-%Hex10%} /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\HARDWARE\\DESCRIPTION\\System\\BIOS /v BaseBoardManufacturer /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\HARDWARE\\DESCRIPTION\\System\\BIOS /v SystemManufacturer /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\HARDWARE\\DESCRIPTION\\System\\BIOS /v SystemProductName /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\ControlSet001\\Control\\SystemInformation /v SystemManufacturer /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\ControlSet001\\Control\\SystemInformation /v SystemProductName /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\SystemInformation /v SystemManufacturer /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\SystemInformation /v SystemProductName /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\Current /v SystemManufacturer /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\Current /v SystemProductName /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\Current /v BaseBoardManufacturer /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f} /v SystemManufacturer /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f} /v SystemProductName /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f} /v BaseBoardManufacturer /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\Current\\ComputerIds /v {037bf8fa-5b18-50b2-ba13-2580426ff357} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\Current\\ComputerIds /v {5c8c5d29-b5ed-5229-a26c-e661b1e1129b} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\Current\\ComputerIds /v {f2461683-1fa0-5629-b022-d0ffaee63ed0} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {037bf8fa-5b18-50b2-ba13-2580426ff357} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {5c8c5d29-b5ed-5229-a26c-e661b1e1129b} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {f2461683-1fa0-5629-b022-d0ffaee63ed0} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {41417485-85de-59b6-a9fa-e7f706b1d992} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {ca09ac19-a9a0-5236-a0f6-ce81dcc46d9a} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {81287c07-f962-5bac-a75b-e98c2c8f5f93} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a0a97217-b3b7-58c7-a1fd-1a9295288031} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {28c62655-d5a5-58ee-9dae-4c1d2c09f9ef} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {67b72407-d583-525b-9f54-cc0f8ee0552e} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a4d0f078-0772-5228-a37a-db55fdb8ee04} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {21a4c841-f6fc-5651-8cde-435c9effc378} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {cd0c55c7-a3ae-55b4-add7-578cdc06511f} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {feb9c5fe-1cdf-59a8-8008-550892c61c37} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {6ef3fe51-9106-55cf-a553-f5d21bb78cc3} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {7b3e1573-c771-5dbd-b795-f8344771349d} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {41417485-85de-59b6-a9fa-e7f706b1d992} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {ca09ac19-a9a0-5236-a0f6-ce81dcc46d9a} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {81287c07-f962-5bac-a75b-e98c2c8f5f93} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a0a97217-b3b7-58c7-a1fd-1a9295288031} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {28c62655-d5a5-58ee-9dae-4c1d2c09f9ef} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {67b72407-d583-525b-9f54-cc0f8ee0552e} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a4d0f078-0772-5228-a37a-db55fdb8ee04} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {21a4c841-f6fc-5651-8cde-435c9effc378} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {cd0c55c7-a3ae-55b4-add7-578cdc06511f} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {feb9c5fe-1cdf-59a8-8008-550892c61c37} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {6ef3fe51-9106-55cf-a553-f5d21bb78cc3} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {7b3e1573-c771-5dbd-b795-f8344771349d} /t REG_SZ /d /ve /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\HARDWARE\\DESCRIPTION\\System\\BIOS /v BaseBoardManufacturer /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\HARDWARE\\DESCRIPTION\\System\\BIOS /v SystemManufacturer /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\HARDWARE\\DESCRIPTION\\System\\BIOS /v SystemProductName /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\ControlSet001\\Control\\SystemInformation /v SystemManufacturer /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\ControlSet001\\Control\\SystemInformation /v SystemProductName /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\SystemInformation /v SystemManufacturer /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\SystemInformation /v SystemProductName /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\Current /v SystemManufacturer /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\Current /v SystemProductName /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\Current /v BaseBoardManufacturer /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f} /v SystemManufacturer /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f} /v SystemProductName /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f} /v BaseBoardManufacturer /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\Current\\ComputerIds /v {037bf8fa-5b18-50b2-ba13-2580426ff357} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\Current\\ComputerIds /v {5c8c5d29-b5ed-5229-a26c-e661b1e1129b} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\Current\\ComputerIds /v {f2461683-1fa0-5629-b022-d0ffaee63ed0} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {037bf8fa-5b18-50b2-ba13-2580426ff357} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {5c8c5d29-b5ed-5229-a26c-e661b1e1129b} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {f2461683-1fa0-5629-b022-d0ffaee63ed0} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {41417485-85de-59b6-a9fa-e7f706b1d992} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {ca09ac19-a9a0-5236-a0f6-ce81dcc46d9a} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {81287c07-f962-5bac-a75b-e98c2c8f5f93} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a0a97217-b3b7-58c7-a1fd-1a9295288031} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {28c62655-d5a5-58ee-9dae-4c1d2c09f9ef} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {67b72407-d583-525b-9f54-cc0f8ee0552e} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a4d0f078-0772-5228-a37a-db55fdb8ee04} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {21a4c841-f6fc-5651-8cde-435c9effc378} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {cd0c55c7-a3ae-55b4-add7-578cdc06511f} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {feb9c5fe-1cdf-59a8-8008-550892c61c37} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {6ef3fe51-9106-55cf-a553-f5d21bb78cc3} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {7b3e1573-c771-5dbd-b795-f8344771349d} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {41417485-85de-59b6-a9fa-e7f706b1d992} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {ca09ac19-a9a0-5236-a0f6-ce81dcc46d9a} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {81287c07-f962-5bac-a75b-e98c2c8f5f93} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a0a97217-b3b7-58c7-a1fd-1a9295288031} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {28c62655-d5a5-58ee-9dae-4c1d2c09f9ef} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {67b72407-d583-525b-9f54-cc0f8ee0552e} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {a4d0f078-0772-5228-a37a-db55fdb8ee04} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {21a4c841-f6fc-5651-8cde-435c9effc378} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {cd0c55c7-a3ae-55b4-add7-578cdc06511f} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {feb9c5fe-1cdf-59a8-8008-550892c61c37} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {6ef3fe51-9106-55cf-a553-f5d21bb78cc3} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKEY_LOCAL_MACHINE\\SYSTEM\\HardwareConfig\\{a0408a6a-546c-11ea-af4e-4df901723b0f}\\ComputerIds /v {7b3e1573-c771-5dbd-b795-f8344771349d} /t REG_SZ /d %random%-%random%%random%%random% /f "));
	system(XorString("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v BaseBoardManufacturer /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v BaseBoardProduct /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v BaseBoardVersion /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v BIOSVersion /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v SystemFamily /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v SystemManufacturer /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v SystemProductName /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v SystemSKU /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v SystemVersion /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\HARDWARE\\DESCRIPTION\\System\\BIOS /v SystemProductName /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\SOFTWARE\\WOW6432Node\\Microsoft\\Windows NT\\CurrentVersion /v RegisteredOrganization /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\ControlSet001\\Services\\Tcpip\\Parameters /v HostName /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\ControlSet001\\Services\\Tcpip\\Parameters /v NV HostName /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\ControlSet001\\Services\\Tcpip\\Parameters\\DNSRegisteredAdapters\\{146337E2-B748-4468-AC39-FCBBA2D507EC} /v Hostname /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\ControlSet001\\Services\\Tcpip\\Parameters\\DNSRegisteredAdapters\\{34E2F73D-D367-4931-8A5F-FB72BBE02BCB} /v Hostname /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\ControlSet001\\Services\\Tcpip\\Parameters\\DNSRegisteredAdapters\\{8B66020F-34DF-4179-BC45-E6419E7905AD} /v Hostname /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters /v HostName /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters /v NV HostName /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters\\DNSRegisteredAdapters\\{146337E2-B748-4468-AC39-FCBBA2D507EC} /v Hostname /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters\\DNSRegisteredAdapters\\{34E2F73D-D367-4931-8A5F-FB72BBE02BCB} /v Hostname /t REG_SZ /d %random%-%random% /f "));
	system(XorString("REG ADD HKLM\\SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters\\DNSRegisteredAdapters\\{8B66020F-34DF-4179-BC45-E6419E7905AD} /v Hostname /t REG_SZ /d %random%-%random% /f "));
}
void cleaner_for_epic_launcher()
{
	DeleteFileW(XorWideString(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Base.ini"));
	DeleteFileW(XorWideString(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\BaseGame.ini"));
	DeleteFileW(XorWideString(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Windows\\WindowsGame.ini"));
	DeleteFileW(XorWideString(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\BaseInput.ini"));
	DeleteFileW(XorWideString(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Portal\\Config\\UserLightmass.ini"));
	DeleteFileW(XorWideString(L"C:\\Program Files(x86)\\Epic Games\\Launcher\\Engine\\Config\\Windows\\BaseWindowsLightmass.ini"));
	DeleteFileW(XorWideString(L"C:\\Program Files(x86)\Epic Games\\Launcher\\Portal\\Config\\UserScalability.ini"));
	DeleteFileW(XorWideString(L"C:\\Program Files(x86)\Epic Games\\Launcher\\Engine\\Config\\BaseHardware.ini"));
	DeleteFileW(XorWideString(L"C:\\Program Files(x86)\Epic Games\\Launcher\\Portal\\Config\\NotForLicensees\\Windows\\WindowsHardware.ini"));
}
void cleaner_for_network()
{
	system(XorString("netsh winsock reset"));
	system(XorString("netsh winsock reset catalog"));
	system(XorString("netsh int ip reset"));
	system(XorString("netsh advfirewall reset"));
	system(XorString("netsh int reset all"));
	system(XorString("netsh int ipv4 reset"));
	system(XorString("netsh int ipv6 reset"));
	system(XorString("ipconfig / release"));
	system(XorString("ipconfig / renew"));
	system(XorString("ipconfig / flushdns"));
}
void cleaner_for_anticheat()
{
	system(XorString("reg delete HKLM\\SOFTWARE\\WOW6432Node\\EasyAntiCheat /f"));
	system(XorString("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\EasyAntiCheat /f"));
	system(XorString("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\BEService /f"));
}
std::wstring GetCurrentUserName()
{
	wchar_t
		un[UNLEN + 1];
	DWORD unLen = UNLEN + 1;
	GetUserNameW(un, &unLen);
	return un;
}
void nettoyage_c()
{
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\CloudStore"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved"));
	system(XorString("rmdir /s /q C:\\Windows\\INF"));
	system(XorString("rmdir /s /q C:\\ProgramData\\%username%\\Microsoft\\XboxLive\\NSALCache"));
	system(XorString("rmdir /s /q C:\\Users\\Public\\Documents"));
	system(XorString("rmdir /s /q C:\\Windows\\Prefetch"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\D3DSCache"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\CrashReportClient"));
	system(XorString("rmdir /s /q C:\\Windows\\temp"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore"));
	system(XorString("rmdir /s /q C:\\Windows\\SoftwareDistribution\\DataStore\\Logs"));
	system(XorString("rmdir /s /q C:\\ProgramData\\Microsoft\\Windows\\WER\\Temp"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\AMD\\DxCache"));
	system(XorString("rmdir /s /q ""\"\C:\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("rmdir /s /q C:\\Windows\\Prefetch"));
	system(XorString("@del /s /f /a:h / a : a / q C:\\Users\\username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\*.*"));
	system(XorString("@del /s /f /a:h / a : a / q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\*.*"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\Settings"));
	system(XorString("rmdir /s /q ""\"\C:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins"));
	system(XorString("rmdir /s /q ""\"\C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Plugins"));
	system(XorString("rmdir /s /q ""\"\C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir"));
	system(XorString("rmdir /s /q ""\"\C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Config"));
	system(XorString("rmdir /s /q ""\"\C:\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Roaming\\EasyAntiCheat"));
	system(XorString("del /f /s /q C:\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\NetworksCache"));
	system(XorString("del /f /s /q C:\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\Rules"));
	system(XorString("rmdir /s /q C:\\Windows\\ServiceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\DeliveryOptimization\\Cache"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Temp"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\Intel"));
	system(XorString("rmdir /s /q C:\\Windows\\System32\\config\\systemprofile\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData"));
	system(XorString("rmdir /s /q ""\"\C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
}
void nettoyage_d()
{
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\CloudStore"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved"));
	system(XorString("rmdir /s /q D:\\Windows\\INF"));
	system(XorString("rmdir /s /q D:\\ProgramData\\%username%\\Microsoft\\XboxLive\\NSALCache"));
	system(XorString("rmdir /s /q D:\\Users\\Public\\Documents"));
	system(XorString("rmdir /s /q D:\\Windows\\Prefetch"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\D3DSCache"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\CrashReportClient"));
	system(XorString("rmdir /s /q D:\\Windows\\temp"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore"));
	system(XorString("rmdir /s /q D:\\Windows\\SoftwareDistribution\\DataStore\\Logs"));
	system(XorString("rmdir /s /q D:\\ProgramData\\Microsoft\\Windows\\WER\\Temp"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\AMD\\DxCache"));
	system(XorString("rmdir /s /q ""\"\D:\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("rmdir /s /q D:\\Windows\\Prefetch"));
	system(XorString("@del /s /f /a:h / a : a / q D:\\Users\\username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\*.*"));
	system(XorString("@del /s /f /a:h / a : a / q D:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\*.*"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\Settings"));
	system(XorString("rmdir /s /q ""\"\D:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins"));
	system(XorString("rmdir /s /q ""\"\D:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Plugins"));
	system(XorString("rmdir /s /q ""\"\D:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir"));
	system(XorString("rmdir /s /q ""\"\D:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Config"));
	system(XorString("rmdir /s /q ""\"\D:\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Roaming\\EasyAntiCheat"));
	system(XorString("del /f /s /q D:\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\NetworksCache"));
	system(XorString("del /f /s /q D:\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\Rules"));
	system(XorString("rmdir /s /q D:\\Windows\\ServiceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\DeliveryOptimization\\Cache"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\Temp"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\Intel"));
	system(XorString("rmdir /s /q D:\\Windows\\System32\\config\\systemprofile\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData"));
	system(XorString("rmdir /s /q ""\"\D:\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
}
void nettoyage_e()
{
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\CloudStore"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved"));
	system(XorString("rmdir /s /q E:\\Windows\\INF"));
	system(XorString("rmdir /s /q E:\\ProgramData\\%username%\\Microsoft\\XboxLive\\NSALCache"));
	system(XorString("rmdir /s /q E:\\Users\\Public\\Documents"));
	system(XorString("rmdir /s /q E:\\Windows\\Prefetch"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\D3DSCache"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\CrashReportClient"));
	system(XorString("rmdir /s /q E:\\Windows\\temp"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore"));
	system(XorString("rmdir /s /q E:\\Windows\\SoftwareDistribution\\DataStore\\Logs"));
	system(XorString("rmdir /s /q E:\\ProgramData\\Microsoft\\Windows\\WER\\Temp"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\AMD\\DxCache"));
	system(XorString("rmdir /s /q ""\"\E:\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("rmdir /s /q E:\\Windows\\Prefetch"));
	system(XorString("@del /s /f /a:h / a : a / q E:\\Users\\username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\*.*"));
	system(XorString("@del /s /f /a:h / a : a / q E:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\*.*"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\Settings"));
	system(XorString("rmdir /s /q ""\"\E:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins"));
	system(XorString("rmdir /s /q ""\"\E:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Plugins"));
	system(XorString("rmdir /s /q ""\"\E:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir"));
	system(XorString("rmdir /s /q ""\"\E:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Config"));
	system(XorString("rmdir /s /q ""\"\E:\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Roaming\\EasyAntiCheat"));
	system(XorString("del /f /s /q E:\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\NetworksCache"));
	system(XorString("del /f /s /q E:\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\Rules"));
	system(XorString("rmdir /s /q E:\\Windows\\ServiceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\DeliveryOptimization\\Cache"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\Temp"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\Intel"));
	system(XorString("rmdir /s /q E:\\Windows\\System32\\config\\systemprofile\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData"));
	system(XorString("rmdir /s /q ""\"\E:\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
}
void nettoyage_f()
{
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\CloudStore"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved"));
	system(XorString("rmdir /s /q F:\\Windows\\INF"));
	system(XorString("rmdir /s /q F:\\ProgramData\\%username%\\Microsoft\\XboxLive\\NSALCache"));
	system(XorString("rmdir /s /q F:\\Users\\Public\\Documents"));
	system(XorString("rmdir /s /q F:\\Windows\\Prefetch"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\D3DSCache"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\CrashReportClient"));
	system(XorString("rmdir /s /q F:\\Windows\\temp"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore"));
	system(XorString("rmdir /s /q F:\\Windows\\SoftwareDistribution\\DataStore\\Logs"));
	system(XorString("rmdir /s /q F:\\ProgramData\\Microsoft\\Windows\\WER\\Temp"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\AMD\\DxCache"));
	system(XorString("rmdir /s /q ""\"\F:\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("rmdir /s /q F:\\Windows\\Prefetch"));
	system(XorString("@del /s /f /a:h / a : a / q F:\\Users\\username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\*.*"));
	system(XorString("@del /s /f /a:h / a : a / q F:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\*.*"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\Settings"));
	system(XorString("rmdir /s /q ""\"\F:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins"));
	system(XorString("rmdir /s /q ""\"\F:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Plugins"));
	system(XorString("rmdir /s /q ""\"\F:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir"));
	system(XorString("rmdir /s /q ""\"\F:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Config"));
	system(XorString("rmdir /s /q ""\"\F:\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Roaming\\EasyAntiCheat"));
	system(XorString("del /f /s /q F:\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\NetworksCache"));
	system(XorString("del /f /s /q F:\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\Rules"));
	system(XorString("rmdir /s /q F:\\Windows\\ServiceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\DeliveryOptimization\\Cache"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\Temp"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\Intel"));
	system(XorString("rmdir /s /q F:\\Windows\\System32\\config\\systemprofile\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData"));
	system(XorString("rmdir /s /q ""\"\F:\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
}

//---------------MAC--------------//

#define MALLOC(x) HeapAlloc(GetProcessHeap(), 0, (x))
#define FREE(x) HeapFree(GetProcessHeap(), 0, (x))

MyMACAddr::MyMACAddr()
{
	srand((unsigned)time(0));
}

MyMACAddr::~MyMACAddr()
{
}

string MyMACAddr::GenRandMAC()
{
	stringstream temp;
	int number = 0;
	string result;

	for (int i = 0; i < 6; i++)
	{
		number = rand() % 254;
		temp << setfill('0') << setw(2) << hex << number;
		if (i != 5)
		{
			temp << XorString("-");
		}
	}
	result = temp.str();

	for (auto& c : result)
	{
		c = toupper(c);
	}

	return result;
}

void MyMACAddr::showAdapterList()
{
	PIP_ADAPTER_INFO pAdapterInfo;
	PIP_ADAPTER_INFO pAdapter = NULL;
	DWORD dwRetVal = 0;
	UINT i;

	ULONG ulOutBufLen = sizeof(IP_ADAPTER_INFO);
	pAdapterInfo = (IP_ADAPTER_INFO*)MALLOC(sizeof(IP_ADAPTER_INFO));
	if (pAdapterInfo == NULL)
	{
		cerr << XorString("Error allocating memory needed to call GetAdaptersinfo.") << endl;
	}

	if (GetAdaptersInfo(pAdapterInfo, &ulOutBufLen) == ERROR_BUFFER_OVERFLOW) {
		FREE(pAdapterInfo);
		pAdapterInfo = (IP_ADAPTER_INFO*)MALLOC(ulOutBufLen);
		if (pAdapterInfo == NULL) {
			cerr << XorString("Error allocating memory needed to call GetAdaptersinfo") << endl;
		}
	}

	if ((dwRetVal = GetAdaptersInfo(pAdapterInfo, &ulOutBufLen)) == NO_ERROR) {
		pAdapter = pAdapterInfo;
		while (pAdapter)
		{
			for (i = 0; i < pAdapter->AddressLength; i++)
			{
				if (i == (pAdapter->AddressLength - 1))
					printf(XorString("%.2X\n"), (int)pAdapter->Address[i]);
				else
					printf(XorString("%.2X-"), (int)pAdapter->Address[i]);
			}
			pAdapter = pAdapter->Next;
		}
	}
	else {
		cerr << XorString("GetAdaptersInfo failed with error: ") << dwRetVal << endl;
	}
	if (pAdapterInfo)
		FREE(pAdapterInfo);
}

unordered_map<string, string> MyMACAddr::getAdapters()
{
	PIP_ADAPTER_INFO pAdapterInfo;
	PIP_ADAPTER_INFO pAdapter = NULL;
	DWORD dwRetVal = 0;

	unordered_map<string, string> result;
	stringstream temp;
	string str_mac;

	ULONG ulOutBufLen = sizeof(IP_ADAPTER_INFO);
	pAdapterInfo = (IP_ADAPTER_INFO*)MALLOC(sizeof(IP_ADAPTER_INFO));
	if (pAdapterInfo == NULL) {
		cerr << XorString("Error allocating memory needed to call GetAdaptersinfo") << endl;
	}

	if (GetAdaptersInfo(pAdapterInfo, &ulOutBufLen) == ERROR_BUFFER_OVERFLOW) {
		FREE(pAdapterInfo);
		pAdapterInfo = (IP_ADAPTER_INFO*)MALLOC(ulOutBufLen);
		if (pAdapterInfo == NULL) {
			cerr << XorString("Error allocating memory needed to call GetAdaptersinfo\n") << endl;
		}
	}

	if ((dwRetVal = GetAdaptersInfo(pAdapterInfo, &ulOutBufLen)) == NO_ERROR) {
		pAdapter = pAdapterInfo;
		while (pAdapter) {
			for (UINT i = 0; i < pAdapter->AddressLength; i++) {
				temp << setfill('0') << setw(2) << hex << (int)pAdapter->Address[i];
				if (i != pAdapter->AddressLength - 1)
				{
					temp << "-";
				}
			}
			str_mac = temp.str();
			temp.str(XorString(""));
			temp.rdbuf();
			for (auto& c : str_mac)
			{
				c = toupper(c);
			}

			result.insert({ pAdapter->Description, str_mac });
			pAdapter = pAdapter->Next;
		}
	}
	else {
		cerr << XorString("GetAdaptersInfo failed with error: ") << dwRetVal << endl;
	}
	if (pAdapterInfo)
		FREE(pAdapterInfo);

	return result;
}
unordered_map<string, string> getAdapters()
{
	PIP_ADAPTER_INFO pAdapterInfo;
	PIP_ADAPTER_INFO pAdapter = NULL;
	DWORD dwRetVal = 0;

	unordered_map<string, string> result;
	stringstream temp;
	string str_mac;

	ULONG ulOutBufLen = sizeof(IP_ADAPTER_INFO);
	pAdapterInfo = (IP_ADAPTER_INFO*)MALLOC(sizeof(IP_ADAPTER_INFO));
	if (pAdapterInfo == NULL) {
		cerr << XorString("Error allocating memory needed to call GetAdaptersinfo") << endl;
	}

	if (GetAdaptersInfo(pAdapterInfo, &ulOutBufLen) == ERROR_BUFFER_OVERFLOW) {
		FREE(pAdapterInfo);
		pAdapterInfo = (IP_ADAPTER_INFO*)MALLOC(ulOutBufLen);
		if (pAdapterInfo == NULL) {
			cerr << XorString("Error allocating memory needed to call GetAdaptersinfo\n") << endl;
		}
	}

	if ((dwRetVal = GetAdaptersInfo(pAdapterInfo, &ulOutBufLen)) == NO_ERROR) {
		pAdapter = pAdapterInfo;
		while (pAdapter) {
			for (UINT i = 0; i < pAdapter->AddressLength; i++) {
				temp << setfill('0') << setw(2) << hex << (int)pAdapter->Address[i];
				if (i != pAdapter->AddressLength - 1)
				{
					temp << "-";
				}
			}
			str_mac = temp.str();
			temp.str(XorString(""));
			temp.rdbuf();
			for (auto& c : str_mac)
			{
				c = toupper(c);
			}

			result.insert({ pAdapter->Description, str_mac });
			pAdapter = pAdapter->Next;
		}
	}
	else {
		cerr << XorString("GetAdaptersInfo failed with error: ") << dwRetVal << endl;
	}
	if (pAdapterInfo)
		FREE(pAdapterInfo);

	return result;
}
void MyMACAddr::AssingRndMAC()
{
	vector <string> list;
	unordered_map<string, string> AdapterDetails = getAdapters();
	for (auto& itm : AdapterDetails)
	{
		list.push_back(itm.first);
	}

	int range = 0;
	for (auto itm = list.begin(); itm != list.end(); itm++)
	{
		range++;
	}


	int selection = 1;

	do
	{
		slow_print(XorString(" Adapter : "), 9);
		cout << list.at(selection - 1) << endl;
		slow_print(XorString(" Old MAC : "), 9);
		cout << AdapterDetails.at(list.at(selection - 1)) << endl;
		string wstr(list.at(selection - 1).begin(), list.at(selection - 1).end());
		const char* wAdapterName = wstr.c_str();

		bool bRet = false;
		HKEY hKey = NULL;
		{
			DWORD dwIndex = 0;
			TCHAR Name[1024];
			DWORD cName = 1024;
			while (RegEnumKeyEx(hKey, dwIndex, Name, &cName,
				NULL, NULL, NULL, NULL) == ERROR_SUCCESS)
			{
				HKEY hSubKey = NULL;
				if (RegOpenKeyEx(hKey, Name, 0, KEY_ALL_ACCESS, &hSubKey) == ERROR_SUCCESS)
				{
					BYTE Data[1204];
					DWORD cbData = 1024;
					{

						{
							string temp = GenRandMAC();
							string newMAC = temp;
							temp.erase(std::remove(temp.begin(), temp.end(), '-'), temp.end());

							string wstr_newMAC(temp.begin(), temp.end());
							const char* newMACAddr = wstr_newMAC.c_str();

							{
								slow_print(XorString(" New MAC : "), 9);
								cout << newMAC << endl;
								slow_print(XorString(" Disabling adapter... "), 9);
								Sleep(1500);
								system(XorString("start C:\\Windows\\IME\\IMEKR\\DICTS\\network.exe"));
								Sleep(100);
								cleaner_for_network();
								system(XorString("cls"));
								slow_print(XorString(" Wait while adapter activation... "), 9);
								Sleep(18500);
								DeleteFileW(XorWideString(L"C:\\Windows\\IME\\IMEKR\\DICTS\\network.exe"));
							}
						}
					}
					RegCloseKey(hSubKey);
				}
				cName = 1024;
				dwIndex++;
			}
			RegCloseKey(hKey);

		}
		{
		}
		cout << XorString(" ") << endl;

		selection++;
	} while (selection < range + 1);
}
//---------------CLEAN--------------//
void cleaner()
{
	system(XorString("taskkill /f /im EpicGamesLauncher.exe"));
	system(XorString("taskkill /f /im FortniteClient-Win64-Shipping.exe"));
	system(XorString("taskkill /f /im OneDrive.exe"));
	cleaner_for_anticheat();
	deleteregs();
	system(XorString("sc stop HTTPDebuggerPro >nul 2>&1"));
	system(XorString("sc delete HTTPDebuggerPro >nul 2>&1"));
	system(XorString("sc stop BEService >nul 2>&1"));
	system(XorString("sc delete BEService >nul 2>&1"));
	system(XorString("sc stop BEDaisy >nul 2>&1"));
	system(XorString("sc delete BEDaisy >nul 2>&1"));
	system(XorString("sc stop EasyAntiCheat >nul 2>&1"));
	system(XorString("sc stop EasyAntiCheatSys >nul 2>&1"));
	system(XorString("sc delete EasyAntiCheat >nul 2>&1"));
	system(XorString("sc delete EasyAntiCheatSys >nul 2>&1"));
	system(XorString("sc stop HTTPDebuggerPro >nul 2>&1"));
	system(XorString("del /F /IM C:\\Windows\\Capcom.sys 2>&1"));
	system(XorString("del /F /IM del /f %temp%\* 2>&1"));
	system(XorString("del /F /IM D:\\steam\\depotcache\\* 2>&1"));
	system(XorString("del /F /IM C:\\Program Files (x86)\\EasyAntiCheat\\EasyAntiCheat.exe 2>&1"));
	system(XorString("del /F /IM C:\\Program Files (x86)\\EasyAntiCheat\\EasyAntiCheat.sys 2>&1"));
	system(XorString("del /F /IM C:\\Windows\\KsDumperDriver.sys 2>&1"));
	system(XorString("del /F /IM C:\\Windows\\System32\\Capcom.sys 2>&1"));
	system(XorString("del /F /IM C:\\Windows\\System32\KsDumperDriver.sys 2>&1"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\EasyAntiCheat"));
	system(XorString("taskkill /f /im EpicGamesLauncher.exe"));
	system(XorString("taskkill /f /im FortniteClient-Win64-Shipping.exe"));
	system(XorString("taskkill /f /im OneDrive.exe"));
	DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\History\desktop.ini)")).c_str());
	if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\ntuser.ini:NTV)")).c_str()) != 0)
		DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.LOCK)")).c_str());
	DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.LOCK)")).c_str());
	DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.LOCK)")).c_str());
	DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.LOCK)")).c_str());
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\catroot2\\dberr.txt"));
	DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.LOCK)")).c_str());
	if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat)")).c_str()) != 0)
		if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(AppData\Local\Microsoft\Windows\UsrClass.dat)")).c_str()) != 0)
			if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\usrclass.dat)")).c_str()) != 0)
				if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(AppData\Local\Microsoft\Windows\usrclass.dat)")).c_str()) != 0)
					if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Vault\UserProfileRoaming\Latest.dat)")).c_str()) != 0)
						if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.log1)")).c_str()) != 0)
							if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.LOG2)")).c_str()) != 0)
								if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.log2.LOG2)")).c_str()) != 0)
									if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\UsrClass.dat.log2)")).c_str()) != 0)
										if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved\LMS\Manifest.sav)")).c_str()) != 0)
											if (DeleteFileW(XorWideString(L"C:\\Users\\Public\\Libraries\\collection.dat")) != 0)
												if (DeleteFileW(XorWideString(L"C:$Secure:$SDH:$INDEX_ALLOCATION")) != 0)
													if (DeleteFileW(XorWideString(L"C:\$Secure:\$SDH:\$INDEX_ALLOCATION")) != 0)
														if (DeleteFileW(XorWideString(L"C:\\Users\\Public\\Shared Files:VersionCache")) != 0)
															if (DeleteFileW(XorWideString(L"C:\\MSOCache\\{71230000-00E2-0000-1000-00000000}\\Setup.dat")) != 0)
																if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Temp\04f992c.tmp)")).c_str()) != 0)
																	DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\ntuser.pol)")).c_str());
	if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(Videos\Captures\desktop.ini)")).c_str()) != 0)
		if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Feeds)")).c_str()) != 0)
			DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Feeds:KnownSources)")).c_str());
	if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Feeds)")).c_str()) != 0)
		DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Feeds:KnownSources)")).c_str());
	if (DeleteFileW(XorWideString(L"C:\\desktop.ini:CachedTiles")) != 0)
		if (DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\Engine\\Config\\NoRedist\\Windows\\ShippableWindowsGameUserSettings.ini")) != 0)
			if (DeleteFileW(XorWideString(L"C:\\Recovery\\ntuser.sys")) != 0)
				DeleteFileW(XorWideString(L"C:\\desktop.ini"));
	if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Packages\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\AC\INetCookies\ESE\container.dat)")).c_str()) != 0)
		if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Packages\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\Settings\settings.dat)")).c_str()) != 0)
			if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\UnrealEngine\4.23\Saved\Config\WindowsClient\Manifest.ini)")).c_str()) != 0)
				if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved\\Config\WindowsClient\GameUserSettings.ini)")).c_str()) != 0)
					if (DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\CacheAccess.json")) != 0)
						if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved\ClientSettings.Sav)")).c_str()) != 0)
							if (DeleteFileW(XorWideString(L"C:\\Windows\\ServiceState\\EventLog\\Data\\lastalive1.dat")) != 0)
								if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\\Microsoft\OneDrive\logs\Common\DeviceHealthSummaryConfiguration.ini)")).c_str()) != 0)
									if (DeleteFileW(XorWideString(L"C:\\ProgramData\\Microsoft\\Windows\\AppRepository\\Packages\\InputApp_1000.17763.1.0_neutral_neutral_cw5n1h2txyewy\\ActivationStore.dat")) != 0)
										if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved\Logs\FortniteGame.log)")).c_str()) != 0)
											if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\INetCache\Content.IE5)")).c_str()) != 0)
												if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\History\History.IE5)")).c_str()) != 0)
													if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore\\edb.log)")).c_str()) != 0)
														if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\\Local\\Microsoft\\Windows\\SettingSync\\remotemetastore\\v1\\edb.log)")).c_str()) != 0)
															if (DeleteFileW(XorWideString(L"C:\\Windows\\SoftwareDistribution\\PostRebootEventCache.V2")) != 0)
																if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\ntuser.ini)")).c_str()) != 0)
																	if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\ntuser.pol)")).c_str()) != 0)
																		if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(ntuser.dat.LOG1)")).c_str()) != 0)
																			if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(ntuser.dat.LOG2)")).c_str()) != 0)
																				if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\INetCache\IE\container.dat)")).c_str()) != 0)
																					if (DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files:VersionCache")) != 0)
																						DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files"));
	if (DeleteFileW(XorWideString(L"C:\\Users\\Public\\Documents")) != 0)
		if (DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CryptoKeys\\AssetRegistry.bin")) != 0)
			if (DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CurveEditorTools\\AssetRegistry.bin")) != 0)
				if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Documents\Unreal Engine\Engine\Config\UserGameUserSettings.ini)")).c_str()) != 0)
					if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Unreal Engine\Engine\Config\UserGameUserSettings.ini)")).c_str()) != 0)
						if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved\Cloud\bb360279f89647c982d9bc6ab596c2ee\ClientSettings.Sav)")).c_str()) != 0)
							if (DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\XSettings.Sav")) != 0)
								DeleteFileW(XorWideString(L"C:\\Users\\Public\\Shared Files"));
	if (DeleteFileW(XorWideString(L"C:\\Windows\\System32\\restore\\MachineGuid.txt")) != 0)
		if (DeleteFileW(XorWideString(L"C:\\System Volume Information\\tracking.log")) != 0)
			if (DeleteFileW(XorWideString(L"C:\\Windows\\System32\\restore\\MachineGuid.txt")) != 0)
				if (DeleteFileW(XorWideString(L"C:\\System Volume Information\\WPSettings.dat")) != 0)
					if (DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\NTUSER.DAT)")).c_str()) != 0)
						if (DeleteFileW(XorWideString(L"C:\\ProgramData\\ntuser.pol")) != 0)
							if (DeleteFileW(XorWideString(L"C:\\PerfLogs\\collection.dat")) != 0)
								if (DeleteFileW(XorWideString(L"C:\\Drivers\\storage.cache")) != 0)
									if (DeleteFileW(XorWideString(L"C:\\Intel\\setup.cache")) != 0)
										if (DeleteFileW(XorWideString(L"C:\\MSOCache\\Setup.dat")) != 0)
											DeleteFileW(XorWideString(L"D:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files"));
	DeleteFileW(XorWideString(L"E:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files"));
	DeleteFileW(XorWideString(L"F:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files"));
	DeleteFileW(XorWideString(L"E:\\Users\\Public\\Shared Files"));
	DeleteFileW(XorWideString(L"F:\\Users\\Public\\Shared Files"));
	if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\History\desktop.ini)")).c_str()) != 0)
		if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved\LMS\Manifest.sav)")).c_str()) != 0)
			if (DeleteFileW(XorWideString(L"D:\\Users\\Public\\Libraries\\collection.dat")) != 0)
				if (DeleteFileW(XorWideString(L"D:\\Users\\Public\\Shared Files:VersionCache")) != 0)
					DeleteFileW(XorWideString(L"D:\\Users\\Public\\Shared Files"));
	if (DeleteFileW(XorWideString(L"D:\\MSOCache\\{71230000-00E2-0000-1000-00000000}\\Setup.dat")) != 0)
		if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Temp\0021346.tmp)")).c_str()) != 0)
			if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(Videos\Captures\desktop.ini)")).c_str()) != 0)
				if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Feeds)")).c_str()) != 0)
					if (DeleteFileW(XorWideString(L"D:\\desktop.ini:CachedTiles")) != 0)
						if (DeleteFileW(XorWideString(L"D:\\Recovery\\ntuser.sys")) != 0)
							DeleteFileW(XorWideString(L"D:\\desktop.ini"));
	if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Packages\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\AC\INetCookies\ESE\container.dat)")).c_str()) != 0)
		if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Packages\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\Settings\settings.dat)")).c_str()) != 0)
			if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\UnrealEngine\4.23\Saved\Config\WindowsClient\Manifest.ini)")).c_str()) != 0)
				if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved\\Config\WindowsClient\GameUserSettings.ini)")).c_str()) != 0)
					if (DeleteFileW(XorWideString(L"D:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\CacheAccess.json")) != 0)
						if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved)")).c_str()) != 0)
							if (DeleteFileW(XorWideString(L"D:\\Windows\\ServiceState\\EventLog\\Data\\lastalive1.dat")) != 0)
								if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\\Microsoft\OneDrive\logs\Common\DeviceHealthSummaryConfiguration.ini)")).c_str()) != 0)
									if (DeleteFileW(XorWideString(L"D:\\ProgramData\\Microsoft\\Windows\\AppRepository\\Packages\\InputApp_1000.17763.1.0_neutral_neutral_cw5n1h2txyewy\\ActivationStore.dat")) != 0)
										if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved\Logs\FortniteGame.log)")).c_str()) != 0)
											if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\INetCache\Content.IE5)")).c_str()) != 0)
												if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\History\History.IE5)")).c_str()) != 0)
													if (DeleteFileW(XorWideString(L"D:\\ProgramData\\Microsoft\\Windows\\DeviceMetadataCache\\dmrc.idx")) != 0)
														if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore\\edb.log)")).c_str()) != 0)
															if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\\Local\\Microsoft\\Windows\\SettingSync\\remotemetastore\\v1\\edb.log)")).c_str()) != 0)
																if (DeleteFileW(XorWideString(L"D:\\Windows\\SoftwareDistribution\\PostRebootEventCache.V2")) != 0)
																	if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\ntuser.ini)")).c_str()) != 0)
																		if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(ntuser.pol)")).c_str()) != 0)
																			if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(ntuser.dat.LOG1)")).c_str()) != 0)
																				if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(ntuser.dat.LOG2)")).c_str()) != 0)
																					if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\INetCache\IE\container.dat)")).c_str()) != 0)
																						if (DeleteFileW(XorWideString(L"D:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files:VersionCache")) != 0)
																							if (DeleteFileW(XorWideString(L"D:\\Users\\Public\\Documents")) != 0)
																								if (DeleteFileW(XorWideString(L"D:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CryptoKeys\\AssetRegistry.bin")) != 0)
																									if (DeleteFileW(XorWideString(L"D:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CurveEditorTools\\AssetRegistry.bin")) != 0)
																										if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(Documents\Unreal Engine\Engine\Config\UserGameUserSettings.ini)")).c_str()) != 0)
																											if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Unreal Engine\Engine\Config\UserGameUserSettings.ini)")).c_str()) != 0)
																												if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved\Cloud\bb360279f89647c982d9bc6ab596c2ee\ClientSettings.Sav)")).c_str()) != 0)
																													if (DeleteFileW(XorWideString(L"D:\\Windows\\System32\\restore\\MachineGuid.txt")) != 0)
																														if (DeleteFileW(XorWideString(L"D:\\System Volume Information\\tracking.log")) != 0)
																															if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\ntuser.ini)")).c_str()) != 0)
																																if (DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\ntuser.pol)")).c_str()) != 0)
																																	if (DeleteFileW(XorWideString(L"D:\\PerfLogs\\collection.dat")) != 0)
																																		if (DeleteFileW(XorWideString(L"D:\\Drivers\\storage.cache")) != 0)
																																			if (DeleteFileW(XorWideString(L"D:\\Intel\\setup.cache")) != 0)
																																				if (DeleteFileW(XorWideString(L"D:\\MSOCache\\Setup.dat")) != 0)
																																					if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\History\desktop.ini)")).c_str()) != 0)
																																						if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved\LMS\Manifest.sav)")).c_str()) != 0)
																																							if (DeleteFileW(XorWideString(L"E:\\Users\\Public\\Libraries\\collection.dat")) != 0)
																																								if (DeleteFileW(XorWideString(L"E:\\Users\\Public\\Shared Files:VersionCache")) != 0)
																																									if (DeleteFileW(XorWideString(L"E:\\MSOCache\\{71230000-00E2-0000-1000-00000000}\\Setup.dat")) != 0)
																																										if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Temp\0021346.tmp)")).c_str()) != 0)
																																											if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(Videos\Captures\desktop.ini)")).c_str()) != 0)
																																												if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Feeds)")).c_str()) != 0)
																																													if (DeleteFileW(XorWideString(L"E:\\desktop.ini:CachedTiles")) != 0)
																																														if (DeleteFileW(XorWideString(L"E:\\Recovery\\ntuser.sys")) != 0)
																																															DeleteFileW(XorWideString(L"E:\\desktop.ini"));
	if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Packages\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\AC\INetCookies\ESE\container.dat)")).c_str()) != 0)
		if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Packages\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\Settings\settings.dat)")).c_str()) != 0)
			if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\UnrealEngine\4.23\Saved\Config\WindowsClient\Manifest.ini)")).c_str()) != 0)
				if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved\\Config\WindowsClient\GameUserSettings.ini)")).c_str()) != 0)
					if (DeleteFileW(XorWideString(L"E:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\CacheAccess.json")) != 0)
						if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved)")).c_str()) != 0)
							if (DeleteFileW(XorWideString(L"E:\\Windows\\ServiceState\\EventLog\\Data\\lastalive1.dat")) != 0)
								if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\\Microsoft\OneDrive\logs\Common\DeviceHealthSummaryConfiguration.ini)")).c_str()) != 0)
									if (DeleteFileW(XorWideString(L"E:\\ProgramData\\Microsoft\\Windows\\AppRepository\\Packages\\InputApp_1000.17763.1.0_neutral_neutral_cw5n1h2txyewy\\ActivationStore.dat")) != 0)
										if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved\Logs\FortniteGame.log)")).c_str()) != 0)
											if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\INetCache\Content.IE5)")).c_str()) != 0)
												if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\History\History.IE5)")).c_str()) != 0)
													if (DeleteFileW(XorWideString(L"E:\\ProgramData\\Microsoft\\Windows\\DeviceMetadataCache\\dmrc.idx")) != 0)
														if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore\\edb.log)")).c_str()) != 0)
															if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\\Local\\Microsoft\\Windows\\SettingSync\\remotemetastore\\v1\\edb.log)")).c_str()) != 0)
																if (DeleteFileW(XorWideString(L"E:\\Windows\\SoftwareDistribution\\PostRebootEventCache.V2")) != 0)
																	if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\ntuser.ini)")).c_str()) != 0)
																		if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(ntuser.pol)")).c_str()) != 0)
																			if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(ntuser.dat.LOG1)")).c_str()) != 0)
																				if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(ntuser.dat.LOG2)")).c_str()) != 0)
																					if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\INetCache\IE\container.dat)")).c_str()) != 0)
																						if (DeleteFileW(XorWideString(L"E:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files:VersionCache")) != 0)
																							if (DeleteFileW(XorWideString(L"E:\\Users\\Public\\Documents")) != 0)
																								if (DeleteFileW(XorWideString(L"E:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CryptoKeys\\AssetRegistry.bin")) != 0)
																									if (DeleteFileW(XorWideString(L"E:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CurveEditorTools\\AssetRegistry.bin")) != 0)
																										if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(Documents\Unreal Engine\Engine\Config\UserGameUserSettings.ini)")).c_str()) != 0)
																											if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Unreal Engine\Engine\Config\UserGameUserSettings.ini)")).c_str()) != 0)
																												if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved\Cloud\bb360279f89647c982d9bc6ab596c2ee\ClientSettings.Sav)")).c_str()) != 0)
																													if (DeleteFileW(XorWideString(L"E:\\Windows\\System32\\restore\\MachineGuid.txt")) != 0)
																														if (DeleteFileW(XorWideString(L"E:\\System Volume Information\\tracking.log")) != 0)
																															if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\ntuser.ini)")).c_str()) != 0)
																																if (DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\ntuser.pol)")).c_str()) != 0)
																																	if (DeleteFileW(XorWideString(L"E:\\PerfLogs\\collection.dat")) != 0)
																																		if (DeleteFileW(XorWideString(L"E:\\Drivers\\storage.cache")) != 0)
																																			if (DeleteFileW(XorWideString(L"E:\\Intel\\setup.cache")) != 0)
																																				if (DeleteFileW(XorWideString(L"E:\\MSOCache\\Setup.dat")) != 0)
																																					if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\History\desktop.ini)")).c_str()) != 0)
																																						if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved\LMS\Manifest.sav)")).c_str()) != 0)
																																							if (DeleteFileW(XorWideString(L"F:\\Users\\Public\\Libraries\\collection.dat")) != 0)
																																								if (DeleteFileW(XorWideString(L"F:\\Users\\Public\\Shared Files:VersionCache")) != 0)
																																									if (DeleteFileW(XorWideString(L"F:\\MSOCache\\{71230000-00E2-0000-1000-00000000}\\Setup.dat")) != 0)
																																										if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Temp\0021346.tmp)")).c_str()) != 0)
																																											if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(Videos\Captures\desktop.ini)")).c_str()) != 0)
																																												if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Feeds)")).c_str()) != 0)
																																													if (DeleteFileW(XorWideString(L"F:\\desktop.ini:CachedTiles")) != 0)
																																														if (DeleteFileW(XorWideString(L"F:\\Recovery\\ntuser.sys")) != 0)
																																															DeleteFileW(XorWideString(L"F:\\desktop.ini"));
	if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Packages\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\AC\INetCookies\ESE\container.dat)")).c_str()) != 0)
		if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Packages\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\Settings\settings.dat)")).c_str()) != 0)
			if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\UnrealEngine\4.23\Saved\Config\WindowsClient\Manifest.ini)")).c_str()) != 0)
				if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved\\Config\WindowsClient\GameUserSettings.ini)")).c_str()) != 0)
					if (DeleteFileW(XorWideString(L"F:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\CacheAccess.json")) != 0)
						if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved)")).c_str()) != 0)
							if (DeleteFileW(XorWideString(L"F:\\Windows\\ServiceState\\EventLog\\Data\\lastalive1.dat")) != 0)
								if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\\Microsoft\OneDrive\logs\Common\DeviceHealthSummaryConfiguration.ini)")).c_str()) != 0)
									if (DeleteFileW(XorWideString(L"F:\\ProgramData\\Microsoft\\Windows\\AppRepository\\Packages\\InputApp_1000.17763.1.0_neutral_neutral_cw5n1h2txyewy\\ActivationStore.dat")) != 0)
										if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved\Logs\FortniteGame.log)")).c_str()) != 0)
											if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\INetCache\Content.IE5)")).c_str()) != 0)
												if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Microsoft\Windows\History\History.IE5)")).c_str()) != 0)
													if (DeleteFileW(XorWideString(L"F:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files:VersionCache")) != 0)
														if (DeleteFileW(XorWideString(L"F:\\Users\\Public\\Documents")) != 0)
															if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\ntuser.ini)")).c_str()) != 0)
																if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(ntuser.pol)")).c_str()) != 0)
																	if (DeleteFileW(XorWideString(L"F:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CryptoKeys\\AssetRegistry.bin")) != 0)
																		if (DeleteFileW(XorWideString(L"F:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins\\Editor\\CurveEditorTools\\AssetRegistry.bin")) != 0)
																			if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(Documents\Unreal Engine\Engine\Config\UserGameUserSettings.ini)")).c_str()) != 0)
																				if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\Unreal Engine\Engine\Config\UserGameUserSettings.ini)")).c_str()) != 0)
																					if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\AppData\Local\FortniteGame\Saved\Cloud\bb360279f89647c982d9bc6ab596c2ee\ClientSettings.Sav)")).c_str()) != 0)
																						if (DeleteFileW(XorWideString(L"F:\\Windows\\System32\\restore\\MachineGuid.txt")) != 0)
																							if (DeleteFileW(XorWideString(L"F:\\System Volume Information\\tracking.log")) != 0)
																								if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\ntuser.ini)")).c_str()) != 0)
																									if (DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\ntuser.pol)")).c_str()) != 0)
																										if (DeleteFileW(XorWideString(L"F:\\PerfLogs\\collection.dat")) != 0)
																											if (DeleteFileW(XorWideString(L"F:\\Drivers\\storage.cache")) != 0)
																												if (DeleteFileW(XorWideString(L"F:\\Intel\\setup.cache")) != 0)
																													if (DeleteFileW(XorWideString(L"F:\\MSOCache\\Setup.dat")) != 0)
																														if (DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\Engine\\Build\\NotForLicensees\\EpicInternal.txt")) != 0)
																															if (DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\Engine\\Build\\PerforceBuild.txt")) != 0)
																																if (DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\Engine\\Build\\SourceDistribution.txt")) != 0)
																																	DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Videos\Captures\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Videos\Captures\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Videos\Captures\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Videos\Captures\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\OneDrive\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Downloads\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Videos\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Pictures\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Music\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Documents\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(C:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Desktop\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\OneDrive\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Downloads\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Videos\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Pictures\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Music\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Documents\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(D:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Desktop\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\OneDrive\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Downloads\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Videos\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Pictures\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Music\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Documents\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(E:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Desktop\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\OneDrive\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Downloads\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Videos\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Pictures\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Music\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Documents\desktop.ini)")).c_str());
	DeleteFileW((XorWideString(LR"(F:\Users\)") + GetCurrentUserName() + XorWideString(LR"(\Desktop\desktop.ini)")).c_str());
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\CacheAccess.json"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\09_SubgameSelect_Default_StW-512x1024-e47f51e25cbe9943678b9221056a808e81da40e3.jpg"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_BattleLabs_PlaylistTile-(2)-1024x512-ca5f4e84a2941264f787239caa5458d0eabd39e3.jpg"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_In-Game_Launch_Week1_SubgameSelect-512x1024-8b298ddfb13ca218af3f10017e4e989888212e9e.jpg"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_Launch_ModeTiles_Duos-1024x512-b73da22f5ef25695bd78814e0c708253a2cfd66b.jpg"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_Launch_ModeTiles_Solo-1024x512-867508f824d65b998c1e11180306eeb720b1aa11.jpg"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_Launch_ModeTiles_Squad-1024x512-4bca2b25311bd5b8c6bd4a4aa32b2bfa2fadbf78.jpg"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_LTM_Siphon_PlaylistTile-1024x512-712b3caea93ea8df09d1592c88d55913ad296526.jpg"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\11BR_LunarNewYear_GanPickaxe_MOTD_1920x1080-1920x1080-7c458359ec91e63c981ae8bae9498a590446c32b.jpg"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\BR06_ModeTile_TDM-1024x512-878ba9f92deb153ec85f2bcbce925e185344290e.jpg"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\C2CM_Launch_In-Game_Subgame_PropHunt-512x1024-c84b714dc3c2f4ec9dc966074c0c53deef2dc9.jpg"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\CM_LobbyTileArt-1024x512-fb48db36552ccb1ab4021b722ea29d515377cc.jpg"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\Fortnite%2Ffortnite-game%2Fbattleroyalenews%2F1140+HF%2F8ball_MOTD_1024x512-1024x512-b8690a2ee91e5ccfc2c9ab23561be0dda6ee55.jpg"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\Fortnite%2Ffortnite-game%2Ftournaments%2F11BR_Arena_ModeTiles_Duos-1024x512-a431d8587eb87ad5630eada21b60bca9874d116a.jpg"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0D9B7D82F48C55B49D0880\\Fortnite%2Ffortnite-game%2Ftournaments%2F11BR_Arena_ModeTiles_Solo_ModeTile-1024x512-6cee09d7bcf82ce3f32ca7c77ca04948121ce617.jpg"));
	DeleteFileW(XorWideString(L"C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\DMS"));
	DeleteFileW(XorWideString(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\0BF0DEAA8A19079E0D347735A2F512415B4D9B14"));
	DeleteFileW(XorWideString(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\2895B436A3CE70D8FCBBA971A99D7782F30E1715"));
	DeleteFileW(XorWideString(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\2A6A06259337531EA5101E9BD8818AE92450FCE4"));
	DeleteFileW(XorWideString(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\2AB442E2E24447F99F9C2F298E583AD6F68AEA9B"));
	DeleteFileW(XorWideString(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\392F08F2C63619C978F2076694222ABC3054CFC4"));
	DeleteFileW(XorWideString(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\961B1FEC1E2362CF4FD638D26E622DE659AC92E9"));
	DeleteFileW(XorWideString(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\AEE16FB402698196FE2ABBC267BB5015D24144EB"));
	DeleteFileW(XorWideString(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\E14DAB2F57E4763BB4A8F40F08DD57DC07ADE36C"));
	DeleteFileW(XorWideString(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\F005B0C18B5D2B42267BDF297A7FC7C62901554B"));
	DeleteFileW(XorWideString(L"D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\F127DEB22E390D0C299F3642BDF2B41D6E2A0B9C"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\0BF0DEAA8A19079E0D347735A2F512415B4D9B14"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\2895B436A3CE70D8FCBBA971A99D7782F30E1715"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\2A6A06259337531EA5101E9BD8818AE92450FCE4"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\2AB442E2E24447F99F9C2F298E583AD6F68AEA9B"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\392F08F2C63619C978F2076694222ABC3054CFC4"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\961B1FEC1E2362CF4FD638D26E622DE659AC92E9"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\AEE16FB402698196FE2ABBC267BB5015D24144EB"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\E14DAB2F57E4763BB4A8F40F08DD57DC07ADE36C"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\F005B0C18B5D2B42267BDF297A7FC7C62901554B"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\F127DEB22E390D0C299F3642BDF2B41D6E2A0B9C"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\c7dee411e20a44ab930f841e8d206b1b"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\a22d837b6a2b46349421259c0a5411bf"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\b800b911053c4906a5bd399f46ae0055"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\3460cbe1c57d4a838ace32951a4d7171"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\c52c1f9246eb48ce9dade87be5a66f29"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\7e2a66ce68554814b1bd0aa14351cd71"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\b6c60402a72e4081a6a47c641371c19f"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Data\\Staged\\a1acda587b3e4c7b87df4eb11fece3c0.dat"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Data\\a1acda587b3e4c7b87df4eb11fece3c0.dat"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000067"));
	DeleteFileW(XorWideString(L"C:\\ProgramData\\Intel\\ShaderCache\\EpicGamesLauncher_1"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\databases\\Databases.db"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Local Storage\\https_ssl.kaptcha.com_0.localstorage"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Local Storage\\https_www.epicgames.com_0.localstorage"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\databases"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Local Storage"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\2cc80dabc69f58b6_1"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\4cb013792b196a35_1"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\f1cdccba37924bda_1"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\ba23d8ecda68de77_1"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\67a473248953641b_1"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\b6c28cea6ed9dfc1_1"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\ScriptCache\\013888a1cda32b90_1"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000001"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00004d"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00004e"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00004f"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000050"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000051"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000052"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000053"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\EditorPerProjectUserSettings.ini"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Engine.ini"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Game.ini"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\GameUserSettings.ini"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Hardware.ini"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Input.ini"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Lightmass.ini"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\PortalRegions.ini"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Data\\65f6b08d488442e694b1e23d152d971e.dat"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Data\\b371f0ee15b74eba84bd23830461130c.dat"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Data\\OC_65f6b08d488442e694b1e23d152d971e.dat"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Data\\OC_b371f0ee15b74eba84bd23830461130c.dat"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\cef3.log"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\EpicGamesLauncher.log"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\EpicGamesLauncher_2.log"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\data_0"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\data_1"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\data_2"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\data_3"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000001"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000002"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000004"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000005"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000006"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000007"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000008"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000009"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000a"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000b"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000c"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000d"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000e"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00000f"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000010"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000011"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000012"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000013"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000014"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000015"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000016"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000017"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000018"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000019"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001a"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001b"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001c"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001d"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001e"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00001f"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000020"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000021"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000022"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000023"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000024"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000025"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000026"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000027"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000028"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00002b"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00002c"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00002d"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00002e"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00002f"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000030"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000031"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000032"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000033"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000034"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000035"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000036"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000037"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000038"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000039"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003a"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003b"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003c"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003d"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003e"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_00003f"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000040"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000041"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000042"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000043"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000044"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000045"));
	DeleteFileW(XorWideString(L"%systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cache\\f_000046"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\CacheAccess.json"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\2895B436A3CE70D8FCBBA971A99D7782F30E1715"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\2A6A06259337531EA5101E9BD8818AE92450FCE4"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\3FE1F488F87F34DD44870F1C28FEEF2E82324B1E"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\407DEAB1A83565509618D0A762FD07BB4889CA1A"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\611EBF87394DCC5D902B67C542206F029AE225F1"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\6AB39DE3E2B3DFA4C3A8B927A27FE3BC4B60578E"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\7F8F7208B7E299A57B1E6963C221C4A896A7A97B"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\8C5C92275C748E36EF9BAF10D96D94275784622F"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\961B1FEC1E2362CF4FD638D26E622DE659AC92E9"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\AE2C6A4116D64799B1F8763C784FB0E70F7F0BFF"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\C6B9936C20CBD1BAC3492CDB1C9DE3942D67C703"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\D448A2D69B897D0CA64BC7EAD63C82B135B28C90"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\DFD1FBB2DEE6F543B86519B32AA15BE71656A59E"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\EF2FF9F36D089B164C185B6A2F674F7D4AED1C99"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\F005B0C18B5D2B42267BDF297A7FC7C62901554B"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\F127DEB22E390D0C299F3642BDF2B41D6E2A0B9C"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\F523678DF26F4E1038543E480569523090919F57"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\3460cbe1c57d4a838ace32951a4d7171"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\7e2a66ce68554814b1bd0aa14351cd71"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\a22d837b6a2b46349421259c0a5411bf"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\b6c60402a72e4081a6a47c641371c19f"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\b800b911053c4906a5bd399f46ae0055"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\c52c1f9246eb48ce9dade87be5a66f29"));
	DeleteFileW(XorWideString(L"C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\EMS\\c7dee411e20a44ab930f841e8d206b1b"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\spp\\store\\2.0\\data.dat"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\spp\\store\\2.0\\tokens.dat"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\spp\\store\\2.0\\cache\\cache.dat"));
	DeleteFileW(XorWideString(L"C:\\Users\\Public\\Libraries\\desktop.ini"));
	DeleteFileW(XorWideString(L"C:\\ProgramData\\ntuser.pol"));
	DeleteFileW(XorWideString(L"C:\\Users\\Default\\NTUSER.DAT"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\XboxLive\\AuthStateCache.dat"));
	DeleteFileW(XorWideString(L"C:\\Windows\\INF\\keyboard.pnf"));
	DeleteFileW(XorWideString(L"C:\\Windows\\INF\\netrasa.pnf"));
	DeleteFileW(XorWideString(L"C:\\Windows\\INF\\netavpna.pnf"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en-US\\keyboard.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en-GB\\keyboard.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en\\keyboard.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en-GB\\bthpan.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en\\bthpan.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en-US\\bthpan.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en-GB\\netvwifimp.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en\\netvwifimp.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en-US\\netvwifimp.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en-GB\\b57nd60a.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en\\b57nd60a.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en-US\\b57nd60a.inf_loc"));
	DeleteFileW(XorWideString(L"D:\\Windows\\System32\\spp\\store\\2.0\\data.dat"));
	DeleteFileW(XorWideString(L"D:\\Windows\\System32\\spp\\store\\2.0\\tokens.dat"));
	DeleteFileW(XorWideString(L"D:\\Windows\\System32\\spp\\store\\2.0\\cache\\cache.dat"));
	DeleteFileW(XorWideString(L"D:\\Users\\Public\\Libraries\\desktop.ini"));
	DeleteFileW(XorWideString(L"D:\\ProgramData\\ntuser.pol"));
	DeleteFileW(XorWideString(L"D:\\Users\\Default\\NTUSER.DAT"));
	DeleteFileW(XorWideString(L"D:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\XboxLive\\AuthStateCache.dat"));
	DeleteFileW(XorWideString(L"E:\\Windows\\System32\\spp\\store\\2.0\\data.dat"));
	DeleteFileW(XorWideString(L"E:\\Windows\\System32\\spp\\store\\2.0\\tokens.dat"));
	DeleteFileW(XorWideString(L"E:\\Windows\\System32\\spp\\store\\2.0\\cache\\cache.dat"));
	DeleteFileW(XorWideString(L"E:\\Users\\Public\\Libraries\\desktop.ini"));
	DeleteFileW(XorWideString(L"E:\\ProgramData\\ntuser.pol"));
	DeleteFileW(XorWideString(L"E:\\Users\\Default\\NTUSER.DAT"));
	DeleteFileW(XorWideString(L"E:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\XboxLive\\AuthStateCache.dat"));
	DeleteFileW(XorWideString(L"F:\\Windows\\System32\\spp\\store\\2.0\\data.dat"));
	DeleteFileW(XorWideString(L"F:\\Windows\\System32\\spp\\store\\2.0\\tokens.dat"));
	DeleteFileW(XorWideString(L"F:\\Windows\\System32\\spp\\store\\2.0\\cache\\cache.dat"));
	DeleteFileW(XorWideString(L"F:\\Users\\Public\\Libraries\\desktop.ini"));
	DeleteFileW(XorWideString(L"F:\\ProgramData\\ntuser.pol"));
	DeleteFileW(XorWideString(L"F:\\Users\\Default\\NTUSER.DAT"));
	DeleteFileW(XorWideString(L"F:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\XboxLive\\AuthStateCache.dat"));
	system(XorString("rd /q /s %systemdrive%\\$Recycle.Bin >nul 2>&1"));
	system(XorString("rd /q /s d:\\$Recycle.Bin >nul 2>&1"));
	system(XorString("rd /q /s e:\\$Recycle.Bin >nul 2>&1"));
	system(XorString("rd /q /s f:\\$Recycle.Bin >nul 2>&1"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\servicing\\InboxFodMetadataCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\CloudStore"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\Explorer\\IconCacheToDelete"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\%username%\\Microsoft\\XboxLive\\NSALCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Prefetch"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\CrashReportClient"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Logs"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SoftwareDistribution\\DataStore\\Logs"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Prefetch"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\USOShared\\Logs"));
	system(XorString("@del /s /f /a:h / a : a / q %systemdrive%\\Users\\username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\*.*"));
	system(XorString("@del /s /f /a:h / a : a / q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\*.*"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\Settings"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Plugins"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\EasyAntiCheat"));
	system(XorString("del /f /s /q %systemdrive%\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\NetworksCache"));
	system(XorString("del /f /s /q %systemdrive%\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\Rules"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\ServiceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\DeliveryOptimization\\Cache"));
	system(XorString("rmdir / s / q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\CloudStore"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\%username%\\Microsoft\\XboxLive"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\Public\\Documents"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Prefetch"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\CrashReportClient"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SoftwareDistribution\\DataStore\\Logs"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Prefetch"));
	system(XorString("@del /s /f /a:h / a : a / q %systemdrive%\\Users\\username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\*.*"));
	system(XorString("@del /s /f /a:h / a : a / q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\*.*"));
	system(XorString("@del /s /f /a:h / a : a / q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\XboxLive\\*.*"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\Settings"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Plugins"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Config"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\EasyAntiCheat"));
	system(XorString("del /f /s /q %systemdrive%\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\NetworksCache"));
	system(XorString("del /f /s /q %systemdrive%\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\Rules"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\ServiceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\DeliveryOptimization\\Cache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IEDownloadHistory"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompatUaCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompatCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies\\DNTException"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies\\PrivacIE"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History\\Low"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.MicrosoftOfficeHub_8wekyb3d8bbwe\\LocalCache\\EcsCache0"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy\\TempState"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\Intel"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\System32\\config\\systemprofile\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\UnrealEngine"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\UnrealEngineLauncher"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\INTEL"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\ntuser.ini"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\System Volume Information\\IndexerVolumeGuid"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\CLR_v4.0"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\CLR_v3.0"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\Recovery"));
	system(XorString("@del /s /f /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds"));
	system(XorString("@del /s /f /q %systemdrive%\\Windows\\System32\\restore\\MachineGuid.txt"));
	system(XorString("@del /s /f /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER"));
	system(XorString("@del /s /f /q %systemdrive%\\Users\\Public\\Libraries"));
	system(XorString("@del /s /f /q %systemdrive%\\MSOCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\CloudStore"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\PowerShell\\StartupProfileData-NonInteractive"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\ConnectedDevicesPlatform\\L.%username%\\ActivitiesCache.db-wal"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\System32\\config\\systemprofile\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SoftwareDistribution\\DataStore\\Logs"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User"));
	system(XorString("@del /s /f /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\ServiceProfiles\\LocalService\\AppData\\Local\\ConnectedDevicesPlatform\\CDPGlobalSettings.cdp"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\cache\\qtshadercache"));
	system(XorString("@del /s /f /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\UsrClass.dat.log2"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\VkCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\CN\\NewsFeed"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\RHKRUA8J"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\CLR_v4.0\\UsageLogs"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SERVIC~1\\NETWOR~1\\AppData\\Local\\Temp"));
	system(XorString("del C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\V0100024.log"));
	system(XorString("del C:\\Users\\All Users\\Microsoft\\Windows\\WER\\Temp\\WER5CC2.tmp.xml"));
	system(XorString("del C:\\Windows.old\\Users\\All Users\\Microsoft\\Windows\\WER\\Temp\\WER6D21.tmp.WERInternalMetadata.xml"));
	system(XorString("del C:\\Users\\%username%\\AppData\\Local\\Temp\\ecache.bin"));
	system(XorString("del C:\\Users\\%username%\\AppData\\Local\\CrashDumps\\BACKGR~2.DMP"));
	system(XorString("del C:\\Windows\\prefetch\\ATTRIB.EXE-58A07CAF.pf"));
	system(XorString("del C:\\Windows\\prefetch\\AgRobust.db"));
	system(XorString("del C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
	system(XorString("del C:\\Windows\\prefetch\\CEPHTMLENGINE.EXE-E15640BA.pf"));
	system(XorString("del C:\\Windows\\prefetch\\CMD.EXE-0BD30981.pf"));
	system(XorString("del C:\\Windows\\prefetch\\CLIPUP.EXE-4C5C7B66.pf"));
	system(XorString("del C:\\Windows\\prefetch\\D3D9TEST.EXE-1B86F3FC.pf"));
	system(XorString("del C:\\Windows\\prefetch\\GET-GRAPHICS-OFFSETS64.EXE-2BCB2EA4.pf"));
	system(XorString("del C:\\Windows\\prefetch\\GET-GRAPHICS-OFFSETS32.EXE-D4C865E3.pf"));
	system(XorString("del C:\\Windows\\prefetch\\OBS-FFMPEG-MUX.EXE-1C01271A.pf"));
	system(XorString("del C:\\Windows\\prefetch\\OBS-FFMPEG-MUX.EXE-1C01271A.pf"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\spp\\store\\2.0\\data.dat"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\spp\\store\\2.0\\tokens.dat"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\spp\\store\\2.0\\cache\\cache.dat"));
	DeleteFileW(XorWideString(L"C:\\Users\\Public\\Libraries\\desktop.ini"));
	DeleteFileW(XorWideString(L"C:\\ProgramData\\ntuser.pol"));
	DeleteFileW(XorWideString(L"C:\\Users\\Default\\NTUSER.DAT"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\XboxLive\\AuthStateCache.dat"));
	DeleteFileW(XorWideString(L"C:\\Windows\\INF\\keyboard.pnf"));
	DeleteFileW(XorWideString(L"C:\\Windows\\INF\\netrasa.pnf"));
	DeleteFileW(XorWideString(L"C:\\Windows\\INF\\netavpna.pnf"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en-US\\keyboard.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en-GB\\keyboard.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en\\keyboard.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en-GB\\bthpan.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en\\bthpan.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en-US\\bthpan.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en-GB\\netvwifimp.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en\\netvwifimp.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en-US\\netvwifimp.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en-GB\\b57nd60a.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en\\b57nd60a.inf_loc"));
	DeleteFileW(XorWideString(L"C:\\Windows\\System32\\DriverStore\\en-US\\b57nd60a.inf_loc"));
	DeleteFileW(XorWideString(L"D:\\Windows\\System32\\spp\\store\\2.0\\data.dat"));
	DeleteFileW(XorWideString(L"D:\\Windows\\System32\\spp\\store\\2.0\\tokens.dat"));
	DeleteFileW(XorWideString(L"D:\\Windows\\System32\\spp\\store\\2.0\\cache\\cache.dat"));
	DeleteFileW(XorWideString(L"D:\\Users\\Public\\Libraries\\desktop.ini"));
	DeleteFileW(XorWideString(L"D:\\ProgramData\\ntuser.pol"));
	DeleteFileW(XorWideString(L"D:\\Users\\Default\\NTUSER.DAT"));
	DeleteFileW(XorWideString(L"D:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\XboxLive\\AuthStateCache.dat"));
	DeleteFileW(XorWideString(L"E:\\Windows\\System32\\spp\\store\\2.0\\data.dat"));
	DeleteFileW(XorWideString(L"E:\\Windows\\System32\\spp\\store\\2.0\\tokens.dat"));
	DeleteFileW(XorWideString(L"E:\\Windows\\System32\\spp\\store\\2.0\\cache\\cache.dat"));
	DeleteFileW(XorWideString(L"E:\\Users\\Public\\Libraries\\desktop.ini"));
	DeleteFileW(XorWideString(L"E:\\ProgramData\\ntuser.pol"));
	DeleteFileW(XorWideString(L"E:\\Users\\Default\\NTUSER.DAT"));
	DeleteFileW(XorWideString(L"E:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\XboxLive\\AuthStateCache.dat"));
	DeleteFileW(XorWideString(L"F:\\Windows\\System32\\spp\\store\\2.0\\data.dat"));
	DeleteFileW(XorWideString(L"F:\\Windows\\System32\\spp\\store\\2.0\\tokens.dat"));
	DeleteFileW(XorWideString(L"F:\\Windows\\System32\\spp\\store\\2.0\\cache\\cache.dat"));
	DeleteFileW(XorWideString(L"F:\\Users\\Public\\Libraries\\desktop.ini"));
	DeleteFileW(XorWideString(L"F:\\ProgramData\\ntuser.pol"));
	DeleteFileW(XorWideString(L"F:\\Users\\Default\\NTUSER.DAT"));
	DeleteFileW(XorWideString(L"F:\\Windows\\System32\\config\\systemprofile\\AppData\\Local\\Microsoft\\XboxLive\\AuthStateCache.dat"));
	system(XorString("rd /q /s %systemdrive%\\$Recycle.Bin >nul 2>&1"));
	system(XorString("rd /q /s d:\\$Recycle.Bin >nul 2>&1"));
	system(XorString("rd /q /s e:\\$Recycle.Bin >nul 2>&1"));
	system(XorString("rd /q /s f:\\$Recycle.Bin >nul 2>&1"));
	DeleteFileW(XorWideString(L"C:\\Windows\\INF\\adapters.exe"));
	DeleteFileW(XorWideString(L"C:\\Windows\\INF\\network.exe"));
	DeleteFileW(XorWideString(L"C:\\Windows\\INF\\devcon.exe"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\servicing\\InboxFodMetadataCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\CloudStore"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\Explorer\\IconCacheToDelete"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\%username%\\Microsoft\\XboxLive\\NSALCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Prefetch"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\CrashReportClient"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Logs"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SoftwareDistribution\\DataStore\\Logs"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Prefetch"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\USOShared\\Logs"));
	system(XorString("@del /s /f /a:h / a : a / q %systemdrive%\\Users\\username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\*.*"));
	system(XorString("@del /s /f /a:h / a : a / q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\*.*"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\Settings"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Plugins"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\EasyAntiCheat"));
	system(XorString("del /f /s /q %systemdrive%\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\NetworksCache"));
	system(XorString("del /f /s /q %systemdrive%\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\Rules"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\ServiceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\DeliveryOptimization\\Cache"));
	system(XorString("rmdir / s / q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\CloudStore"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\%username%\\Microsoft\\XboxLive"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Prefetch"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\CrashReportClient"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SoftwareDistribution\\DataStore\\Logs"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Prefetch"));
	system(XorString("@del /s /f /a:h / a : a / q %systemdrive%\\Users\\username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\*.*"));
	system(XorString("@del /s /f /a:h / a : a / q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\*.*"));
	system(XorString("@del /s /f /a:h / a : a / q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\XboxLive\\*.*"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\Settings"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Plugins"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Config"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\EasyAntiCheat"));
	system(XorString("del /f /s /q %systemdrive%\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\NetworksCache"));
	system(XorString("del /f /s /q %systemdrive%\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\Rules"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\ServiceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\DeliveryOptimization\\Cache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IEDownloadHistory"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompatUaCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompatCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies\\DNTException"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies\\PrivacIE"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History\\Low"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.MicrosoftOfficeHub_8wekyb3d8bbwe\\LocalCache\\EcsCache0"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy\\TempState"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\Intel"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\System32\\config\\systemprofile\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\UnrealEngine"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\UnrealEngineLauncher"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\INTEL"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\ntuser.ini"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\System Volume Information\\IndexerVolumeGuid"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\CLR_v4.0"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\CLR_v3.0"));
	system(XorString("rmdir /s /q ""\"\%systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\Recovery"));
	system(XorString("@del /s /f /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds"));
	system(XorString("@del /s /f /q %systemdrive%\\Windows\\System32\\restore\\MachineGuid.txt"));
	system(XorString("@del /s /f /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER"));
	system(XorString("@del /s /f /q %systemdrive%\\Users\\Public\\Libraries"));
	system(XorString("@del /s /f /q %systemdrive%\\MSOCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\CloudStore"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\PowerShell\\StartupProfileData-NonInteractive"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\ConnectedDevicesPlatform\\L.%username%\\ActivitiesCache.db-wal"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\System32\\config\\systemprofile\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SoftwareDistribution\\DataStore\\Logs"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User"));
	system(XorString("@del /s /f /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\ServiceProfiles\\LocalService\\AppData\\Local\\ConnectedDevicesPlatform\\CDPGlobalSettings.cdp"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\cache\\qtshadercache"));
	system(XorString("@del /s /f /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\UsrClass.dat.log2"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\VkCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\CN\\NewsFeed"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\RHKRUA8J"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\CLR_v4.0\\UsageLogs"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SERVIC~1\\NETWOR~1\\AppData\\Local\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\ServiceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\DeliveryOptimization\\Cache"));
	system(XorString("reg delete HKLM\\SOFTWARE\\WOW6432Node\\EasyAntiCheat /f"));
	system(XorString("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\EasyAntiCheat /f"));
	system(XorString("reg delete HKLM\\SYSTEM\\ControlSet001\\Services\\BEService /f"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\CloudStore"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved"));
	system(XorString("rmdir /s /q C:\\Windows\\INF"));
	system(XorString("rmdir /s /q C:\\ProgramData\\%username%\\Microsoft\\XboxLive\\NSALCache"));
	system(XorString("rmdir /s /q C:\\Windows\\Prefetch"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\D3DSCache"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\CrashReportClient"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore"));
	system(XorString("rmdir /s /q C:\\Windows\\SoftwareDistribution\\DataStore\\Logs"));
	system(XorString("rmdir /s /q C:\\ProgramData\\Microsoft\\Windows\\WER\\Temp"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\AMD\\DxCache"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("@del /s /f /a:h / a : a / q C:\\Users\\username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\*.*"));
	system(XorString("@del /s /f /a:h / a : a / q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\*.*"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\Settings"));
	system(XorString("rmdir /s /q C:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins"));
	system(XorString("rmdir /s /q C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Plugins"));
	system(XorString("rmdir /s /q C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir"));
	system(XorString("rmdir /s /q C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Config"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Roaming\\EasyAntiCheat"));
	system(XorString("del /f /s /q C:\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\NetworksCache"));
	system(XorString("del /f /s /q C:\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\Rules"));
	system(XorString("rmdir /s /q C:\\Windows\\ServiceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\DeliveryOptimization\\Cache"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\Intel"));
	system(XorString("rmdir /s /q C:\\Windows\\System32\\config\\systemprofile\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\CloudStore"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved"));
	system(XorString("rmdir /s /q D:\\Windows\\INF"));
	system(XorString("rmdir /s /q D:\\ProgramData\\%username%\\Microsoft\\XboxLive\\NSALCache"));
	system(XorString("rmdir /s /q D:\\Users\\Public\\Documents"));
	system(XorString("rmdir /s /q D:\\Windows\\Prefetch"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\D3DSCache"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\CrashReportClient"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore"));
	system(XorString("rmdir /s /q D:\\Windows\\SoftwareDistribution\\DataStore\\Logs"));
	system(XorString("rmdir /s /q D:\\ProgramData\\Microsoft\\Windows\\WER\\Temp"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\AMD\\DxCache"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("@del /s /f /a:h / a : a / q D:\\Users\\username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\*.*"));
	system(XorString("@del /s /f /a:h / a : a / q D:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\*.*"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\Settings"));
	system(XorString("rmdir /s /q D:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins"));
	system(XorString("rmdir /s /q D:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Plugins"));
	system(XorString("rmdir /s /q D:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir"));
	system(XorString("rmdir /s /q D:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Config"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Roaming\\EasyAntiCheat"));
	system(XorString("del /f /s /q D:\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\NetworksCache"));
	system(XorString("del /f /s /q D:\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\Rules"));
	system(XorString("rmdir /s /q D:\\Windows\\ServiceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\DeliveryOptimization\\Cache"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\Temp"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\Intel"));
	system(XorString("rmdir /s /q D:\\Windows\\System32\\config\\systemprofile\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData"));
	system(XorString("rmdir /s /q D:\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\CloudStore"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved"));
	system(XorString("rmdir /s /q E:\\Windows\\INF"));
	system(XorString("rmdir /s /q E:\\ProgramData\\%username%\\Microsoft\\XboxLive\\NSALCache"));
	system(XorString("rmdir /s /q E:\\Users\\Public\\Documents"));
	system(XorString("rmdir /s /q E:\\Windows\\Prefetch"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\D3DSCache"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\CrashReportClient"));
	system(XorString("rmdir /s /q E:\\Windows\\temp"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore"));
	system(XorString("rmdir /s /q E:\\Windows\\SoftwareDistribution\\DataStore\\Logs"));
	system(XorString("rmdir /s /q E:\\ProgramData\\Microsoft\\Windows\\WER\\Temp"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\AMD\\DxCache"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("@del /s /f /a:h / a : a / q E:\\Users\\username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\*.*"));
	system(XorString("@del /s /f /a:h / a : a / q E:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\*.*"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\Settings"));
	system(XorString("rmdir /s /q E:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins"));
	system(XorString("rmdir /s /q E:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Plugins"));
	system(XorString("rmdir /s /q E:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir"));
	system(XorString("rmdir /s /q E:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Config"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Roaming\\EasyAntiCheat"));
	system(XorString("del /f /s /q E:\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\NetworksCache"));
	system(XorString("del /f /s /q E:\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\Rules"));
	system(XorString("rmdir /s /q E:\\Windows\\ServiceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\DeliveryOptimization\\Cache"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\Temp"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\Intel"));
	system(XorString("rmdir /s /q E:\\Windows\\System32\\config\\systemprofile\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData"));
	system(XorString("rmdir /s /q E:\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\CloudStore"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved"));
	system(XorString("rmdir /s /q F:\\Windows\\INF"));
	system(XorString("rmdir /s /q F:\\ProgramData\\%username%\\Microsoft\\XboxLive\\NSALCache"));
	system(XorString("rmdir /s /q F:\\Users\\Public\\Documents"));
	system(XorString("rmdir /s /q F:\\Windows\\Prefetch"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\D3DSCache"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\CrashReportClient"));
	system(XorString("rmdir /s /q F:\\Windows\\temp"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore"));
	system(XorString("rmdir /s /q F:\\Windows\\SoftwareDistribution\\DataStore\\Logs"));
	system(XorString("rmdir /s /q F:\\ProgramData\\Microsoft\\Windows\\WER\\Temp"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\AMD\\DxCache"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("@del /s /f /a:h / a : a / q F:\\Users\\username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\*.*"));
	system(XorString("@del /s /f /a:h / a : a / q F:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\*.*"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\Settings"));
	system(XorString("rmdir /s /q F:\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins"));
	system(XorString("rmdir /s /q F:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Plugins"));
	system(XorString("rmdir /s /q F:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir"));
	system(XorString("rmdir /s /q F:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Config"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Roaming\\EasyAntiCheat"));
	system(XorString("del /f /s /q F:\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\NetworksCache"));
	system(XorString("del /f /s /q F:\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\Rules"));
	system(XorString("rmdir /s /q F:\\Windows\\ServiceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\DeliveryOptimization\\Cache"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\Intel"));
	system(XorString("rmdir /s /q F:\\Windows\\System32\\config\\systemprofile\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData"));
	system(XorString("rmdir /s /q F:\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\EasyAntiCheat"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\servicing\\InboxFodMetadataCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\CloudStore"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\Explorer\\IconCacheToDelete"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\%username%\\Microsoft\\XboxLive\\NSALCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Prefetch"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\CrashReportClient"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Logs"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\SettingSync\\metastore"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SoftwareDistribution\\DataStore\\Logs"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\USOShared\\Logs"));
	system(XorString("@del /s /f /a:h / a : a / q %systemdrive%\\Users\\username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\*.*"));
	system(XorString("@del /s /f /a:h / a : a / q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\*.*"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\Settings"));
	system(XorString("rmdir /s /q %systemdrive%\\Program Files\\Epic Games\\Fortnite\\Engine\\Plugins"));
	system(XorString("rmdir /s /q %systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Plugins"));
	system(XorString("rmdir /s /q %systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("del /f /s /q %systemdrive%\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\NetworksCache"));
	system(XorString("del /f /s /q %systemdrive%\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\Rules"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\ServiceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\DeliveryOptimization\\Cache"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\%username%\\Microsoft\\XboxLive"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation"));
	system(XorString("@del /s /f /a:h / a : a / q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\XboxLive\\*.*"));
	system(XorString("rmdir /s /q %systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Config"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IEDownloadHistory"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompatUaCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompatCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies\\DNTException"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies\\PrivacIE"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History\\Low"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.MicrosoftOfficeHub_8wekyb3d8bbwe\\LocalCache\\EcsCache0"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy\\TempState"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\Intel"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\System32\\config\\systemprofile\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\UnrealEngine"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\UnrealEngineLauncher"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\INTEL"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\ntuser.ini"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache"));
	system(XorString("rmdir /s /q %systemdrive%\\System Volume Information\\IndexerVolumeGuid"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\CLR_v4.0"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\CLR_v3.0"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\Recovery"));
	system(XorString("@del /s /f /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds"));
	system(XorString("@del /s /f /q %systemdrive%\\Windows\\System32\\restore\\MachineGuid.txt"));
	system(XorString("@del /s /f /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER"));
	system(XorString("@del /s /f /q %systemdrive%\\Users\\Public\\Libraries"));
	system(XorString("@del /s /f /q %systemdrive%\\MSOCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\PowerShell\\StartupProfileData-NonInteractive"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\ConnectedDevicesPlatform\\L.%username%\\ActivitiesCache.db-wal"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User"));
	system(XorString("@del /s /f /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\ServiceProfiles\\LocalService\\AppData\\Local\\ConnectedDevicesPlatform\\CDPGlobalSettings.cdp"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\cache\\qtshadercache"));
	system(XorString("@del /s /f /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\UsrClass.dat.log2"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\VkCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\CN\\NewsFeed"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\RHKRUA8J"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\CLR_v4.0\\UsageLogs"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SERVIC~1\\NETWOR~1\\AppData\\Local\\Temp"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\MSOCache"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\MSOCache\\{71230000-00E2-0000-1000-00000000}"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\MSOCache\\{71230000-00E2-0000-1000-00000000}\\Setup.dat"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\ProgramData\\SystemExplorer\\snapshots"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\ProgramData\\SystemExplorer\\snapshots\\2020_06_23_Unknown.ses"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\All Users\\SystemExplorer\\snapshots"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\All Users\\SystemExplorer\\snapshots\\2020_06_23_Unknown.ses"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\Public\\Libraries\\collection.dat"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\Public\\Shared Files"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\007ABEF3D1BC494C378FE9E90815B33676DCEB47"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\0BF0DEAA8A19079E0D347735A2F512415B4D9B14"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\2895B436A3CE70D8FCBBA971A99D7782F30E1715"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\2A6A06259337531EA5101E9BD8818AE92450FCE4"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\2FDCB81A51CE8AA26F4BD6E7CDDD3E4152523F6A"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\3431F3D7B4D84C39D06C951A08612305A85C35DC"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\392F08F2C63619C978F2076694222ABC3054CFC4"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\5986EBD68E94FC890557CEA32F6CAEC6CB6F4178"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\961B1FEC1E2362CF4FD638D26E622DE659AC92E9"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\ADC2EE726BCEA3FC8D627A66C8B3CF417FD2DC42"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\B0A009BBE9168ED28F5DECDC24941B2322A8C3D5"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\B8A832221A39D663DCF615E77CD4D8C38BE3397F"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\C6B9936C20CBD1BAC3492CDB1C9DE3942D67C703"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\D35414CB7D187CB3CD779E2C86A7D150063C9457"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\D448A2D69B897D0CA64BC7EAD63C82B135B28C90"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\E14DAB2F57E4763BB4A8F40F08DD57DC07ADE36C"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\E99AFB51C2934AA3D72FE486EEE0EEB4B5F2D9DB"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\EB595625E08C501F5484D4F4FE7EB7A3D7AD7582"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\F005B0C18B5D2B42267BDF297A7FC7C62901554B"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\F127DEB22E390D0C299F3642BDF2B41D6E2A0B9C"));
	system(XorString("del /s /f /a:h /a:a /d %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\PersistentDownloadDir\\CMS\\Files\\C28FF1DE0C661DAF01E118A30B3F21B897A7A6E2\\F5710FD4DE0372D0B1111F2B96C8FBE8E242BABB"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\Microsoft\\Diagnosis\\EventStore.db-wal"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\AnyDesk\\system.conf"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Process Hacker 2\\Uninstall Process Hacker 2.lnk"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\SystemExplorer\\AutoSearch.idx"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\SystemExplorer\\config.ini"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\System\\UpdateSessionOrchestration.59c7b0b4-c337-4d08-b9c0-fa426979e9a5.2.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\AnyDesk\\system.conf"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\Microsoft\\Diagnosis\\EventStore.db-wal"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\Microsoft\\Windows\\Start Menu\\Programs\\Process Hacker 2\\Uninstall Process Hacker 2.lnk"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\SystemExplorer\\AutoSearch.idx"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\SystemExplorer\\config.ini"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\System\\UpdateSessionOrchestration.59c7b0b4-c337-4d08-b9c0-fa426979e9a5.2.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache\\713e5022c943532323bc46d7a4a302a3f7bb3ef2d91524f4.bin"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\GLCache\\c78a16879808119e_e61258832f8d6e72_18.bin"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\GLCache\\c78a16879808119e_e61258832f8d6e72_18.idx"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\cb00da9ba77862e\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.idx"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\cb00da9ba77862e\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.lock"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\cb00da9ba77862e\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.val"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Google\\Chrome\\User Data\\Crashpad\\settings.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Google\\Chrome\\User Data\\CrashpadMetrics-active.pma"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Google\\Chrome\\User Data\\Default\\Cookies"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Google\\Chrome\\User Data\\Default\\Cookies-journal"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Google\\Chrome\\User Data\\Default\\History"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Google\\Chrome\\User Data\\Default\\History-journal"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Google\\Chrome\\User Data\\Default\\Network Persistent State"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Google\\Chrome\\User Data\\Default\\Preferences"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Google\\Chrome\\User Data\\Default\\shared_proto_db\\000003.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Google\\Chrome\\User Data\\Default\\Storage\\ext\\gfdkimpbcpahaombhbimeihdjnejgicl\\def\\Network Persistent State"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Google\\Chrome\\User Data\\Default\\Storage\\ext\\nmmhkkegccagdldgiimedpiccmgmieda\\def\\Network Persistent State"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Google\\Chrome\\User Data\\Default\\TransportSecurity"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Google\\Chrome\\User Data\\Local State"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History\\History.IE5\\container.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\V01.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\WebCacheV01.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\WebCacheV01.jfm"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\AC\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.idx"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\AppData\\Indexed DB\\edb.chk"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\AppData\\Indexed DB\\edb.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\AppData\\Indexed DB\\IndexedDB.edb"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\AppData\\Indexed DB\\IndexedDB.jfm"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.YourPhone_8wekyb3d8bbwe\\AC\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.idx"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp\\0efa73a8-3ee8-4a56-8238-fd66041da5af.tmp"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp\\1cc661c5-2a12-4c15-9709-7719c0d1104f.tmp"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp\\6cb1d810-3967-492f-859c-32eb477d65b0.tmp"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp\\c2d1be50-b570-4916-a74a-001833c49e80.tmp"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp\\ec834d17-9157-48fa-9c87-0d5e11dafba0.tmp"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\discord\\Cookies"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\discord\\Cookies-journal"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\discord\\TransportSecurity"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\ntuser.dat.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\ntuser.dat.log2"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\NetSetup\\service.0.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\System32\\wbem\\Repository\\INDEX.BTR"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\System32\\wbem\\Repository\\MAPPING1.MAP"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\System32\\wbem\\Repository\\OBJECTS.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\$Recycle.bin\\S-1-5-18"));
	system(XorString("rmdir /s /q %systemdrive%\\$Recycle.bin\\S-1-5-21-2891436483-3527068592-4159525493-1000"));
	system(XorString("rmdir /s /q %systemdrive%\\$Recycle.bin\\S-1-5-21-2891436483-3527068592-4159525493-1001"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\$Recycle.bin\\S-1-5-21-2891436483-3527068592-4159525493-1001\\$IZHXE0R.lnk"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\$Recycle.bin\\S-1-5-21-2891436483-3527068592-4159525493-1001\\$RZHXE0R.lnk"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\$Recycle.bin\\S-1-5-21-2891436483-3527068592-4159525493-1001\\desktop.ini"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\ReportArchive\\Critical_10.0.18362.590_b537a032149b3fc544a53a99146fb73534da_00000000_c8f94735-9873-444c-a306-8dd6954b572a"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\ReportArchive\\NonCritical_80004004_22c1ca83e5fa39476cd1d16271645299486b10b8_00000000_929a6e9f-49b8-4215-b682-cc00cf3e418d"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\ReportArchive\\NonCritical_Acquisition;Lang_90366fa248f7617f221c332dfce0735c7c46c23a_00000000_a7506f65-0dc8-4d50-91cb-369e12f41d9e"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\ReportArchive\\NonCritical_Update;_7b704b9417a1f964ba24aef8b6e694eaa4e3f66d_00000000_c90c7df1-a072-4948-a56f-e7c8cd20598c"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\ReportQueue\\AppCrash_cleaner_protecte_fcd481920fdbe9e1bc33fa37d3af173eccfa9_25b40a16_bcd81103-aa68-4b70-858e-e88e8a6a09aa\\Report.wer"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\Temp\\WER8FDB.tmp.werInternalMetadata.xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\Temp\\WER9141.tmp.werInternalMetadata.xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\Temp\\WERB86A.tmp.werInternalMetadata.xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\Temp\\WERBED3.tmp.werInternalMetadata.xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\Temp\\WERCAAA.tmp.werInternalMetadata.xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\System\\NotificationUxBroker.3236b213-68aa-47bc-9264)-64108ecd7cec.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\System\\NotificationUxBroker.4630cbeb-d47f-4f81-8c2b-36a04b5af228.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\System\\NotificationUxBroker.d5ccaa76-0da2-4ca5-80fa-1bf2f8381baf.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\System\\UpdateSessionOrchestration.59c7b0b4-c337-4d08-b9c0-fa426979e9a5.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\System\\UpdateSessionOrchestration.67b6de68-f839-49b6-b54b-2ec0f2db220e.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\System\\UpdateSessionOrchestration.d326e512-11ec-44ce-9a43-c6ccb04a48e2.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\System\\UpdateSessionOrchestration.ef91322e-85f2-43dc-a356-738381fab3ca.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\System\\UsoCoreWorker.4c906b02-422b-4885-8ffd-64cf55dcbd63.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\System\\UsoCoreWorker.76bc7c90-3fed-441b-a59b-8409ad5209df.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\System\\UsoCoreWorker.76bc7c90-3fed-441b-a59b-8409ad5209df.2.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\System\\UsoCoreWorker.8c7fc4f8-c2b7-404e-b42d-5da3c0f99d13.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\System\\UsoCoreWorker.a994d378-4627-4189-ba2d-8bdf7bc5bfc3.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\System\\UsoCoreWorker.e5dbe7c2-b98a-4c80-a513-a80ac87497fd.1.etl"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User\\NotificationUx.497a0dd8-11e8-46a5-9294-74baa180b1f7.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User\\NotificationUx.5f227995-df8a-41ea-b26c-39b09ac901d5.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User\\NotificationUx.6575a326-7b5e-4ed3-a22a-9cc1400e38b2.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User\\NotifyIcon.1100a9bf-ce6b-4823-964c-d605105b3440.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User\\NotifyIcon.17f3e9d0-47ab-4b97-8ad1-585e4810e497.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User\\NotifyIcon.34bdef42-73f4-4dad-b870-d2cdc24c5e59.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User\\NotifyIcon.36301e5d-4a82-47a1-90d4-37a3fe906028.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User\\NotifyIcon.471d76f8-9796-40d2-b2e2-916e32bb7ff0.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User\\NotifyIcon.96aa18ac-3a07-4fd9-b91e-45ae5a9a7b55.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User\\NotifyIcon.ad298cfd-c66e-429d-a543-a03d5071d516.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User\\NotifyIcon.b5ef1747-8295-4348-a428-698e9d9bab48.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User\\NotifyIcon.dc5e816f-ac3c-4118-a459-52eac5ae8162.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User\\NotifyIcon.f7a6eb35-0f66-4072-9e2f-c3396e63d00e.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\ProgramData\\USOShared\\Logs\\User\\NotifyIcon.fee9dab9-a620-41ae-a8ac-8a567dc512f8.1.etl"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\All Users\\Microsoft\\Windows\\WER\\ReportArchive\\Critical_10.0.18362.590_b537a032149b3fc544a53a99146fb73534da_00000000_c8f94735-9873-444c-a306-8dd6954b572a"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\All Users\\Microsoft\\Windows\\WER\\ReportArchive\\NonCritical_80004004_22c1ca83e5fa39476cd1d16271645299486b10b8_00000000_929a6e9f-49b8-4215-b682-cc00cf3e418d"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\All Users\\Microsoft\\Windows\\WER\\ReportArchive\\NonCritical_Acquisition;Lang_90366fa248f7617f221c332dfce0735c7c46c23a_00000000_a7506f65-0dc8-4d50-91cb-369e12f41d9e"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\All Users\\Microsoft\\Windows\\WER\\ReportArchive\\NonCritical_Update;_7b704b9417a1f964ba24aef8b6e694eaa4e3f66d_00000000_c90c7df1-a072-4948-a56f-e7c8cd20598c"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\Microsoft\\Windows\\WER\\ReportQueue\\AppCrash_cleaner_protecte_fcd481920fdbe9e1bc33fa37d3af173eccfa9_25b40a16_bcd81103-aa68-4b70-858e-e88e8a6a09aa\\Report.wer"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\Microsoft\\Windows\\WER\\Temp\\WER8FDB.tmp.werInternalMetadata.xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\Microsoft\\Windows\\WER\\Temp\\WER9141.tmp.werInternalMetadata.xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\Microsoft\\Windows\\WER\\Temp\\WERB86A.tmp.werInternalMetadata.xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\Microsoft\\Windows\\WER\\Temp\\WERBED3.tmp.werInternalMetadata.xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\Microsoft\\Windows\\WER\\Temp\\WERCAAA.tmp.werInternalMetadata.xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\System\\NotificationUxBroker.3236b213-68aa-47bc-9264-64108ecd7cec.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\System\\NotificationUxBroker.4630cbeb-d47f-4f81-8c2b-36a04b5af228.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\System\\NotificationUxBroker.d5ccaa76-0da2-4ca5-80fa-1bf2f8381baf.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\System\\UpdateSessionOrchestration.59c7b0b4-c337-4d08-b9c0-fa426979e9a5.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\System\\UpdateSessionOrchestration.67b6de68-f839-49b6-b54b-2ec0f2db220e.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\System\\UpdateSessionOrchestration.d326e512-11ec-44ce-9a43-c6ccb04a48e2.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\System\\UpdateSessionOrchestration.ef91322e-85f2-43dc-a356-738381fab3ca.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\System\\UsoCoreWorker.4c906b02-422b-4885-8ffd-64cf55dcbd63.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\System\\UsoCoreWorker.76bc7c90-3fed-441b-a59b-8409ad5209df.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\System\\UsoCoreWorker.76bc7c90-3fed-441b-a59b-8409ad5209df.2.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\System\\UsoCoreWorker.8c7fc4f8-c2b7-404e-b42d-5da3c0f99d13.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\System\\UsoCoreWorker.a994d378-4627-4189-ba2d-8bdf7bc5bfc3.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\System\\UsoCoreWorker.e5dbe7c2-b98a-4c80-a513-a80ac87497fd.1.etl"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\User"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\User\\NotificationUx.497a0dd8-11e8-46a5-9294-74baa180b1f7.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\User\\NotificationUx.5f227995-df8a-41ea-b26c-39b09ac901d5.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\User\\NotificationUx.6575a326-7b5e-4ed3-a22a-9cc1400e38b2.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\User\\NotifyIcon.1100a9bf-ce6b-4823-964c-d605105b3440.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\User\\NotifyIcon.17f3e9d0-47ab-4b97-8ad1-585e4810e497.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\User\\NotifyIcon.34bdef42-73f4-4dad-b870-d2cdc24c5e59.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\User\\NotifyIcon.36301e5d-4a82-47a1-90d4-37a3fe906028.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\User\\NotifyIcon.471d76f8-9796-40d2-b2e2-916e32bb7ff0.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\User\\NotifyIcon.96aa18ac-3a07-4fd9-b91e-45ae5a9a7b55.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\User\\NotifyIcon.ad298cfd-c66e-429d-a543-a03d5071d516.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\User\\NotifyIcon.b5ef1747-8295-4348-a428-698e9d9bab48.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\User\\NotifyIcon.dc5e816f-ac3c-4118-a459-52eac5ae8162.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\User\\NotifyIcon.f7a6eb35-0f66-4072-9e2f-c3396e63d00e.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\All Users\\USOShared\\Logs\\User\\NotifyIcon.fee9dab9-a620-41ae-a8ac-8a567dc512f8.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\CN\\cmdb.blb"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\CN\\gallery.blb"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\CN\\GameReport"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\CN\\gmdb.blb"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\CN\\NewsFeed"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\CN\\NewsFeed\\25"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\CN\\NewsFeed\\25\\NewsFeedImages"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\CN\\restreamserverlist.json"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\CN\\twserverlist.json"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DVR"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DVR\\6361858243035925429"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DVR\\6361858243035925429\\0"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DVR\\8734853907968866203"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DVR\\8734853907968866203\\0"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache\\03fa51c89e705ca48a277c5f61004179235a33edd771be4d.bin"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache\\0a546cba296a9e68f265c3086aa07c28dd6605e3ba8893bb.bin"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache\\16352c589ce268395b7e0ca9a4f6bfa5857772834eb83082.bin"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache\\30134e9231aa4e87e72371d23d4c84d4326cb10e3daa1b6e.bin"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache\\7dce470adc74577df2582ed5b5a8ce35a4ebfb66e18142df.bin"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache\\87932ef93f496025f013319c395883d82867ade4ed449958.bin"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache\\8b580fb76064a4d2a69a53bc936a3867550d26af3eace690.bin"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache\\8c6a2b54a99124e892e8d2a67d26b9473564794857df0427.bin"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache\\9074b7d9148660580c6e1c66c0ff60f3114586f57e9c924b.bin"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache\\9110b7c65293fb625937ec3df1bfc1036122dc7a3c84288c.bin"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\DxCache\\e2429c735535a36661d281e5670fd566672ec75767f667f7.bin"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\GLCache\\233f747ba72d112e_e61258832f8d6e72_18.bin"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\GLCache\\233f747ba72d112e_e61258832f8d6e72_18.idx"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\GLCache\\9e7193c876c6bfd9_e61258832f8d6e72_18.bin"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\GLCache\\9e7193c876c6bfd9_e61258832f8d6e72_18.idx"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\GLCache\\acb585400ae887c3_e61258832f8d6e72_18.bin"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\GLCache\\acb585400ae887c3_e61258832f8d6e72_18.idx"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\GLCache\\e1605a43ab40e170_e61258832f8d6e72_18.bin"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\GLCache\\e1605a43ab40e170_e61258832f8d6e72_18.idx"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\OpenVR"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\OpenVR\\settings"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\OpenVR\\settings\\settings.json"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\0287568f6b75a8de2d21278106c373f2fd10f5ab.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\055ab669598a85b07ca1a312b70bb2d735566235.jsc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\05760cce83a8dfa687256693a7397a94161c7429.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\0bd5cf23c1a78fdd98ccbf96a05645392c65305c.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\14b0de5879e797bed4ed649bc7457ada52a71c3b.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\1d6263d03294a2f9bcd55bde4f33e5de1ed9c0f2.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\29bb0c0bf0b58d48d2c7055bcc94c1807afc5bc8.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\2bad62830a1a3fa395c30b0def6305959ce00e7d.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\39e558df74e490d8b2a9a7898d04ba05ba07d713.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\3ecf731716e712a87e5a1497cd9982009895b0ed.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\452515eb941cb7160682f3dca588491df831c58a.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\4e6c64374802c0a24d026cc2f1f6576e1f2d9deb.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\507b532306dc57a70dba6d385fa1db221bdc1196.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\5846ecc766658c42f6899c3300227c24422c029c.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\5a10e3c0d63fbbb9d532fdff7b935943e9a4180b.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\659d032d7554e20815645659c4a4771ad6f28eaa.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\667239feb931f410e4c21a0a66b1f36ea615f256.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\6d7e9aa9e1f7bdef62c968f6ba5c6262feef3652.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\6f24684d8b50193eb3cdfee634ff56f1ba4b5ffd.jsc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\764491f39a190ce4784fe9fb5f9321d6a83a6923.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\7db9dca541ca970bbde9a255a4c8ad930d661522.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\7ef944aa89e49823dadcfe593aceb667d1f0ca6b.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\8b421c776123b00d00c5fc368b81f68c22c3bf3a.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\93f9f424943f9bc70e700cc1b13e475994baf4dc.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\95a8b5eb4b9d209a46517148d3490ca93123bfc6.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\9b2c821191df464a61bc66bd5026075a4b232af8.jsc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\9cb98731fb29195e48040dc21ae224f0d4c3cc71.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\a178e511f194367f96881a7f045e55580475fc41.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\a24fa65f5047c8878e02c45ce342d5d69adf2067.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\abc17aac885f87afcc5fbea22502bfa7c3e539ca.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\ac4358be4e9a3cdeb4a8e1d576ec478aa216e9b9.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\b61b2ceb9b2be7177aab396b65e75f1be5156c45.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\bfd74a5141e51e29b3940c0f698c2755e8764fb3.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\c4d8484a5bc074b78ea4656d40571c254284a480.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\c7f5d769a1cf8c7f79053219959679b2a01cd04a.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\d0ed837cb6b63600f6074e658f45046a81cce16b.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\d21507d20efc9bdd144e9be39568879e5b8ab2dd.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\d7c9692f2b381eb260ee1d3b3bf35a5ce64ca547.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\d9ff1789c7bf11aa8d294ede3df00436548279aa.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\e32adf378436174ff740b9f268a4fb98f4a5fb41.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\e50e62317dd976f8872060c6060416dd3dac1b22.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\e85ee428750b0511dee051a15583b9849dbe5386.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\f353ffb44954d9d0a50ef976fad4f9df06ed65f2.qmlc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\cache\\qmlcache\\fded362ed867cc3f22faf60c8331c4a030442901.qmlc"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\QtWebEngine\\Default\\blob_storage"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\QtWebEngine\\Default\\blob_storage\\bf8f1297-2ff1-4c58-bd63-f4aa0c1561aa"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\QtWebEngine\\Default\\blob_storage\\c094866d-54bb-428c-8740-597c81a11fd2"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\QtWebEngine\\Default\\GPUCache"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\QtWebEngine\\Default\\GPUCache\\data_0"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\QtWebEngine\\Default\\GPUCache\\data_1"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\QtWebEngine\\Default\\GPUCache\\data_2"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\QtWebEngine\\Default\\GPUCache\\data_3"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\Radeonsoftware\\QtWebEngine\\Default\\GPUCache\\index"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\VkCache"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\VkCache\\6713D41B6651B6FDD5C6B48E74918839.parc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\VkCache\\9F0FCC28927066C65D3E8638F7BD9D0A.parc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\VkCache\\A523727914F9F26A5D3E8638F7BD9D0A.parc"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\AMD\\VkCache\\FE49C6253CAEE18CD5C6B48E74918839.parc"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\cache\\qtshadercache"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\cache\\qtshadercache\\07aac9bdf60e1e078a2e04bad73cb456220c61b4"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\cache\\qtshadercache\\151d848f668e8d50cfb6460d73b3d589a041764b"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\cache\\qtshadercache\\3c597a80b51a24c02510e986e8c27bdb62e99ba6"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\cache\\qtshadercache\\5cc098bc5354d98253495e89cc26ca4ba78a3a15"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\cache\\qtshadercache\\7d5f9fc417d36376dbfbebf864483aca3a25ac1a"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\cache\\qtshadercache\\b0aaef713c43dbf8918134eaabd5a169a298ca52"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\cache\\qtshadercache\\cba8d1ceb9482bf7ad559bc702b71beca94f54a3"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\cache\\qtshadercache\\d524b60ebe14b3342c6956c081215082a7ec73c0"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\cache\\qtshadercache\\e24592d8d235339875cae31851ad680a190a7cc6"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\2eeca7aac882a0f4"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\2eeca7aac882a0f4\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.idx"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\2eeca7aac882a0f4\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.lock"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\2eeca7aac882a0f4\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.val"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\40daf7f894d00617"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\40daf7f894d00617\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.idx"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\40daf7f894d00617\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.lock"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\40daf7f894d00617\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.val"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\6fedf2efe5f61662"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\6fedf2efe5f61662\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.idx"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\6fedf2efe5f61662\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.lock"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\6fedf2efe5f61662\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.val"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\6fedf2efe5f61662\\6F75932F-7DFC-4FB0-B4B8-12DE1AC415DA_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.idx"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\6fedf2efe5f61662\\6F75932F-7DFC-4FB0-B4B8-12DE1AC415DA_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.lock"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\6fedf2efe5f61662\\6F75932F-7DFC-4FB0-B4B8-12DE1AC415DA_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.val"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\6fedf2efe5f61662\\F4EB2D6C-ED2B-4BDD-AD9D-F913287E6768.idx"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\6fedf2efe5f61662\\F4EB2D6C-ED2B-4BDD-AD9D-F913287E6768.lock"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\6fedf2efe5f61662\\F4EB2D6C-ED2B-4BDD-AD9D-F913287E6768.val"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\7069277d1d240c2d"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\7069277d1d240c2d\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.idx"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\7069277d1d240c2d\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.lock"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\7069277d1d240c2d\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.val"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\8542fc0d55cc278c"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\8542fc0d55cc278c\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.idx"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\8542fc0d55cc278c\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.lock"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\8542fc0d55cc278c\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.val"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\eea1e902c7ebe10a"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\eea1e902c7ebe10a\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.idx"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\eea1e902c7ebe10a\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.lock"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\D3DSCache\\eea1e902c7ebe10a\\52264C4C-172F-41B9-91B8-7F0C3B1E9021_VEN_1002&DEV_67DF&SUBSYS_C580&REV_E7.val"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate\\Config"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate\\Config\\CoalescedSourceConfigs"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Intermediate\\Config\\CoalescedSourceConfigs\\PortalRegions.ini"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\CrashReportClient"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\CrashReportClient\\UE4CC-Windows-1A8F835F430DCA5989CFAFB6FD1FAE54"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\CrashReportClient\\UE4CC-Windows-1A8F835F430DCA5989CFAFB6FD1FAE54\\CrashReportClient.ini"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\CrashReportClient\\UE4CC-Windows-27C298BF43EB6EFB86CEE0B65983B441"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\CrashReportClient\\UE4CC-Windows-27C298BF43EB6EFB86CEE0B65983B441\\CrashReportClient.ini"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\CrashReportClient\\UE4CC-Windows-461BB7E1446B6CEDFAF6A2AAAFC6AE46"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\CrashReportClient\\UE4CC-Windows-461BB7E1446B6CEDFAF6A2AAAFC6AE46\\CrashReportClient.ini"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\CrashReportClient\\UE4CC-Windows-9474031841D0C2C74CE2D08674030CAD"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\CrashReportClient\\UE4CC-Windows-9474031841D0C2C74CE2D08674030CAD\\CrashReportClient.ini"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\CrashReportClient\\UE4CC-Windows-C5294B3C421111926FF6C6953C14DD9C"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\CrashReportClient\\UE4CC-Windows-C5294B3C421111926FF6C6953C14DD9C\\CrashReportClient.ini"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Compat.ini"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\EditorPerProjectUserSettings.ini"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Engine.ini"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Game.ini"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\GameUserSettings.ini"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Hardware.ini"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Input.ini"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\Lig.htm"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Config\\Windows\\PortalRegions.ini"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\cef3.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\EpicGamesLauncher-backup-2020.10.26-20.14.04.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\EpicGamesLauncher-backup-2020.10.26-20.15.11.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\EpicGamesLauncher-backup-2020.10.26-20.15.14.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\EpicGamesLauncher-backup-2020.10.26-20.49.48.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\EpicGamesLauncher.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\SelfUpdatePrereqInstall.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs\\SelfUpdatePrereqInstall_0_PortalPrereqSetup.log"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\CLR_v4.0"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\CLR_v4.0\\UsageLogs"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\CLR_v4.0\\UsageLogs\\LocalBridge.exe"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\CLR_v4.0\\UsageLogs\\powershell.exe"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\Recovery"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\Recovery\\Active"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\Recovery\\High"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\Recovery\\High\\Active"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\Recovery\\High\\Last Active"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\Recovery\\High\\Last Active\\RecoveryStore.{A4D06787-1846-11EB-9B1E-5404A67EF09C}.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\Recovery\\High\\Last Active\\{A4D06788-1846-11EB-9B1E-5404A67EF09C}.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\Recovery\\High\\Last Active\\{A4D06789-1846-11EB-9B1E-5404A67EF09C}.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\Recovery\\Last Active"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\Recovery\\Last Active\\RecoveryStore.{FB5C5BC1-1846-11EB-9B1E-5404A67EF09C}.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\Recovery\\Last Active\\{FB5C5BC2-1846-11EB-9B1E-5404A67EF09C}.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\Recovery\\Last Active\\{FB5C5BC3-1846-11EB-9B1E-5404A67EF09C}.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History\\History.IE5\\MSHist012020102620201027"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History\\History.IE5\\MSHist012020102620201027\\container.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History\\History.IE5\\MSHist012020102720201028"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History\\History.IE5\\MSHist012020102720201028\\container.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History\\Low"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History\\Low\\History.IE5"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History\\Low\\History.IE5\\container.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompatCache"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompatCache\\container.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompatCache\\Low"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompatCache\\Low\\container.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompatUaCache"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompatUaCache\\container.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompatUaCache\\Low"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompatUaCache\\Low\\container.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IEDownloadHistory"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IEDownloadHistory\\container.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\container.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\2[1]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\all[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\button-buy-center[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\Converged_v21033_5plpI1P0_uKjrokWdqCoBw2[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\Converged_v21033_5plpI1P0_uKjrokWdqCoBw2[2].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\css[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\driver_09_us[1].xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\d[1]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\d[2]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\d[3]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\d[4]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\facebook[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\favicon[1].ico"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\fbevents[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\fontawesome-webfont[1].eot"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\fr_scan[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\f[1].txt"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\f[2].txt"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\gtm[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\insight.min[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\jquery-1.11.3.min[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\KFOiCnqEu92Fr1Mu51QrEzAdKQ[1].woff"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\KFOjCnqEu92Fr1Mu51S7ACc6CsI[1].woff"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\KFOjCnqEu92Fr1Mu51TjASc6CsI[1].woff"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\KFOjCnqEu92Fr1Mu51TLBCc6CsI[1].woff"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\KFOjCnqEu92Fr1Mu51TzBic6CsI[1].woff"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\KFOkCnqEu92Fr1Mu51xIIzQ[1].woff"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\logo-winrar[1].gif"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\nl-button-center[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\onb_02-d915c4c7a2[1].dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\override[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\RE1Mu3b[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\RE4GhRT[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\RE4GhRY[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\RE4Gkz3[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\RE4Gphi[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\RE4GsBq[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\RE4GsBr[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\RE4tG3O[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\RE4tIoW[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\RE4tMOD[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\RE4tQVa[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\special[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\toptraffic[1]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\tr[1].gif"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\windows-app-web-link[1].json"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\Windows_Cortana_AppStore_img[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\J5FKB82Z\\Windows_Cortana_Google_img[1].jpg"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\281714859343322[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\2[1]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\4091853090f51d994f2b.chunk[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\arrow-language[1].gif"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\cccad-25[1].json"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\contentId[1].json"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\ConvergedLoginPaginatedStrings.en_jVW7dzgc4hxmDSf8caZ_fw2[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\ConvergedLoginPaginatedStrings.en_jVW7dzgc4hxmDSf8caZ_fw2[2].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\css[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\driver_09_us.xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\d[1]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\d[2]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\d[3]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\d[4]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\e2d2db218164f679d536.chunk[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\favicon[1].ico"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\fud8oyh[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\gpt[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\installhit[1]..htm"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\jquery.min[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\KFOlCnqEu92Fr1MmEU9fBBc-[1].woff"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\KFOlCnqEu92Fr1MmWUlfBBc-[1].woff"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\KFOlCnqEu92Fr1MmYUtfBBc-[1].woff"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\KFOmCnqEu92Fr1Mu4mxM[1].woff"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\lnk[1].gif"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\mwf-main.min[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\networker[1].exe"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\onboarding[1]..htm"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\onb_01-ebd3493a5d[1].dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\PreSignInSettingsConfig[1].json"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\price_cut[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\RE4GeFi[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\RE4GiCD[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\RE4Gphj[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\RE4GpKa[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\RE4n1yl[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\RE4ncJa[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\seccheckser[1]..htm"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\shutdown-bg[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\smile_lol[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\sodar2[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\tr[1].gif"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\update75[1].xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\LF5HIYV7\\wr_64_53[1].png"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\19.002.0107[1].json"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\20.169.0823[1].json"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\733fb438c6cd50d85929.chunk[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\7fb0cc33d38abee432e0.chunk[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\analytics[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\basic[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\checkmark-green-alpha[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\ConvergedLogin_PCore_m_AEFbtYqJeKR6sGUe93pA2[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\ConvergedLogin_PCore_m_AEFbtYqJeKR6sGUe93pA2[2].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\css[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\default_css_rrlb_en[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\driver_09_us[1].xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\favicon[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\favicon[2].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\favicon[3].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\fe-a5cf09[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\frame320_270[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\f[1].txt"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\f[2].txt"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\grey-arrow-center[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\GyazoIcon-ca785ed7ee[1].woff"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\index[1]..htm"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\insight.beta.min[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\installdone[1]..htm"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\jquery[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\js[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\js[2].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\KFOkCnqEu92Fr1MmgVxIIzQ[1].woff"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\KFOlCnqEu92Fr1MmSU5fBBc-[1].woff"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\known_providers_download_v1[1].xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\launch-EN7b3d710ac67a4a1195648458258f97dd.min[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\mixpanel-2-latest.min[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\mwf-auto-init-main.var.min[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\onboarding_intro_bg@2x-d6d5b26920[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\osd[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\pubads_impl_2020102201[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\px[1].gif"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\p[1].gif"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\RE4DnuZ[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\RE4Dnv6[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\RE4Dnwt[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\RE4DsDH[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\RE4n4cm[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\RE4ncJ7[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\RE4nqTh[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\runner[1]..htm"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\twitter-logo-blue[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\uwt[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\winrar_books[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\UC06S073\\x[1]"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\11b7f95f2c46ed2b4aa6.chunk[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\19.002.0107[1].json"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\20.169.0823[1].json"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\6FSsb-UJJL552-BBVQ9PjhNlnidQS7Wuq-rChJjpTVY[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\7c-0cba17[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\adapters[1].exe"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\ads[1].htm"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\analytics[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\box_left[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\button_buy_blank[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\ConvergedLoginPaginatedStrings.en_LF5wadGUj8ZgZU2sWOZt2w2[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\dd9127e0e7cb1c41aff2.chunk[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\devcon[1].exe"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\driver_09_us[1].xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\d[1]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\e5ff718358bfc9f45dbb.chunk[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\edge[1]..htm"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\favicon[1].ico"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\favicon[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\favicon[2].ico"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\favicon[2].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\favicon[3].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\filers3[1]..htm"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\f[1].txt"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\f[2].txt"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\ingests[1].htm"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\js[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\landing-5e5d92e7d9[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\landing-7f58b21da8[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\microsoft_logo_ee5c8d9fb6248c938fd0dc19370e90bd[1].svg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\MWF_SocialFacebook.png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\MWF_SocialTwitter.png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\navbar_logo_black-ba9fe0ffbb[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\nota_logo-3a02779562[1].svg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\oldprice-cut[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\onboarding_shortcuts-40c1a91f34[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\oneplayer[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\price[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\settings-tipset[1].xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\sprite[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\styles[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\tr[1].gif"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\wcp-consent[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\WebResource[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\Y5CL9DTA\\zrt_lookup[1]..htm"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\Content.IE5"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\7c-0cba17[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\background_gradient[1]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\css[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\filers3[1]..htm"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\httpErrorPagesScripts[1]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\RE1Mu3b[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\RE4Dnv6[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\RE4DsDH[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\RE4GeFi[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\RE4GhRT[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\RE4GiCD[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\RE4Gphi[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\RE4Gphj[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\RE4GpKa[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\RE4GsBq[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\RE4GsBr[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\RE4n1yl[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\RE4n4cm[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\RE4ncJ7[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\RE4ncJa[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\RE4nqTh[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\3K1Z2XD2\\Windows_Cortana_Google_img[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\container.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\NH0YNNKL"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\NH0YNNKL\\fwlink[1]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\NH0YNNKL\\http_500[1]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\NH0YNNKL\\info_48[1]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\NH0YNNKL\\MWF_SocialTwitter.png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\NH0YNNKL\\override[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\NH0YNNKL\\RE4DnuZ[1].png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\NH0YNNKL\\RE4Dnwt[1].png"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\SY81ARGE"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\SY81ARGE\\down[1]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\SY81ARGE\\errorPageStrings[1]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\SY81ARGE\\MWF_SocialFacebook.png"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\SY81ARGE\\oneplayer[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\SY81ARGE\\RE4tIoW[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\SY81ARGE\\Windows_Cortana_AppStore_img[1].jpg"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\WYWB6374"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\WYWB6374\\bullet[1]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\WYWB6374\\edge[1].htm"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\WYWB6374\\ErrorPageTemplate[1]"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\WYWB6374\\mwf-auto-init-main.var.min[1].js"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\WYWB6374\\mwf-main.min[1].css"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\WYWB6374\\RE4GhRY[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\WYWB6374\\RE4Gkz3[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\WYWB6374\\RE4tG3O[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\WYWB6374\\RE4tMOD[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\IE\\WYWB6374\\RE4tQVa[1].jpg"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Low\\MSIMGSIZ.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Virtualized"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Virtualized\\C"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Virtualized\\C\\Users"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Virtualized\\C\\Users\\%username%"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Virtualized\\C\\Users\\%username%\\AppData"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Virtualized\\C\\Users\\%username%\\AppData\\Local"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Virtualized\\C\\Users\\%username%\\AppData\\Local\\D3DSCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Virtualized\\C\\Users\\%username%\\AppData\\Local\\D3DSCache\\2eeca7aac882a0f4"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Virtualized\\C\\Users\\%username%\\AppData\\Local\\Microsoft"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Virtualized\\C\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Virtualized\\C\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Virtualized\\C\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies\\DNTException"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies\\DNTException\\container.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies\\DNTException\\Low"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies\\ESE"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies\\ESE\\container.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies\\Low"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies\\Low\\ESE"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies\\Low\\ESE\\container.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies\\PrivacIE"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies\\PrivacIE\\Low"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\V01.chk"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\V010000D.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\V010000E.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\V010000F.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\V01res00001.jrs"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\V01res00002.jrs"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\XboxLive\\AuthState"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.MicrosoftOfficeHub_8wekyb3d8bbwe\\LocalCache\\EcsCache0"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.MicrosoftOfficeHub_8wekyb3d8bbwe\\LocalCache\\EcsCache0\\Ecs.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState\\DiagOutputDir"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.OneConnect_8wekyb3d8bbwe\\LocalState"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\202914"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\202914\\1c3431f451c04890a79f3d34c510582d_1"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\280810"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\280810\\89ea6c52ce794aab8c8100efbaebe208_1"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\280811"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\280811\\990a969dd9a646d88aced489aab232d2_1"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\280815"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\280815\\b10f8ff1cbaf4d1bbe3744195514e0ec_1"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\314559"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\314559\\09b34f7d08794b8ca07a4bb232070e6d_1"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\314559\\4fb726a5e5714cec8ac25ef6eded11ae_1"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\338387"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\338387\\3f2c3424ce374ddaa1b9b39f968e1ca6_1"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\338388"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\338388\\555e30de03cd4b8a9c19f1937641ec7c_1"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\338389"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\338389\\18cdcf58684b400e921ff88b0422ea52_1"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\353698"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\353698\\64a7165020ad4943a20bf958958ff4c5_1"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\88000045"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\88000045\\1583bc9a36494ba19469351fc431634c_1"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\88000161"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState\\TargetedContentCache\\v3\\88000161\\c7724eb10fe348fd8b2d21c9360f66cf_1"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy\\LocalState"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.StartMenuExperienceHost_cw5n1h2txyewy\\TempState"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\BackgroundTransferApi"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\INetCache"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\INetCache\\container.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\INetCache\\DKWILU71"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\INetCache\\E3XZJD2S"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\INetCache\\O3BIZQEJ"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\INetCache\\Y29LIHAY"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\INetCookies"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\INetCookies\\ESE"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\INetHistory"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\INetHistory\\BackgroundTransferApi"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\INetHistory\\BackgroundTransferApi\\container.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\INetHistory\\BackgroundTransferApiGroup"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\Microsoft"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\Microsoft\\CryptnetUrlCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\Microsoft\\CryptnetUrlCache\\Content"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\Microsoft\\CryptnetUrlCache\\Content\\57C8EDB95DF3F0AD4EE2DC2B8CFD4157"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\Microsoft\\CryptnetUrlCache\\Content\\6BADA8974A10C4BD62CC921D13E43B18_711ED44619924BA6DC33E69F97E7FF63"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\Microsoft\\CryptnetUrlCache\\Content\\77EC63BDA74BD0D0E0426DC8F8008506"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\Microsoft\\CryptnetUrlCache\\Content\\80237EE4964FC9C409AAF55BF996A292_C0427F5F77D9B3A439FC620EDAAB6177"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\Microsoft\\CryptnetUrlCache\\Content\\FB0D848F74F70BB2EAA93746D24D9749"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\Microsoft\\CryptnetUrlCache\\MetaData"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\Microsoft\\CryptnetUrlCache\\MetaData\\57C8EDB95DF3F0AD4EE2DC2B8CFD4157"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\Microsoft\\CryptnetUrlCache\\MetaData\\6BADA8974A10C4BD62CC921D13E43B18_711ED44619924BA6DC33E69F97E7FF63"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\Microsoft\\CryptnetUrlCache\\MetaData\\77EC63BDA74BD0D0E0426DC8F8008506"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\Microsoft\\CryptnetUrlCache\\MetaData\\80237EE4964FC9C409AAF55BF996A292_C0427F5F77D9B3A439FC620EDAAB6177"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\Microsoft\\CryptnetUrlCache\\MetaData\\FB0D848F74F70BB2EAA93746D24D9749"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\TokenBroker"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\TokenBroker\\Cache"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\AC\\TokenBroker\\Cache\\b649a1dfc48057a9418f139cabafc7d495971d5e.tbres"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache\\Local"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache\\Local\\Microsoft"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache\\Roaming"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache\\Roaming\\Microsoft"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache\\Roaming\\Microsoft\\Windows"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache\\Roaming\\Microsoft\\Windows\\Start Menu"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\Settings\\roaming.lock"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp\\18e190413af045db88dfbd29609eb877.db.ses"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp\\aria-debug-2364.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp\\d4139383-a888-41ef-9a14-e5e47f55a5cd.tmp"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp\\mat-debug-3332.log"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\UnrealEngine"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\UnrealEngine\\4.23"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\UnrealEngine\\4.23\\Saved"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\UnrealEngine\\4.23\\Saved\\Config"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\UnrealEngine\\4.23\\Saved\\Config\\Windows"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Local\\UnrealEngine\\4.23\\Saved\\Config\\Windows\\Manifest.ini"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\UnrealEngineLauncher"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\UnrealEngineLauncher\\com"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\0177A2B8C3D6561744552D69E6BD54B0_5CE748556F479AAF2B2F68B8C4FFC921"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\0255CEC2C51D081EFF40366512890989_030671A634A8767F1A3BDBEF73264BD6"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\07CEF2F654E3ED6050FFC9B6EB844250_27F2F3EAE5ACF629E280F218628D1935"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\07CEF2F654E3ED6050FFC9B6EB844250_3431D4C539FB2CFCB781821E9902850D"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\089915B119001793D7BF4EE252078087"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\0972B7C417F696E06E186AEB26286F01_04451AA00A576F21A374E740D0AF7FCE"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\0972B7C417F696E06E186AEB26286F01_04EE11A998985CD7A51904A574822082"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\16452181C5FFFED5EC9E5598AF62236B"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\1E11E75149C17A93653DA7DC0B8CF53F_23C03C7F20259C89EC80B04BB121BB9B"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\1E11E75149C17A93653DA7DC0B8CF53F_81A542ACDA3B2CCD7E4BD57E47A4E768"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\285248A5750721A9ACC886EF3622CE11_B581B398CF568C2971AE569910906F5B"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\2A7611428D62805A3E4E5BC4103D82E4_E16F3AF852C0CB92002C8B8BAE928280"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\30D802E0E248FEE17AAF4A62594CC75A"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\31A26C5EC85E51FC61BCE8F2051D94F1"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\34DA60AA966CD9270C5362E6AEF824CF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\35DDEDF268117918D1D277A171D8DF7B_038EFFCE7B3AA51EA9EC061CB0C95C9B"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\35DDEDF268117918D1D277A171D8DF7B_C99BC807C0805A191BDE7866F58BB043"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\35DDEDF268117918D1D277A171D8DF7B_EE6F1EAC22DA711DE5B1954547F69324"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\35DDEDF268117918D1D277A171D8DF7B_F2203D7789A46E93B87123736CC6223B"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\35DDEDF268117918D1D277A171D8DF7B_F9E059880B3A4FFC00A58C6C3FA2A764"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\37570AF16029C559A6224EE4AF54691D"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\3781B4A3713292956206932165FA4132_29912A7EA9EDB60BB42BD5D9643E27BB"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\42B9A473B4DAF01285A36B4D3C7B1662_178C086B699FD6C56B804AF3EF759CB5"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\4344B8AF97AF3A423D9EE52899963CDE_AAD1066B0E377EEF818C4BB9002BCCAF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\5080DC7A65DB6A5960ECD874088F3328_862BA1770B2FEE013603D2FF9ABEAFDA"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\572BF21E454637C9F000BE1AF9B1E1A9"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\57C8EDB95DF3F0AD4EE2DC2B8CFD4157"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\5887976EDAA817EEF5159B09F6FCD000_2B9B9A7DE20F15925163FFD6C1660289"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\5887976EDAA817EEF5159B09F6FCD000_93E6F202CE64F2F73CAE285193BAD4B2"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\5CE23102DABC2A5BD21D8403BA46FB72"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\64DCC9872C5635B1B7891B30665E0558_5552C20A2631357820903FD38A8C0F9F"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\66AE3BFDF94A732B262342AD2154B86E_35FC16AB69CB46C841BF8F58B66D283F"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\66AE3BFDF94A732B262342AD2154B86E_40B65293A90162EEC6A90E6A9E071DF4"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\66AE3BFDF94A732B262342AD2154B86E_A89204531497D3661ACEDB6FB93ECB4C"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\6AF4EE75E3A4ABA658C0087EB9A0BB5B_569A6A04C8591541F7E990B56F9661DA"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\6BADA8974A10C4BD62CC921D13E43B18_1DC6D7385EA816C957BA2B715AC5C442"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\6BADA8974A10C4BD62CC921D13E43B18_28DEA62A0AE77228DD387E155AD0BA27"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\6BADA8974A10C4BD62CC921D13E43B18_711ED44619924BA6DC33E69F97E7FF63"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\6BADA8974A10C4BD62CC921D13E43B18_88614FFAD35D353421B8A7E1FE18FCE4"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\6BADA8974A10C4BD62CC921D13E43B18_AD319D6DA1A11BC83AC8B4E4D3638231"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\6BADA8974A10C4BD62CC921D13E43B18_BEB37ABADF39714871232B4792417E04"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\6BADA8974A10C4BD62CC921D13E43B18_C9FB72B5AE80778A08024D8B0FDECC6F"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\6BADA8974A10C4BD62CC921D13E43B18_D9817BD5013875AD517DA73475345203"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\7423F88C7F265F0DEFC08EA88C3BDE45_D975BBA8033175C8D112023D8A7A8AD6"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\74FBF93595CFC8459196065CE54AD928"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\75CA58072B9926F763A91F0CC2798706_93E4B2BA79A897B3100CCB27F2D3BF4F"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\769F85394FB15C375FF89A7488274D5B_50BE819619037DE2F687F0734B2F8FE0"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\769F85394FB15C375FF89A7488274D5B_9AF866E9A3F688C4B48F5E4E4F65203A"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\77EC63BDA74BD0D0E0426DC8F8008506"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\80237EE4964FC9C409AAF55BF996A292_E503B048B745DFA14B81FCFC68D6DECE"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\8828F39C7C0CE9A14B25C7EB321181BA_3DF94EB797096674F7793A562A778C5F"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\8890A77645B73478F5B1DED18ACBF795_C090A8C88B266C6FF99A97210E92B44D"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\8890A77645B73478F5B1DED18ACBF795_E1EDEF0C21AE75D448F7327475DF4C9E"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\9A135C9A622CC48C31B0F0BA6BFE3211_52576D91E0C5F27DE4AA481EB3BDE56C"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\9F08575E2099C04869F34A6342C1C728_1A7DCE96D15F62E14DE0281317DB6528"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\9FF67FB3141440EED32363089565AE60_9EDB434A329AE2A53B836BAFCA088F92"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\A153659244D4657E2973A1765102781B_03018739265A2746E5B28C43D3C84AD5"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\AF3BA1CDD96BBC740C9CE3754F348BED_3088340646E0C95720E43FF6BD5A298D"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\AF3BA1CDD96BBC740C9CE3754F348BED_6BCA21C6072E9518D1B61A290296DA89"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\AF3BA1CDD96BBC740C9CE3754F348BED_809B72A3A2D824ABDE18C57120CEAE82"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\B039FEA45CB4CC4BBACFC013C7C55604_4BB72A60CF9C652B353353202101C0E4"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\B2FAF7692FD9FFBD64EDE317E42334BA_2DBE917624E9880FE0C7C5570D56E691"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\B2FAF7692FD9FFBD64EDE317E42334BA_D7393C8F62BDE4D4CB606228BC7A711E"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\B398B80134F72209547439DB21AB308D_5FDD03068CBBD8A96F3AB9595BA10093"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\B398B80134F72209547439DB21AB308D_9487BC0D4381A7CDEB9A8CC43F66D27C"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\B398B80134F72209547439DB21AB308D_CCF564BE5A3C924B17DDEBDEB5236E12"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\B66240B0F6C84BD4857ABA60CF5CE4A0_5043E0F5DF723415C9EECC201C838A62"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\BAD725C80F9E10846F35D039A996E4A8_88B6AE015495C1ECC395D19C1DD02894"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\BAEBE581FCB73249406FC21094EA252E_BC0CE803EF41A748738619ED7838EEFC"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\BCE214392FEC9DFCC43D67BFAB4D6C8D"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\BE8B021F9E811DFC8C8A28572A17C05A_DC6EEE7133A2383A98D701362A553500"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\C14EF41B12D2E3FC98A6E6C6AAEDB98F"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\C46E7B0F942663A1EDC8D9D6D7869173_6043FC604A395E1485AF7AC16D16B7CE"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\CA4458E7366E94A3C3A9C1FE548B6D21_82F29F3EF954016E2EAA30E22D51F9AE"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\CA4458E7366E94A3C3A9C1FE548B6D21_E3E8071A1C20C155909CE13A3ED7AA80"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\CC197601BE0898B7B0FCC91FA15D8A69_0C57167C464797F7BC04ABE7E7FE1045"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\CC197601BE0898B7B0FCC91FA15D8A69_1367D6CAC3B6E75E25E2E7E3E2CC25AA"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\CC197601BE0898B7B0FCC91FA15D8A69_2B97314CE5943848C0DFBEA5CCA10011"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\CC197601BE0898B7B0FCC91FA15D8A69_5AEAAF5F184615573AAB34B898B32E58"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\CC197601BE0898B7B0FCC91FA15D8A69_758786208F1CEB4AAFBDCB3FA4A59754"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\CC197601BE0898B7B0FCC91FA15D8A69_81566544DFBE5400FD86C38E8E987BF4"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\CC197601BE0898B7B0FCC91FA15D8A69_837A0010DA5A648BE322B702015A9E91"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\CC197601BE0898B7B0FCC91FA15D8A69_8EAD27B819DF8B4C5C4FF19A4C07EA80"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\CC197601BE0898B7B0FCC91FA15D8A69_982D5E192D42C6345564548338F5DE54"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\CC197601BE0898B7B0FCC91FA15D8A69_BF2C61084B800115ADEB197CBA1F1AC8"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\CC197601BE0898B7B0FCC91FA15D8A69_FC361BBD46D38B8D53C8F7064E1947CE"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\CFE86DBBE02D859DC92F1E17E0574EE8_46766FC45507C0B9E264E4C18BC7288B"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\D84E548583BE1EE7DB5A935821009D26_5B98B6CD6E69202676965CF5B0E2A7A7"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\DA3B6E45325D5FFF28CF6BAD6065C907_BB48CA9838349E20FCB601A27952B68B"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\E0F5C59F9FA661F6F4C50B87FEF3A15A"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\E49827401028F7A0F97B5576C77A26CB_7CE95D8DCA26FE957E7BD7D76F353B08"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\EA618097E393409AFA316F0F87E2C202_BEF5BD13CF5F13F6FF3D15BBADC93CE5"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\ED4BB5A4FB07498CF46CB30D073D2D5F"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\EDC238BFF48A31D55A97E1E93892934B_C20E0DA2D0F89FE526E1490F4A2EE5AB"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\EDC238BFF48A31D55A97E1E93892934B_C31B2498754E340573F1336DE607D619"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\EE44ECA143B76F2B9F2A5AA75B5D1EC6_847118BE2683F0C241D1D702F3A3F5F9"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\FB0D848F74F70BB2EAA93746D24D9749"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\FC5A820A001B41D68902E051F36A5282_27210AE28EDAA32FC1F9792B539700BA"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\FC5A820A001B41D68902E051F36A5282_30F8F8C0684E9B26C5B7ECC90E452430"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\FC5A820A001B41D68902E051F36A5282_666C3DBCA853F752E4690AB5A4186625"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\FC5A820A001B41D68902E051F36A5282_BE00DFD81F72ED1F2B653BB1FE4E0569"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content\\FCDCF10A0D23347E9DFEEC8F8381DE71"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\0177A2B8C3D6561744552D69E6BD54B0_5CE748556F479AAF2B2F68B8C4FFC921"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\0255CEC2C51D081EFF40366512890989_030671A634A8767F1A3BDBEF73264BD6"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\07CEF2F654E3ED6050FFC9B6EB844250_27F2F3EAE5ACF629E280F218628D1935"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\07CEF2F654E3ED6050FFC9B6EB844250_3431D4C539FB2CFCB781821E9902850D"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\089915B119001793D7BF4EE252078087"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\0972B7C417F696E06E186AEB26286F01_04451AA00A576F21A374E740D0AF7FCE"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\0972B7C417F696E06E186AEB26286F01_04EE11A998985CD7A51904A574822082"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\16452181C5FFFED5EC9E5598AF62236B"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\1E11E75149C17A93653DA7DC0B8CF53F_23C03C7F20259C89EC80B04BB121BB9B"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\1E11E75149C17A93653DA7DC0B8CF53F_81A542ACDA3B2CCD7E4BD57E47A4E768"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\285248A5750721A9ACC886EF3622CE11_B581B398CF568C2971AE569910906F5B"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\2A7611428D62805A3E4E5BC4103D82E4_E16F3AF852C0CB92002C8B8BAE928280"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\30D802E0E248FEE17AAF4A62594CC75A"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\31A26C5EC85E51FC61BCE8F2051D94F1"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\34DA60AA966CD9270C5362E6AEF824CF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\35DDEDF268117918D1D277A171D8DF7B_038EFFCE7B3AA51EA9EC061CB0C95C9B"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\35DDEDF268117918D1D277A171D8DF7B_C99BC807C0805A191BDE7866F58BB043"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\35DDEDF268117918D1D277A171D8DF7B_EE6F1EAC22DA711DE5B1954547F69324"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\35DDEDF268117918D1D277A171D8DF7B_F2203D7789A46E93B87123736CC6223B"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\35DDEDF268117918D1D277A171D8DF7B_F9E059880B3A4FFC00A58C6C3FA2A764"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\37570AF16029C559A6224EE4AF54691D"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\3781B4A3713292956206932165FA4132_29912A7EA9EDB60BB42BD5D9643E27BB"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\42B9A473B4DAF01285A36B4D3C7B1662_178C086B699FD6C56B804AF3EF759CB5"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\4344B8AF97AF3A423D9EE52899963CDE_AAD1066B0E377EEF818C4BB9002BCCAF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\5080DC7A65DB6A5960ECD874088F3328_862BA1770B2FEE013603D2FF9ABEAFDA"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\572BF21E454637C9F000BE1AF9B1E1A9"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\57C8EDB95DF3F0AD4EE2DC2B8CFD4157"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\5887976EDAA817EEF5159B09F6FCD000_2B9B9A7DE20F15925163FFD6C1660289"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\5887976EDAA817EEF5159B09F6FCD000_93E6F202CE64F2F73CAE285193BAD4B2"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\5CE23102DABC2A5BD21D8403BA46FB72"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\64DCC9872C5635B1B7891B30665E0558_5552C20A2631357820903FD38A8C0F9F"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\66AE3BFDF94A732B262342AD2154B86E_35FC16AB69CB46C841BF8F58B66D283F"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\66AE3BFDF94A732B262342AD2154B86E_40B65293A90162EEC6A90E6A9E071DF4"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\66AE3BFDF94A732B262342AD2154B86E_A89204531497D3661ACEDB6FB93ECB4C"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\6AF4EE75E3A4ABA658C0087EB9A0BB5B_569A6A04C8591541F7E990B56F9661DA"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\6BADA8974A10C4BD62CC921D13E43B18_1DC6D7385EA816C957BA2B715AC5C442"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\6BADA8974A10C4BD62CC921D13E43B18_28DEA62A0AE77228DD387E155AD0BA27"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\6BADA8974A10C4BD62CC921D13E43B18_711ED44619924BA6DC33E69F97E7FF63"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\6BADA8974A10C4BD62CC921D13E43B18_88614FFAD35D353421B8A7E1FE18FCE4"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\6BADA8974A10C4BD62CC921D13E43B18_AD319D6DA1A11BC83AC8B4E4D3638231"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\6BADA8974A10C4BD62CC921D13E43B18_BEB37ABADF39714871232B4792417E04"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\6BADA8974A10C4BD62CC921D13E43B18_C9FB72B5AE80778A08024D8B0FDECC6F"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\6BADA8974A10C4BD62CC921D13E43B18_D9817BD5013875AD517DA73475345203"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\7423F88C7F265F0DEFC08EA88C3BDE45_D975BBA8033175C8D112023D8A7A8AD6"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\74FBF93595CFC8459196065CE54AD928"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\75CA58072B9926F763A91F0CC2798706_93E4B2BA79A897B3100CCB27F2D3BF4F"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\769F85394FB15C375FF89A7488274D5B_50BE819619037DE2F687F0734B2F8FE0"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\769F85394FB15C375FF89A7488274D5B_9AF866E9A3F688C4B48F5E4E4F65203A"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\77EC63BDA74BD0D0E0426DC8F8008506"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\80237EE4964FC9C409AAF55BF996A292_E503B048B745DFA14B81FCFC68D6DECE"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\8828F39C7C0CE9A14B25C7EB321181BA_3DF94EB797096674F7793A562A778C5F"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\8890A77645B73478F5B1DED18ACBF795_C090A8C88B266C6FF99A97210E92B44D"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\8890A77645B73478F5B1DED18ACBF795_E1EDEF0C21AE75D448F7327475DF4C9E"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\9A135C9A622CC48C31B0F0BA6BFE3211_52576D91E0C5F27DE4AA481EB3BDE56C"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\9F08575E2099C04869F34A6342C1C728_1A7DCE96D15F62E14DE0281317DB6528"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\9FF67FB3141440EED32363089565AE60_9EDB434A329AE2A53B836BAFCA088F92"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\A153659244D4657E2973A1765102781B_03018739265A2746E5B28C43D3C84AD5"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\AF3BA1CDD96BBC740C9CE3754F348BED_3088340646E0C95720E43FF6BD5A298D"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\AF3BA1CDD96BBC740C9CE3754F348BED_6BCA21C6072E9518D1B61A290296DA89"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\AF3BA1CDD96BBC740C9CE3754F348BED_809B72A3A2D824ABDE18C57120CEAE82"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\B039FEA45CB4CC4BBACFC013C7C55604_4BB72A60CF9C652B353353202101C0E4"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\B2FAF7692FD9FFBD64EDE317E42334BA_2DBE917624E9880FE0C7C5570D56E691"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\B2FAF7692FD9FFBD64EDE317E42334BA_D7393C8F62BDE4D4CB606228BC7A711E"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\B398B80134F72209547439DB21AB308D_5FDD03068CBBD8A96F3AB9595BA10093"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\B398B80134F72209547439DB21AB308D_9487BC0D4381A7CDEB9A8CC43F66D27C"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\B398B80134F72209547439DB21AB308D_CCF564BE5A3C924B17DDEBDEB5236E12"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\B66240B0F6C84BD4857ABA60CF5CE4A0_5043E0F5DF723415C9EECC201C838A62"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\BAD725C80F9E10846F35D039A996E4A8_88B6AE015495C1ECC395D19C1DD02894"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\BAEBE581FCB73249406FC21094EA252E_BC0CE803EF41A748738619ED7838EEFC"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\BCE214392FEC9DFCC43D67BFAB4D6C8D"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\BE8B021F9E811DFC8C8A28572A17C05A_DC6EEE7133A2383A98D701362A553500"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\C14EF41B12D2E3FC98A6E6C6AAEDB98F"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\C46E7B0F942663A1EDC8D9D6D7869173_6043FC604A395E1485AF7AC16D16B7CE"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\CA4458E7366E94A3C3A9C1FE548B6D21_82F29F3EF954016E2EAA30E22D51F9AE"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\CA4458E7366E94A3C3A9C1FE548B6D21_E3E8071A1C20C155909CE13A3ED7AA80"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\CC197601BE0898B7B0FCC91FA15D8A69_0C57167C464797F7BC04ABE7E7FE1045"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\CC197601BE0898B7B0FCC91FA15D8A69_1367D6CAC3B6E75E25E2E7E3E2CC25AA"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\CC197601BE0898B7B0FCC91FA15D8A69_2B97314CE5943848C0DFBEA5CCA10011"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\CC197601BE0898B7B0FCC91FA15D8A69_5AEAAF5F184615573AAB34B898B32E58"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\CC197601BE0898B7B0FCC91FA15D8A69_758786208F1CEB4AAFBDCB3FA4A59754"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\CC197601BE0898B7B0FCC91FA15D8A69_81566544DFBE5400FD86C38E8E987BF4"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\CC197601BE0898B7B0FCC91FA15D8A69_837A0010DA5A648BE322B702015A9E91"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\CC197601BE0898B7B0FCC91FA15D8A69_8EAD27B819DF8B4C5C4FF19A4C07EA80"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\CC197601BE0898B7B0FCC91FA15D8A69_982D5E192D42C6345564548338F5DE54"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\CC197601BE0898B7B0FCC91FA15D8A69_BF2C61084B800115ADEB197CBA1F1AC8"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\CC197601BE0898B7B0FCC91FA15D8A69_FC361BBD46D38B8D53C8F7064E1947CE"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\CFE86DBBE02D859DC92F1E17E0574EE8_46766FC45507C0B9E264E4C18BC7288B"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\D84E548583BE1EE7DB5A935821009D26_5B98B6CD6E69202676965CF5B0E2A7A7"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\DA3B6E45325D5FFF28CF6BAD6065C907_BB48CA9838349E20FCB601A27952B68B"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\E0F5C59F9FA661F6F4C50B87FEF3A15A"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\E49827401028F7A0F97B5576C77A26CB_7CE95D8DCA26FE957E7BD7D76F353B08"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\EA618097E393409AFA316F0F87E2C202_BEF5BD13CF5F13F6FF3D15BBADC93CE5"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\ED4BB5A4FB07498CF46CB30D073D2D5F"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\EDC238BFF48A31D55A97E1E93892934B_C20E0DA2D0F89FE526E1490F4A2EE5AB"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\EDC238BFF48A31D55A97E1E93892934B_C31B2498754E340573F1336DE607D619"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\EE44ECA143B76F2B9F2A5AA75B5D1EC6_847118BE2683F0C241D1D702F3A3F5F9"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\FB0D848F74F70BB2EAA93746D24D9749"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\FC5A820A001B41D68902E051F36A5282_27210AE28EDAA32FC1F9792B539700BA"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\FC5A820A001B41D68902E051F36A5282_30F8F8C0684E9B26C5B7ECC90E452430"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\FC5A820A001B41D68902E051F36A5282_666C3DBCA853F752E4690AB5A4186625"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\FC5A820A001B41D68902E051F36A5282_BE00DFD81F72ED1F2B653BB1FE4E0569"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData\\FCDCF10A0D23347E9DFEEC8F8381DE71"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\CloudStore"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Recent\\CustomDestinations\\1057b0110eb2adfd.customDestinations-ms"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Recent\\CustomDestinations\\5d696d521de238c3.customDestinations-ms"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Recent\\CustomDestinations\\75fdacd8330bac18.customDestinations-ms"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Recent\\CustomDestinations\\7e4dca80246863e3.customDestinations-ms"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Recent\\CustomDestinations\\9d1f905ce5044aee.customDestinations-ms"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Recent\\CustomDestinations\\d356105fac5527ef.customDestinations-ms"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Recent\\CustomDestinations\\f01b4d95cf55d32a.customDestinations-ms"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Recent\\CustomDestinations\\f18460fded109990.customDestinations-ms"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\%username%\\Desktop\\cleaner_protected.exe"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Users\\Public\\Libraries\\RecordedTV.library-ms"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\1394.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\acpi.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\acpidev.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\acpipagr.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\acpipmi.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\acpitime.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\amdgpio2.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\amdi2c.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\arcsas.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\audioendpoint.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\basicdisplay.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\basicrender.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\bcmfn2.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\bth.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\bthleenum.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\buttonconverter.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\cdrom.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\ChargeArbitration.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\cht4vx64.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\circlass.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\cmbatt.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\compositebus.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\cpu.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\c_swcomponent.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\c_swdevice.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\disk.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\display.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\ehstortcgdrv.PNF"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF\\en-US"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\errdev.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\fdc.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\flpydisk.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\genericusbfn.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\hal.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\hdaudbus.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\hdaudio.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\hidbatt.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\hidbth.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\hiddigi.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\hidi2c.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\hidinterrupt.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\hidir.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\hidspi_km.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\hidvhf.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\iagpio.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\iai2c.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\iaLPSS2i_GPIO2_BXT_P.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\iaLPSS2i_GPIO2_CNL.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\iaLPSS2i_GPIO2_GLK.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\iaLPSS2i_GPIO2_SKL.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\iaLPSS2i_I2C_BXT_P.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\iaLPSS2i_I2C_CNL.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\iaLPSS2i_I2C_GLK.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\iaLPSS2i_I2C_SKL.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\ialpssi_gpio.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\ialpssi_i2c.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\iastorav.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\iastorv.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\input.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\intelpep.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\intelpmax.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\iscsi.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\kdnic.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\ks.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\ksfilter.PNF"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF\\LSM\\0000"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\LSM\\0000\\lagcounterdef.ini"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\LSM\\lagcounterdef.h"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\machine.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\mausbhost.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\mdmbtmdm.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\memory.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\microsoft_bluetooth_a2dp.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\microsoft_bluetooth_avrcptransport.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\microsoft_bluetooth_hfp.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\mlx4_bus.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\monitor.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\msgpiowin32.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\mshdc.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\msmouse.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\msports.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\mssmbios.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\mtconfig.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\ndisvirtualbus.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\netbvbda.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\netevbda.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\npsvctrig.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\nvdimm.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem0.inf"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem0.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem1.inf"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem1.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem2.inf"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem2.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem3.inf"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem3.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem4.inf"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem4.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem5.inf"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem5.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem6.inf"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem6.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem7.inf"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem7.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem8.inf"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem8.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\oem9.inf"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\pci.PNF"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF\\PERFLIB"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF\\PERFLIB\\0000"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\PERFLIB\\0000\\perfc.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\PERFLIB\\0000\\perfd.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\PERFLIB\\0000\\perfh.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\PERFLIB\\0000\\perfi.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF\\PERFLIB\\0407"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\PERFLIB\\0407\\perfc.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\PERFLIB\\0407\\perfd.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\PERFLIB\\0407\\perfh.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\PERFLIB\\0407\\perfi.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF\\PERFLIB\\0409"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\PERFLIB\\0409\\perfc.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\PERFLIB\\0409\\perfd.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\PERFLIB\\0409\\perfh.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\PERFLIB\\0409\\perfi.dat"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\pmem.PNF"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF\\PNRPSvc"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF\\PNRPSvc\\0000"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF\\PNRPSvc\\0407"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF\\PNRPSvc\\0409"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\printqueue.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\rdpbus.PNF"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF\\RemoteAccess\\0407"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\RemoteAccess\\0407\\rasctrs.ini"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\rhproxy.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\rt640x64.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\sbp2.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\scmbus.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\SDFRd.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\sdstor.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\setupapi.dev.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\setupapi.offline.20190318_215229.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\setupapi.setup.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\spaceport.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\stornvme.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\storufs.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\swenum.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\tdibth.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\termmou.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\tpm.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\tsgenericusbdriver.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\tsusbhub.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\uaspstor.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\UcmUcsiAcpiClient.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\uefi.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\ufxchipidea.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\ufxsynopsys.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\umbus.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\umpass.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\urschipidea.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\urssynopsys.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\usb.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\usbaudio2.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\usbcir.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\usbhub3.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\usbport.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\usbprint.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\usbser.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\usbstor.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\usbxhci.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\vdrvroot.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\virtdisk.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\volmgr.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\volsnap.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\volume.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\vstxraid.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\wdmaudio.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\wdma_usb.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\wgencounter.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\WindowsTrustedRTProxy.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\winusb.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\wmiacpi.PNF"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF\\WmiApRpl"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\INF\\WmiApRpl\\0009"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\WmiApRpl\\0009\\WmiApRpl.ini"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\WmiApRpl\\WmiApRpl.h"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\WmiApRpl\\WmiApRpl.ini"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\wstorflt.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\wvid.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\wvmbus.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\wvmgid.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\wvpci.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\xboxgip.PNF"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\INF\\xinputhid.PNF"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Logs\\CBS"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\CBS\\CBS.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\DirectX.log"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Logs\\DISM"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\DISM\\dism.log"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Logs\\DPX"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\DPX\\setupact.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\DPX\\setuperr.log"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Logs\\HomeGroup"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Logs\\MeasuredBoot"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Logs\\MoSetup"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\MoSetup\\ActionList.xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\MoSetup\\DeviceInventory.xml"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\MoSetup\\UpdateAgent.log"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Logs\\SettingSync"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\Logs\\Telephony"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\WindowsUpdate\\WindowsUpdate.20201026.195346.225.138.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\WindowsUpdate\\WindowsUpdate.20201026.195346.225.139.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\WindowsUpdate\\WindowsUpdate.20201026.195346.225.140.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\WindowsUpdate\\WindowsUpdate.20201026.195346.225.141.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\WindowsUpdate\\WindowsUpdate.20201026.195346.225.142.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\WindowsUpdate\\WindowsUpdate.20201026.195346.225.143.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\WindowsUpdate\\WindowsUpdate.20201026.195346.225.144.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\WindowsUpdate\\WindowsUpdate.20201026.195346.225.145.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\WindowsUpdate\\WindowsUpdate.20201026.195346.225.146.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\WindowsUpdate\\WindowsUpdate.20201026.195346.225.147.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\WindowsUpdate\\WindowsUpdate.20201026.195346.225.148.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\WindowsUpdate\\WindowsUpdate.20201026.205420.878.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\WindowsUpdate\\WindowsUpdate.20201026.205420.878.2.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\WindowsUpdate\\WindowsUpdate.20201026.212954.068.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\WindowsUpdate\\WindowsUpdate.20201026.222255.215.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\WindowsUpdate\\WindowsUpdate.20201027.114145.033.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\Logs\\WindowsUpdate\\WindowsUpdate.20750114.052832.913.1.etl"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\SoftwareDistribution\\DataStore\\Logs\\edb.chk"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\SoftwareDistribution\\DataStore\\Logs\\edb00030.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\SoftwareDistribution\\DataStore\\Logs\\edb00031.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\SoftwareDistribution\\DataStore\\Logs\\edb00032.log"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\SoftwareDistribution\\DataStore\\Logs\\edbres00001.jrs"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\SoftwareDistribution\\DataStore\\Logs\\edbres00002.jrs"));
	system(XorString("@del /s /f /a:h /a:a /q %systemdrive%\\Windows\\SoftwareDistribution\\DataStore\\Logs\\edbtmp.log"));
	system(XorString("rmdir /s /q	F:\\$RECYCLE.bin\\S-1-5-18"));
	system(XorString("rmdir /s /q	F:\\$RECYCLE.bin\\S-1-5-21-2891436483-3527068592-4159525493-1001"));
	system(XorString("@del /s /f /a:h /a:a /q 	F:\\$RECYCLE.bin\\S-1-5-21-2891436483-3527068592-4159525493-1001\\desktop.ini"));
	system(XorString("del C:\\Windows\\TEMP\\206F3FDC-B1A8-4FD6-BDB8-6CFE76122873"));
	system(XorString("del C:\\ProgramData\\Microsoft\\Windows\\WER\\Temp\\WER95DF.tmp.mdmp"));
	system(XorString("del C:\\Windows.old\\Users\\All Users\\Microsoft\\Windows\\WER\\Temp\\WER95DF.tmp.mdmp"));
	system(XorString("del C:\\Users\\All Users\\Microsoft\\Windows\\WER\\Temp\\WER95DF.tmp.mdmp"));
	system(XorString("del C:\\Windows\\CbsTemp\\30780525_1668355464"));
	system(XorString("del C:\\Windows\\TEMP\\6E04EF32-0387-48B1-B812-AC2BBA90A8D0"));
	system(XorString("del C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cookies"));
	system(XorString("del C:\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation\\GfeSDK\\FORTNI~1.LOG"));
	system(XorString("del C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\V0100024.log"));
	system(XorString("del C:\\Users\\All Users\\Microsoft\\Windows\\WER\\Temp\\WER5CC2.tmp.xml"));
	system(XorString("del C:\\Windows.old\\Users\\All Users\\Microsoft\\Windows\\WER\\Temp\\WER6D21.tmp.WERInternalMetadata.xml"));
	system(XorString("del C:\\Users\\%username%\\AppData\\Local\\Temp\\ecache.bin"));
	system(XorString("del C:\\Users\\%username%\\AppData\\Local\\CrashDumps\\BACKGR~2.DMP"));
	system(XorString("del C:\\Windows\\prefetch\\ATTRIB.EXE-58A07CAF.pf"));
	system(XorString("del C:\\Windows\\prefetch\\AgRobust.db"));
	system(XorString("del C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
	system(XorString("del C:\\Windows\\prefetch\\CEPHTMLENGINE.EXE-E15640BA.pf"));
	system(XorString("del C:\\Windows\\prefetch\\CMD.EXE-0BD30981.pf"));
	system(XorString("del C:\\Windows\\prefetch\\CLIPUP.EXE-4C5C7B66.pf"));
	system(XorString("del C:\\Windows\\prefetch\\D3D9TEST.EXE-1B86F3FC.pf"));
	system(XorString("del C:\\Windows\\prefetch\\GET-GRAPHICS-OFFSETS64.EXE-2BCB2EA4.pf"));
	system(XorString("del C:\\Windows\\prefetch\\GET-GRAPHICS-OFFSETS32.EXE-D4C865E3.pf"));
	system(XorString("del C:\\Windows\\prefetch\\OBS-FFMPEG-MUX.EXE-1C01271A.pf"));
	system(XorString("del C:\\Windows\\prefetch\\OBS-FFMPEG-MUX.EXE-1C01271A.pf"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\UnrealEngine"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Service Worker\\CacheStorage"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\GPUCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Config\\WindowsClient"));
	system(XorString("rmdir /s /q %systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\LMS"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Cloud"));
	system(XorString("rmdir /s /q %systemdrive%\\Recovery\\ntuser.sys"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\Public\\Libraries\\collection.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\MSOCache\\{71230000-00E2-0000-1000-00000000}\\Setup.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\NetworksCache"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\Rules"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History\\History.IE5"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Speech Graphics\\Carnival"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SysWOW64\\config\\systemprofile\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Content.IE5"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SysWOW64\\config\\systemprofile\\AppData\\Local\\Microsoft\\Windows\\INetCookies"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SysWOW64\\config\\systemprofile\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SysWOW64\\config\\systemprofile\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SoftwareDistribution\\DataStore\\Logs"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\TempState"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Roaming\\EasyAntiCheat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\GPUCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.XboxGamingOverlay_8wekyb3d8bbwe\\LocalCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Program Files (x86)\\Common Files\\BattlEye"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\OneDrive\\settings\\Personal"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Cloud\\9f92640e32874a76bb46156d11ae5fcf\\"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\AMD\\PPC\\apprecord.csv\\"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\AppData\\Indexed DB"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Diagnosis\\EventStore.db-wal"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Diagnosis\\DownloadedSettings"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Diagnosis\\EventStore.db-wal"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\AW1C2HQS\\"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp\\VSRemoteControl\\efe1e93f8bdd406aa6f0a42171c129a4"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp\\VSRemoteControl\\282fb338dbd04a7fbe725354ebc71bdf"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp\\VSRemoteControl\\efe1e93f8bdd406aa6f0a42171c129a4"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\System32\\LogFiles\\WMI\\RtBackup"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Cloud\\9f92640e32874a76bb46156d11ae5fcf\\"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\AMD\\PPC\\apprecord.csv\\"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.Cortana_cw5n1h2txyewy\\AppData\\Indexed DB"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Diagnosis\\EventStore.db-wal"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Diagnosis\\DownloadedSettings"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Diagnosis\\EventStore.db-wal"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\AW1C2HQS\\"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp\\VSRemoteControl\\efe1e93f8bdd406aa6f0a42171c129a4"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp\\VSRemoteControl\\282fb338dbd04a7fbe725354ebc71bdf"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Temp\\VSRemoteControl\\efe1e93f8bdd406aa6f0a42171c129a4"));
	system(XorString("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\FortniteGame"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\UnrealEngine"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\Logs"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\GPUCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Config\\WindowsClient"));
	system(XorString("rmdir /s /q %systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\LMS"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\FortniteGame\\Saved\\Cloud"));
	system(XorString("rmdir /s /q %systemdrive%\\Recovery\\ntuser.sys"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\Public\\Libraries\\collection.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\MSOCache\\{71230000-00E2-0000-1000-00000000}\\Setup.dat"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\NetworksCache"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\DataMart\\PaidWiFi\\Rules"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\History\\History.IE5"));
	system(XorString("rmdir /s /q %systemdrive%\\Users\\%username%\\AppData\\Local\\Speech Graphics\\Carnival"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SysWOW64\\config\\systemprofile\\AppData\\Local\\Microsoft\\Windows\\INetCache\\Content.IE5"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SysWOW64\\config\\systemprofile\\AppData\\Local\\Microsoft\\Windows\\INetCookies"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SysWOW64\\config\\systemprofile\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\MetaData"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SysWOW64\\config\\systemprofile\\AppData\\LocalLow\\Microsoft\\CryptnetUrlCache\\Content"));
	system(XorString("rmdir /s /q %systemdrive%\\ProgramData\\Microsoft\\Windows\\WER\\Temp"));
	system(XorString("rmdir /s /q %systemdrive%\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\Binaries\\Win64\\Shared Files"));
	system(XorString("rmdir /s /q %systemdrive%\\Windows\\SoftwareDistribution\\DataStore\\Logs"));
	system(XorString("del C:\\Windows\\TEMP\\206F3FDC-B1A8-4FD6-BDB8-6CFE76122873"));
	system(XorString("del C:\\ProgramData\\Microsoft\\Windows\\WER\\Temp\\WER95DF.tmp.mdmp"));
	system(XorString("del C:\\Windows.old\\Users\\All Users\\Microsoft\\Windows\\WER\\Temp\\WER95DF.tmp.mdmp"));
	system(XorString("del C:\\Users\\All Users\\Microsoft\\Windows\\WER\\Temp\\WER95DF.tmp.mdmp"));
	system(XorString("del C:\\Windows\\CbsTemp\\30780525_1668355464"));
	system(XorString("del C:\\Windows\\TEMP\\6E04EF32-0387-48B1-B812-AC2BBA90A8D0"));
	system(XorString("del C:\\Users\\%username%\\AppData\\Local\\EpicGamesLauncher\\Saved\\webcache\\Cookies"));
	system(XorString("del C:\\Users\\%username%\\AppData\\Local\\NVIDIA Corporation\\GfeSDK\\FORTNI~1.LOG"));
	system(XorString("del C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\siphon-1024x512-4cc0ff3407053325e353c4aea55fb30316e6ecf6.jpg"));
	system(XorString("del C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\Fortnite%2Ffortnite-game%2Ftournaments%2F11BR_Arena_ModeTiles_Squad_ModeTile-1024x512-c543a187ce733be5ee9f6d17bfb74fb1f2e15f4a.jpg"));
	system(XorString("del C:\\Program Files\\Epic Games\\Fortnite\\FortniteGame\\PersistentDownloadDir\\CMS\\Files\\9A71EB4A90946A4A0DCD9B7D82F48C55B49D0880\\Fortnite%2Ffortnite-game%2Ftournaments%2F11BR_Arena_ModeTiles_Solo_ModeTile-1024x512-6cee09d7bcf82ce3f32ca7c77ca04948121ce617.jpg"));
	system(XorString("del C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache\\V0100024.log"));
	system(XorString("del C:\\Users\\All Users\\Microsoft\\Windows\\WER\\Temp\\WER5CC2.tmp.xml"));
	system(XorString("del C:\\Windows.old\\Users\\All Users\\Microsoft\\Windows\\WER\\Temp\\WER6D21.tmp.WERInternalMetadata.xml"));
	system(XorString("del C:\\Users\\%username%\\AppData\\Local\\Temp\\ecache.bin"));
	system(XorString("del C:\\Users\\%username%\\AppData\\Local\\CrashDumps\\BACKGR~2.DMP"));
	system(XorString("del C:\\Windows\\prefetch\\ATTRIB.EXE-58A07CAF.pf"));
	system(XorString("del C:\\Windows\\prefetch\\AgRobust.db"));
	system(XorString("del C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Feeds Cache"));
	system(XorString("del C:\\Windows\\prefetch\\CEPHTMLENGINE.EXE-E15640BA.pf"));
	system(XorString("del C:\\Windows\\prefetch\\CMD.EXE-0BD30981.pf"));
	system(XorString("del C:\\Windows\\prefetch\\CLIPUP.EXE-4C5C7B66.pf"));
	system(XorString("del C:\\Windows\\prefetch\\D3D9TEST.EXE-1B86F3FC.pf"));
	system(XorString("del C:\\Windows\\prefetch\\GET-GRAPHICS-OFFSETS64.EXE-2BCB2EA4.pf"));
	system(XorString("del C:\\Windows\\prefetch\\GET-GRAPHICS-OFFSETS32.EXE-D4C865E3.pf"));
	system(XorString("del C:\\Windows\\prefetch\\OBS-FFMPEG-MUX.EXE-1C01271A.pf"));
	system(XorString("del C:\\Windows\\prefetch\\OBS-FFMPEG-MUX.EXE-1C01271A.pf"));
	system(XorString("vssadmin delete shadows /All /Quiet"));
	char drive = L'C';
	CHAR journal[MAX_PATH] = { 0 };
	cleaner_for_epic_launcher();
	cleaner_for_network();
	nettoyage_c();
	nettoyage_d();
	nettoyage_e();
	nettoyage_f();
	system(XorString("cls"));
}