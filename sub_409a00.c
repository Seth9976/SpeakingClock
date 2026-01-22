// 函数: sub_409a00
// 地址: 0x409a00
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t i_1 = arg2

if (i_1 != 0)
    i_1 = *(i_1 - 4)

int32_t i = i_1
char* eax_2 = sub_405018(arg1)

for (; i s> 0; i -= 1)
    char ebx_1 = *(arg2 + i - 1)
    
    if (ebx_1 != 0 && sub_409e24(eax_2, ebx_1) != 0)
        if (sub_40d88c(arg2, i) != 2)
            break
        
        i -= 1

return i
