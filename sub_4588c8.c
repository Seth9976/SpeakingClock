// 函数: sub_4588c8
// 地址: 0x4588c8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* esi = arg1

if (*(esi + 0x5b) == 5)
    arg1.b = 1
else
    int32_t eax_1 = *arg2
    int32_t eax_3 = *arg3
    arg1 = (*(*esi + 0x34))(arg2, arg3, eax_1, eax_3)
    char edx = *(esi + 0x5b)
    
    if (edx == 0 || edx - 3 u< 2)
        *arg2 = eax_1
    
    if (edx u< 3)
        *arg3 = eax_3

return arg1
