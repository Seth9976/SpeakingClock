// 函数: sub_47c038
// 地址: 0x47c038
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char eax = *(arg1 + 0x269)

if (eax != 3)
    if (eax != 6)
        return sub_43e1a8(arg1)
    
    int32_t edx
    edx.b = 1
    int32_t* eax_2 = sub_46bf14(arg1)
    
    if (eax_2 == 0)
        return sub_43e1a8(arg1)
    
    int32_t ecx
    return sub_472cd4(eax_2, 0x46a11c, ecx)

int32_t* i

for (i = arg1; i != 0; i = i[0xc])
    if (i[0x58] != 0)
        break

if (i == 0)
    return sub_43e1a8(arg1)

return sub_4773c4(*data_4ac2fc, i[0x58])
