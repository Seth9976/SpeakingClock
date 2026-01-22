// 函数: sub_40adb4
// 地址: 0x40adb4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int16_t ebx = arg1
char var_7 = 0
int32_t eax_2 = sub_40ad78(arg3) & 0x7f

if (arg3 u>= 1 && arg3 u<= 0x270f && arg2 u>= 1 && arg2 u<= 0xc && ebx u>= 1
        && ebx u<= *(eax_2 * 0x18 + &data_4aa7d0 + (zx.d(arg2) << 1) - 2))
    int32_t i_1 = zx.d(arg2) - 1
    
    if (i_1 s> 0)
        int32_t ecx = 1
        int32_t i
        
        do
            ebx += *(eax_2 * 0x18 + &data_4aa7d0 + (ecx << 1) - 2)
            ecx += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t edx_1 = zx.d(arg3) - 1
    
    if (edx_1 s< 0)
        edx_1 += 3
    
    *arg4 = fconvert.d(float.t((zx.d(arg3) - 1) * 0x16d + (edx_1 s>> 2)
        - divs.dp.d(sx.q(zx.d(arg3) - 1), 0x64) + divs.dp.d(sx.q(zx.d(arg3) - 1), 0x190)
        + zx.d(ebx) - 0xa955a))
    var_7 = 1

return zx.d(var_7)
