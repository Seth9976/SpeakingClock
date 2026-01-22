// 函数: sub_460e04
// 地址: 0x460e04
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if ((arg1[7].b & 2) == 0)
    if (sub_45fc28(arg1) == 0)
        *arg3 = arg1[0x12]
        arg3[1] = arg1[0x13]
    else
        (*(*arg1 + 0x44))()
        int32_t var_10
        *arg3 = var_10
        int32_t var_c
        arg3[1] = var_c
else if ((*(arg2 + 0x1c) & 0x10) == 0)
    *arg3 = *(arg1 + 0x242)
    arg3[1] = *(arg1 + 0x246)

void* eax_9 = arg1[0x68]
*arg3 -= *(eax_9 + 8) + *(eax_9 + 0x10)
void* result = arg1[0x68]
arg3[1] -= *(result + 0xc) + *(result + 0x14)
return result
