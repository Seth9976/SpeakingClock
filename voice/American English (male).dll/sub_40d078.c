// 函数: sub_40d078
// 地址: 0x40d078
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t* var_c = arg3
int32_t esi
esi.w = *arg1

if (esi.w u< 0x14)
    return sub_40cddc(VariantClear(arg1))

if (esi.w == 0x100)
    *arg1 = 0
    void* result = &arg1[4]
    sub_4039ec(result)
    return result

if (esi.w == 0x101)
    return data_414810()

if ((esi.w & 0x2000) != 0)
    return sub_40cefc(arg1)

char eax_4
VARIANT* pvarg
eax_4, pvarg = sub_40e9b0(esi.w, &var_c)

if (eax_4 == 0)
    return sub_40cddc(VariantClear(pvarg))

return (*(*var_c + 0x24))()
