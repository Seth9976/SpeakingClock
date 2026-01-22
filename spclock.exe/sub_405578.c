// 函数: sub_405578
// 地址: 0x405578
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax_1 = sub_4054e8(arg3)
int32_t ebx_1

if (arg2 s>= 1)
    ebx_1 = arg2 - 1
    
    if (eax_1 s< ebx_1)
        ebx_1 = eax_1
else
    ebx_1 = 0

uint32_t eax_2

if (arg1 s>= 0)
    eax_2 = eax_1 - ebx_1
    
    if (arg1 s< eax_2)
        eax_2 = arg1
else
    eax_2 = 0

return sub_405458(arg4, ebx_1 * 2 + arg3, eax_2)
