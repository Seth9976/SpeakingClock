// 函数: sub_477ad4
// 地址: 0x477ad4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax = *(arg3 + 8)
int32_t var_2c = sx.d(eax.w)
int32_t var_28 = sx.d(eax:2.w)
int32_t pt
sub_457260(arg2, &var_2c, &pt)
void* edi = sub_474d74(sub_455d48(&pt, 1))

if (edi == 0 || *(edi + 0x8d) == 0)
    return sub_477ca0(arg1)

void* result

if (edi == *(arg1 + 0x60))
    int32_t eax_7 = *(arg3 + 8)
    int32_t var_20 = sx.d(eax_7.w)
    int32_t var_1c_1 = sx.d(eax_7:2.w)
    sub_457260(arg2, &var_20, &pt)
    int32_t var_14
    int32_t var_40_1 = var_14
    BOOL eax_12 = PtInRect(arg1 + 0x64, pt)
    result = neg.d(sbb.d(eax_12, eax_12, eax_12 u< 1))
else
    result.b = 1

if (result.b == 0)
    return result

char ebx_1 = *(arg1 + 0x58)
uint32_t var_3c

if (ebx_1 == 0)
    var_3c = *(arg1 + 0x78)
else
    var_3c = *(arg1 + 0x80)

sub_458ac8(edi, &var_3c)

if (ebx_1 != 0 && var_3c == 0)
    *(arg1 + 0x58) = ebx_1
    *(arg1 + 0x60) = edi
    void point
    GetCursorPos(&point)
    return sub_477f40(arg1, &point)

sub_477ca0(arg1)
*(arg1 + 0x58) = ebx_1
*(arg1 + 0x60) = edi
return sub_477a68(arg1, var_3c, 0)
