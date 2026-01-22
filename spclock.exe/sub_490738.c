// 函数: sub_490738
// 地址: 0x490738
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint16_t ebx_7 = ((((zx.d(*(arg3 + zx.d(arg2))) << 4 ^ zx.d(*(arg3 + zx.d(arg2) + 1))) << 4
    ^ zx.d(*(arg3 + zx.d(arg2) + 2))) * 0x9e5f) u>> 4).w
ebx_7 &= 0xfff
bool var_7 = false
int16_t esi_5 = *(arg6 + (zx.d(ebx_7) << 1))

if (esi_5 != 0xffff && zx.d(arg2) - sx.d(esi_5) s< 0x1000)
    *arg4 = esi_5
    *arg5 = 0
    
    while (*arg5 u< 0x12)
        if (*(arg3 + zx.d(arg2) + zx.d(*arg5)) != *(arg3 + zx.d(*arg4) + zx.d(*arg5)))
            break
        
        if (zx.d(arg2) + zx.d(*arg5) u>= zx.d(arg1))
            break
        
        *arg5 += 1
    
    var_7 = *arg5 u>= 3

*(arg6 + (zx.d(ebx_7) << 1)) = arg2
return zx.d(var_7)
