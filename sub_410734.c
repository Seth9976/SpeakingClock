// 函数: sub_410734
// 地址: 0x410734
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* var_c = arg3
int16_t esi = *arg1

if (esi u< 0x14)
    return sub_410400(VariantClear(arg1))

if (esi == 0x100)
    *arg1 = 0
    void* result = &arg1[4]
    sub_404b88(result)
    return result

if (esi == 0x101)
    return data_4b1984()

if ((esi & 0x2000) != 0)
    return sub_4105b8(arg1)

char eax_4
VARIANT* pvarg
eax_4, pvarg = sub_415ce4(esi, &var_c)

if (eax_4 != 0)
    return (*(*var_c + 0x24))()

VariantClear(pvarg)
return VariantInit(pvarg)
