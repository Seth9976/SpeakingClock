// 函数: sub_410fdc
// 地址: 0x410fdc
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void* edi = arg3
int32_t esi = arg2
int32_t* ebx = arg1

if (ebx[7].b != 0)
    ebx, esi, edi = sub_41019c(0, data_413470)

if (esi s< 0 || esi s>= ebx[5])
    ebx, esi, edi = sub_41019c(esi, data_41351c)

(*(*ebx + 0x84))()
sub_403a40(ebx[4] + (esi << 3), edi)
return (*(*ebx + 0x80))()
