// 函数: sub_4641bc
// 地址: 0x4641bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (sub_461af8(arg1) == 0)
    *(arg1 + 0x24) = 0
else
    int32_t eax_3 = sub_461bb0(arg1)
    *(arg1 + 0x24) = *(arg1 + 0x20) - eax_3

void* esi = *(arg1 + 0x14)

if (esi != 0 && sub_461b78(esi) == 0)
    *(arg1 + 0x14)
    sub_4641bc(arg2)

if (sub_462180(arg1) != 0)
    sub_4620d4(sub_462180(arg1), *(arg1 + 0x20))

int32_t var_10_2 = *(arg2 - 4)
void (__convention("regparm")* var_14)(void* arg1, void* arg2) = sub_463f50
return sub_462454(*(arg2 - 4), *(arg1 + 0x14))
