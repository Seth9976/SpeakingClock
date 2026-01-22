// 函数: sub_433c5c
// 地址: 0x433c5c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (data_4b1b90 != 0)
    return data_4b1b90(arg1)

if (data_4b1b88 == 0)
    data_4b1b88 = LoadLibraryA(sub_433cc6+2)

if (data_4b1b88 u> 0)
    data_4b1b90 = GetProcAddress(data_4b1b88, sub_433cc6+0xe)
    
    if (data_4b1b90 != 0)
        return data_4b1b90(arg1)

return 0x80004001
