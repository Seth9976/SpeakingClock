// 函数: sub_411038
// 地址: 0x411038
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t edi = arg3
int32_t esi = arg2
int32_t* ebx = arg1

if (esi s< 0 || esi s>= ebx[5])
    ebx, esi, edi = sub_41019c(esi, data_41351c)

(*(*ebx + 0x84))()
*(ebx[4] + (esi << 3) + 4) = edi
return (*(*ebx + 0x80))()
