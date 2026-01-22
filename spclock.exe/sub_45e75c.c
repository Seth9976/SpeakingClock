// 函数: sub_45e75c
// 地址: 0x45e75c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* edi = arg2
int32_t result
result.b = 1
arg2.b = 1
int32_t* eax_1 = sub_46bf14(arg1)
char eax_3

if (eax_1 != 0 && arg1 != eax_1 && *(eax_1 + 0x275) != 0)
    eax_3 = sub_45e75c(arg3)

if (eax_1 == 0 || arg1 == eax_1 || *(eax_1 + 0x275) == 0 || eax_3 == 0)
    int32_t var_14
    var_14.b = sub_46bdd4(*(edi + 8))
    
    if ((*(arg1 + 0x51) & 0x10) == 0)
        int32_t* esi
        esi.w = 0xffb9
        sub_403e64(arg1, esi, edi + 4, zx.d(var_14.b), var_14)
    
    if ((*(arg1 + 0x51) & 0x10) != 0 || *(edi + 4) != 0)
        return 0

return result
