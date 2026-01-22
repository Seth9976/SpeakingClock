// 函数: sub_48b06c
// 地址: 0x48b06c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

OSVERSIONINFOA versionInformation
versionInformation.dwOSVersionInfoSize = 0x9c
int16_t var_10
int16_t var_e
int16_t var_c
char var_a

if (GetVersionExA(&versionInformation) != 0)
    switch (zx.d(arg1))
        case 0
            return versionInformation.dwMajorVersion
        case 1
            return versionInformation.dwMinorVersion
        case 2
            return versionInformation.dwPlatformId
        case 3
            return versionInformation.dwBuildNumber
        case 4
            return zx.d(var_10)
        case 5
            return zx.d(var_e)
        case 6
            return zx.d(var_c)
        case 7
            return zx.d(var_a)
return 0
