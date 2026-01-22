// 函数: sub_4695a8
// 地址: 0x4695a8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* edx = arg1[0x17]

if (edx != 0 && *(edx + 0x58) != 0)
    return 0

struct _EXCEPTION_REGISTRATION_RECORD* ecx_1 = (*(*arg1 + 0x44))()

if (*(arg1 + 0x6a) != 0 && *(arg1 + 0x95) != 0)
    uint32_t edx_2
    
    if (*(arg1 + 0x69) == 0)
        edx_2.b = *(arg1 + 0x69) ^ 1
        sub_469170(arg1, edx_2, ecx_1)
    else if (*(arg1 + 0x69) != 0 && arg1[0x1b] == 0)
        edx_2.b = *(arg1 + 0x69) ^ 1
        sub_469170(arg1, edx_2, ecx_1)

if (*(arg1 + 0x6a) != 0 && sub_468a10(arg1) != 0)
    return 1

return 0
