// 函数: sub_489bbc
// 地址: 0x489bbc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char result = *(arg1 + 0x7d)

if (arg2 == result)
    return result

if (result == 0)
    (*(*arg1[0x1c] + 0x2c))()
    (*(*arg1[0x1d] + 0x40))()
    arg1[0x15]
    (*(*arg1[0x1d] + 0x34))()
    sub_431be0(arg1[0x1d], 1)
else
    (*(*arg1[0x1d] + 0x40))()
    sub_4308a8(arg1[0x1d])

int32_t edi_1 = *(arg1[0x1e] + 8)
sub_48ab54(arg1)
*(arg1 + 0x7d) = arg2
sub_489c34(arg1, edi_1)
int32_t* esi
esi.w = 0xffee
return sub_403e64(arg1, esi)
