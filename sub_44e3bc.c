// 函数: sub_44e3bc
// 地址: 0x44e3bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (arg2 == *(arg1 + 0x39))
    return 

*(arg1 + 0x39) = arg2
int32_t eax_2

if (*data_4ac4d0 == 2)
    eax_2 = sub_44e490(arg1)

void* edi_1

if (*data_4ac4d0 != 2 || eax_2 == 0)
    edi_1 = arg1[0x19]

if ((*data_4ac4d0 == 2 && eax_2 != 0) || (edi_1 != 0 && *(edi_1 + 0x6c) != 0))
    (*(*arg1 + 0x3c))()
    return 

void* edi_2 = arg1[0x19]

if (edi_2 != 0 && (arg1[7].b & 2) == 0)
    EnableMenuItem(sub_44b944(edi_2), zx.d(arg1[0x14].w), *((zx.d(arg2) << 2) + &data_4ab794))

(*(*arg1 + 0x3c))()
