// 函数: sub_48a410
// 地址: 0x48a410
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_49195c(arg1)
sub_4321c4(arg1[0x1c])
(*(*arg1[0x1c] + 0x40))()
arg1[0x15]
(*(*arg1[0x1c] + 0x34))()
sub_431be0(arg1[0x1c], 0)

if (*(arg1 + 0x7d) == 0)
    (*(*arg1[0x1d] + 0x40))()
    sub_4308a8(arg1[0x1d])
else
    (*(*arg1[0x1d] + 0x40))()
    arg1[0x15]
    (*(*arg1[0x1d] + 0x34))()
    sub_431be0(arg1[0x1d], 1)

arg1[0x16] = 0
sub_48ab54(arg1)
return sub_491964(arg1, 0)
