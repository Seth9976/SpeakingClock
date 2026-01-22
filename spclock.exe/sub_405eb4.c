// 函数: sub_405eb4
// 地址: 0x405eb4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx = *arg1

if (arg2 != 0)
    *(arg2 - 8) += 1

if (ebx != 0)
    int32_t temp0_1 = *(ebx - 8)
    *(ebx - 8) -= 1
    
    if (temp0_1 == 1)
        *(ebx - 8) += 1
        sub_405e78(arg1, arg3)

*arg1 = arg2
