// 函数: sub_40d370
// 地址: 0x40d370
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t* var_10 = arg3

if ((*arg1 & 0xbfe8) != 0)
    sub_40d078(arg1, arg2, arg3)

int32_t edi
edi.w = *arg2

if (edi.w u< 0x14)
    return sub_40cddc(VariantCopy(arg1, arg2))

if (edi.w == 0x100)
    *arg1 = 0x100
    *(arg1 + 8) = 0
    return sub_403a40(&arg1[4], *(arg2 + 8))

if (edi.w == 0x101)
    *arg1 = edi.w
    *(arg1 + 8) = *(arg2 + 8)
    return data_414818()

if ((edi.w & 0x2000) != 0)
    return sub_40d19c(arg1, arg2)

char eax_8
VARIANT* pvargDest
VARIANT* pvargSrc
eax_8, pvargDest, pvargSrc = sub_40e9b0(edi.w, &var_10)

if (eax_8 == 0)
    return sub_40cddc(VariantCopy(pvargDest, pvargSrc))

return (*(*var_10 + 0x28))(0)
