// 函数: sub_45e824
// 地址: 0x45e824
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_14 = arg3
void* edi = arg2
int32_t result
result.b = 1
arg2.b = 1
int32_t* eax_1 = sub_46bf14(arg1)
char eax_3

if (eax_1 != 0 && arg1 != eax_1 && *(eax_1 + 0x275) != 0)
    eax_3 = sub_45e824()

if (eax_1 != 0 && arg1 != eax_1 && *(eax_1 + 0x275) != 0 && eax_3 != 0)
    return result

if ((*(arg1 + 0x51) & 0x10) == 0)
    var_14.b = *(edi + 4)
    int32_t* esi
    esi.w = 0xffb8
    sub_403e64(arg1, esi, &var_14)
    *(edi + 4) = zx.w(var_14.b)
    
    if (*(edi + 4) == 0)
        return result

return 0
