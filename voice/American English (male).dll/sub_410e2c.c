// 函数: sub_410e2c
// 地址: 0x410e2c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void** edi = arg3
int32_t esi = arg2
void* ebx = arg1

if (esi s< 0 || esi s>= *(ebx + 0x14))
    ebx, esi, edi = sub_41019c(esi, data_41351c)

return sub_403a40(edi, *(*(ebx + 0x10) + (esi << 3)))
