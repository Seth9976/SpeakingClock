// 函数: sub_40d954
// 地址: 0x40d954
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax = arg3

if (eax != 0)
    eax = *(eax - 4)

int32_t esi = 1
void* ebx = 1

while (ebx s< eax)
    if (esi s>= arg2)
        break
    
    esi += 1
    
    if (not(test_bit(data_4aa800, zx.d(*(arg3 + ebx - 1)))))
        ebx += 1
    else
        ebx = sub_40db38(arg3, ebx)

if (esi == arg2 && ebx s< eax && test_bit(data_4aa800, zx.d(*(arg3 + ebx - 1))))
    ebx = sub_40db38(arg3, ebx) - 1

*arg1 = esi
*arg4 = ebx
return arg4
