// 函数: sub_459a70
// 地址: 0x459a70
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg2 + 0xc) = 0
int32_t eax = *(arg2 + 8)
int32_t var_14 = sx.d(eax.w)
int32_t var_10 = sx.d(eax:2.w)
int32_t esi
esi.w = 0xffe2
char result = sub_403e64(arg1, esi, zx.d(*(arg2 + 4)), sx.d(*(arg2 + 6)), &var_14)

if (result == 0)
    void* esi_1 = arg1[0xc]
    
    if (esi_1 != 0)
        *(arg2 + 4)
        result = sub_458ac8(esi_1, *(arg2 + 8))
        *(arg2 + 0xc) = 0
else
    *(arg2 + 0xc) = 1

return result
