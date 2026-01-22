// 函数: sub_410a2c
// 地址: 0x410a2c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* var_10 = arg3

if ((*arg1 & 0xbfe8) != 0)
    sub_410734(arg1, arg2, arg3)

int16_t edi = *arg2

if (edi u< 0x14)
    return sub_410400(VariantCopy(arg1, arg2))

if (edi == 0x100)
    *arg1 = 0x100
    *(arg1 + 8) = 0
    return sub_404bdc(&arg1[4], *(arg2 + 8))

if (edi == 0x101)
    *arg1 = edi
    *(arg1 + 8) = *(arg2 + 8)
    return data_4b198c()

if ((edi & 0x2000) != 0)
    return sub_410858(arg1, arg2)

char eax_8
VARIANT* pvargDest
VARIANT* pvargSrc
eax_8, pvargDest, pvargSrc = sub_415ce4(edi, &var_10)

if (eax_8 == 0)
    return sub_410400(VariantCopy(pvargDest, pvargSrc))

return (*(*var_10 + 0x28))(0)
