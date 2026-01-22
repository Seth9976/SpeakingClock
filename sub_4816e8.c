// 函数: sub_4816e8
// 地址: 0x4816e8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax_1 = *(*(arg2 + 8) + 8)
char result
int32_t esi

if (eax_1 == 0xfffffdd8)
    *(arg2 + 0xc) = 1
    esi.w = 0xffb0
    result = sub_403e64(arg1, esi)
    
    if (result != 0)
        result = 0
        *(arg2 + 0xc) = 0
else
    result = (eax_1 + 0x228).b - 1
    
    if (eax_1 == 0xfffffdd9)
        esi.w = 0xffaf
        return sub_403e64(arg1, esi)
return result
