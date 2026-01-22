// 函数: sub_49b9b4
// 地址: 0x49b9b4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_49a0c0(arg1, arg2)

if (*((*(*arg1 + 0x148))() + 0x30) == 3)
    if (*data_4ac1d0 == 0 || *(arg1 + 0x1d9) == 0)
        arg2[1] |= 0x800000
    else
        arg2[2] |= 0x200

char result = sub_49a970(arg1)

if (result != 0)
    arg2[2] &= 0xfffffdff
    arg2[1] &= 0xff7fffff

return result
