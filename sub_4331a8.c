// 函数: sub_4331a8
// 地址: 0x4331a8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (data_4b1b80 != 0)
    return data_4b1b80(arg1, arg2, arg3)

if (data_4b1b68 u> 0)
    data_4b1b80 = GetProcAddress(data_4b1b68, "BufferedPaintSetAlpha")
    
    if (data_4b1b80 != 0)
        return data_4b1b80(arg1, arg2, arg3)

return 0x80004001
