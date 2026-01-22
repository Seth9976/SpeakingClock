// 函数: sub_410d34
// 地址: 0x410d34
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t edi = arg3
int32_t esi = arg2
int32_t* ebx = arg1

if (esi s< 0 || esi s>= ebx[5])
    ebx, esi, edi = sub_41019c(esi, data_41351c)

if (edi s< 0 || edi s>= ebx[5])
    ebx, esi, edi = sub_41019c(edi, data_41351c)

(*(*ebx + 0x84))()
sub_410d90(ebx, esi, edi)
return (*(*ebx + 0x80))()
