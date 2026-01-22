// 函数: sub_430bec
// 地址: 0x430bec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1[0xb] == 0)
    sub_430e98(arg1)
    
    if (arg1[0xb] == 0)
        int32_t edx_1
        edx_1.b = 1
        int32_t* eax_1 = sub_42f97c(&data_42f804, edx_1, arg1)
        arg1[0xb] = eax_1
        eax_1[0xb] = arg1
        eax_1[0xa] = *(*arg1 + 0x10)
        eax_1[0xd] = arg1
        eax_1[0xc] = sub_430878

return arg1[0xb]
