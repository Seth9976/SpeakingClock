// 函数: sub_442ea8
// 地址: 0x442ea8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result
result.b = 1

if ((*(arg1 + 0x1c) & 0x10) == 0)
label_442ed8:
    char eax_4 = *(arg1 + 0x5b)
    char temp0_1
    
    if (eax_4 != 0)
        temp0_1 = eax_4 - 3
    
    if (eax_4 == 0 || temp0_1 u< 2)
        *arg2 = sub_42ea34(*(arg1 + 0x198))
    
    if (*(arg1 + 0x5b) u< 3)
        *arg3 = sub_42ea4c(*(arg1 + 0x198))
else if (sub_42ea34(*(arg1 + 0x198)) s> 0 && sub_42ea4c(*(arg1 + 0x198)) s> 0)
    goto label_442ed8

return result
