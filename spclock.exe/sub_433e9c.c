// 函数: sub_433e9c
// 地址: 0x433e9c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_8 = arg1

if (data_4b1b98 != 0)
    return data_4b1b98(arg3, arg2, arg1, arg4)

data_4b1b94 = GetModuleHandleA("shell32.dll")

if (data_4b1b94 u> 0)
    data_4b1b98 = GetProcAddress(data_4b1b94, "SHCreateItemFromParsingName")
    
    if (data_4b1b98 != 0)
        return data_4b1b98(arg3, arg2, arg1, arg4)

return 0x80004001
