// 函数: sub_47161c
// 地址: 0x47161c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi
int32_t var_8 = esi
int32_t result = 0
HANDLE eax_1 = sub_46f610(arg1)

if (eax_1 != 0)
    esi.w = 0xffd0
    result = sub_403e64(eax_1, esi, zx.d(arg2))

int32_t ebp_1 = sub_46f644(arg1) - 1

if (ebp_1 s>= 0)
    int32_t i_1 = ebp_1 + 1
    int32_t var_18_1 = 0
    int32_t i
    
    do
        if ((arg2 & result.b) != 0)
            return result
        
        void* eax_7 = sub_46f690(arg1, var_18_1)
        
        if (eax_7 != eax_1)
            esi.w = 0xffd0
            result.b |= sub_403e64(eax_7, esi, zx.d(arg2))
        
        var_18_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

if ((arg2 & result.b) != 0)
    return result

return sub_45eb20(arg1, arg2)
