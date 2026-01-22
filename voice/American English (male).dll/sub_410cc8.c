// 函数: sub_410cc8
// 地址: 0x410cc8
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t esi = arg2
int32_t* ebx = arg1

if (esi s< 0 || esi s>= ebx[5])
    ebx, esi = sub_41019c(esi, data_41351c)

(*(*ebx + 0x84))()
ebx[4]
sub_404484()
ebx[5] -= 1
int32_t eax_4 = ebx[5]

if (esi s< eax_4)
    sub_4027b0(ebx[4] + (esi << 3) + 8, ebx[4] + (esi << 3), (eax_4 - esi) << 3)

return (*(*ebx + 0x80))()
