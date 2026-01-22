// 函数: sub_40a6a8
// 地址: 0x40a6a8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

OSVERSIONINFOA versionInformation
versionInformation.dwOSVersionInfoSize = 0x94
BOOL result = GetVersionExA(&versionInformation)

if (result != 0)
    data_4130cc = versionInformation.dwPlatformId
    data_4130d0 = versionInformation.dwMajorVersion
    data_4130d4 = versionInformation.dwMinorVersion
    
    if (data_4130cc != 1)
        data_4130d8 = versionInformation.dwBuildNumber
    else
        data_4130d8 = zx.d((versionInformation.dwBuildNumber).w)
    
    result = 0x4130dc
    var_80
    sub_403c5c(0x4130dc, &var_80, 0x80)

return result
