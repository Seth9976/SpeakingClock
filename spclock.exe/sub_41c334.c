// 函数: sub_41c334
// 地址: 0x41c334
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edi = arg3
int32_t esi = arg2
int32_t* ebx = arg1

if (esi s< 0 || esi s>= ebx[7])
    ebx, esi, edi = sub_41b52c(esi, data_4ac394)

if (edi s< 0 || edi s>= ebx[7])
    ebx, esi, edi = sub_41b52c(edi, data_4ac394)

(*(*ebx + 0x84))()
sub_41c390(ebx, esi, edi)
return (*(*ebx + 0x80))()
