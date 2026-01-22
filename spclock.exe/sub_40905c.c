// 函数: sub_40905c
// 地址: 0x40905c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* eax = arg1

if (eax != 0)
    eax = *(eax - 4)

void* esi = eax
int32_t i

for (i = 1; esi s>= i; i += 1)
    if (*(arg1 + i - 1) u> 0x20)
        break

if (esi s< i)
    int32_t* result = arg2
    sub_404b88(result)
    return result

while (*(arg1 + esi - 1) u<= 0x20)
    esi -= 1

return sub_405080(esi - i + 1, i, arg1, arg2)
