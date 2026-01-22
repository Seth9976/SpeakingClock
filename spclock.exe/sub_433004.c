// 函数: sub_433004
// 地址: 0x433004
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_8 = arg1

if (data_4b1b74 != 0)
    return data_4b1b74(arg3, arg2, arg1, arg9, arg8, arg7, arg6, arg5, arg4)

if (data_4b1b68 u> 0)
    data_4b1b74 = GetProcAddress(data_4b1b68, "DrawThemeTextEx")
    
    if (data_4b1b74 != 0)
        return data_4b1b74(arg3, arg2, arg1, arg9, arg8, arg7, arg6, arg5, arg4)

return 0x80004001
