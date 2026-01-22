// 函数: sub_42d4fc
// 地址: 0x42d4fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax_2 = **(arg3 + 8)
int32_t ecx_1 = zx.d(*arg2) - eax_2
int32_t ebx_1 = zx.d(arg2[1]) - *(*(arg3 + 8) + 4)
int32_t esi_2 = zx.d(*arg1) - eax_2
int32_t eax_5 = zx.d(arg1[1]) - *(*(arg3 + 8) + 4)
int32_t eax_7
int32_t edx_4
edx_4:eax_7 = sx.q(ecx_1)
int32_t eax_11
int32_t edx_5
edx_5:eax_11 = sx.q(esi_2)

if ((eax_7 ^ edx_4) - edx_4 s<= (eax_11 ^ edx_5) - edx_5 && (ecx_1 s<= 0 || esi_2 s>= ecx_1))
    int32_t eax_15
    int32_t edx_6
    edx_6:eax_15 = sx.q(ebx_1)
    int32_t eax_19
    int32_t edx_7
    edx_7:eax_19 = sx.q(eax_5)
    
    if ((eax_15 ^ edx_6) - edx_6 s<= (eax_19 ^ edx_7) - edx_7 && (ebx_1 s<= 0 || ebx_1 s<= eax_5))
        int32_t result
        result.b = 1
        return result

return 0
