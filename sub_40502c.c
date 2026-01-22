// 函数: sub_40502c
// 地址: 0x40502c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* result = *arg1

if (result == 0 || *(result - 8) == 1)
    return result

void* eax_1 = sub_404c4c(*(result - 4))
int64_t* eax_2 = *arg1
*arg1 = eax_1
sub_4030d0(eax_2, eax_1, *(eax_2 - 4), eax_2)

if (eax_2[-1].d s>= 1)
    eax_2[-1].d -= 1
    
    if (eax_2[-1].d == 1)
        sub_402ec4(&eax_2[-1])

return *arg1
