// 函数: sub_41c2c8
// 地址: 0x41c2c8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi = arg2
int32_t* ebx = arg1

if (esi s< 0 || esi s>= ebx[7])
    ebx, esi = sub_41b52c(esi, data_4ac394)

(*(*ebx + 0x84))()
ebx[6]
sub_405810()
ebx[7] -= 1
int32_t eax_4 = ebx[7]

if (esi s< eax_4)
    sub_4030d0(ebx[6] + (esi << 3) + 8, ebx[6] + (esi << 3), (eax_4 - esi) * 8)

return (*(*ebx + 0x80))()
