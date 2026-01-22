// 函数: sub_40244c
// 地址: 0x40244c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg1 u> 0xffff && (arg1.b & 3) == 0)
    int32_t edx_2 = *(arg2 - 0x1c)
    
    if (edx_2 u> arg1 || edx_2 + *(arg2 - 0x10) u< arg1 + 4)
        *(arg2 - 0x10) = 0
        VirtualQuery(arg1, arg2 - 0x1c, 0x1c)
    
    if (*(arg2 - 0x10) u>= 4 && *(arg2 - 0xc) == 0x1000 && (*(arg2 - 8) & 0xf6) != 0
            && (*(arg2 - 7) & 1) == 0)
        void* result
        result.b = 1
        return result

return 0
