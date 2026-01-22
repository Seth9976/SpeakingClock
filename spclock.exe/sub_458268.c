// 函数: sub_458268
// 地址: 0x458268
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_d = *arg4
void var_9
var_9.d = arg4[1]
char var_e = 0

if (*(arg3 + 0x142) != 0)
    arg3[0x51]
    arg3[0x50](&var_e, &var_d, arg1)

if (var_e == 0)
    arg3[0x26] += arg1
    
    while (true)
        int32_t eax_13
        int32_t edx_4
        edx_4:eax_13 = sx.q(arg3[0x26])
        
        if ((eax_13 ^ edx_4) - edx_4 s< 0x78)
            break
        
        int32_t ebx
        ebx.b = arg3[0x26] s< 0
        int32_t eax_2
        int32_t edx_1
        edx_1:eax_2 = sx.q(arg3[0x26])
        arg3[0x26] = (eax_2 ^ edx_1) - edx_1 - 0x78
        void* esi_2
        
        if (ebx.b == 0)
            esi_2.w = 0xffe0
            var_e = sub_403e64(arg3, esi_2, zx.d(arg2), &var_d)
        else
            if (arg3[0x26] != 0)
                arg3[0x26] = neg.d(arg3[0x26])
            
            esi_2.w = 0xffe1
            var_e = sub_403e64(arg3, esi_2, zx.d(arg2), &var_d)

return zx.d(var_e)
