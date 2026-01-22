// 函数: sub_41c5ec
// 地址: 0x41c5ec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int64_t* edi = arg3
int32_t esi = arg2
int32_t* ebx = arg1

if (ebx[9].b != 0)
    ebx, esi, edi = sub_41b52c(0, data_4ac1b0)

if (esi s< 0 || esi s>= ebx[7])
    ebx, esi, edi = sub_41b52c(esi, data_4ac394)

(*(*ebx + 0x84))()
sub_404bdc(ebx[6] + (esi << 3), edi)
return (*(*ebx + 0x80))()
