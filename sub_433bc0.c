// 函数: sub_433bc0
// 地址: 0x433bc0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (data_4b1b8c != 0)
    return data_4b1b8c(arg1, arg2)

if (data_4b1b88 == 0)
    data_4b1b88 = LoadLibraryA("DWMAPI.DLL")

if (data_4b1b88 u> 0)
    data_4b1b8c = GetProcAddress(data_4b1b88, "DwmExtendFrameIntoClientArea")
    
    if (data_4b1b8c != 0)
        return data_4b1b8c(arg1, arg2)

return 0x80004001
