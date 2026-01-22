// 函数: sub_45c5cc
// 地址: 0x45c5cc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_10
sub_418a3c(**(arg2 - 4) - arg1[0x10], *(*(arg2 - 4) + 4) - arg1[0x11], &var_10)
*(arg2 - 0xc) = var_10
int32_t var_c
*(arg2 - 8) = var_c
(*(*arg1 + 0x44))(*(arg2 - 0xc), *(arg2 - 8))
RECT lprc
BOOL result

if (PtInRect(&lprc) == 0)
    result = 0
else if ((arg1[7].b & 0x10) == 0 || (*(arg1 + 0x57) == 0 && (*(arg1 + 0x51) & 4) != 0))
    char eax_9
    
    if (*(arg1 + 0x57) != 0)
        eax_9 = (*(*arg1 + 0x50))()
    
    if (*(arg1 + 0x57) != 0 && (eax_9 != 0 || *(arg2 - 0xd) != 0))
        int16_t var_6_1 = *(arg2 - 8)
        sub_458ac8(arg1, (*(arg2 - 0xc)).d)
        result.b = false
    else
        result = 0
else
    result.b = 1

if (result.b != 0)
    *(arg2 - 0x14) = arg1

return result
