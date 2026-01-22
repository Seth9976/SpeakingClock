// 函数: sub_487c10
// 地址: 0x487c10
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx

if (arg2 != 0 && sub_403df4(arg2, 0x487820) == 0)
    return sub_41a70c(ecx, arg2)

if (arg2 == 0)
    return sub_4878d0(arg1, nullptr)

int32_t ecx_1
int32_t edx
ecx_1, edx = sub_403c68(arg1[6])
arg1[6] = 0
edx.b = 1
arg1[6] = sub_403c38(ecx_1, edx)
int32_t eax_6 = sub_4878b0(arg2)

if (eax_6 s> 0)
    (*(*arg1[6] + 4))()
    sub_41c894(arg2[6], 0, 0)
    sub_41caa0(arg2[6], *(arg1[6] + 4), eax_6)
    sub_41c894(arg2[6], 0, 0)
    sub_41c894(arg1[6], 0, 0)

int32_t* esi
esi.w = 0xfffc
return sub_403e64(arg1, esi)
