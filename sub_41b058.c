// 函数: sub_41b058
// 地址: 0x41b058
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* esi = arg2
int32_t* ebx = arg1

if (sub_403df4(esi, ebx[1]) == 0)
    ebx, esi = sub_41a080(0, data_4ac2c0)

sub_419f9c(ebx[2], esi)
esi[1] = ebx
esi[2] = ebx[4]
ebx[4] += 1
(*(*ebx + 0x18))()
(*(*ebx + 0x14))()
sub_41ada4(ebx)
return sub_41aa08(ebx)
