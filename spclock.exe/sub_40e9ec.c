// 函数: sub_40e9ec
// 地址: 0x40e9ec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result_1 = arg3
int32_t ecx = sub_40e774(*(arg1 + 0x20), &result_1)
*(arg1 + 0x1c) -= 1

if (*(arg1 + 0x1c) == 0)
    *(arg1 + 0x24) = 0
    sub_40e6f8(arg1 + 0xc, 0xffff)
    sub_40e914(arg1)
    ecx = sub_40e908(arg1)

void* result = result_1

if (*(result + 0xc) != 0)
    return result

*(arg1 + 0x20)
return sub_40e7ec(ecx, &result_1)
