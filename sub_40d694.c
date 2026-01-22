// 函数: sub_40d694
// 地址: 0x40d694
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

OSVERSIONINFOA versionInformation
versionInformation.dwOSVersionInfoSize = 0x94
BOOL result = GetVersionExA(&versionInformation)

if (result != 0)
    data_4aa7b8 = versionInformation.dwPlatformId
    data_4aa7bc = versionInformation.dwMajorVersion
    data_4aa7c0 = versionInformation.dwMinorVersion
    
    if (data_4aa7b8 != 1)
        data_4aa7c4 = versionInformation.dwBuildNumber
    else
        data_4aa7c4 = zx.d((versionInformation.dwBuildNumber).w)
    
    result = 0x4aa7c8
    var_80
    sub_404df8(0x4aa7c8, &var_80, 0x80)

return result
