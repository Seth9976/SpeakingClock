// 函数: sub_410e68
// 地址: 0x410e68
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t esi = arg2
void* ebx = arg1

if (esi s< 0 || esi s>= *(ebx + 0x14))
    ebx, esi = sub_41019c(esi, data_41351c)

return *(*(ebx + 0x10) + (esi << 3) + 4)
