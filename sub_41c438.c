// 函数: sub_41c438
// 地址: 0x41c438
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int64_t** edi = arg3
int32_t esi = arg2
void* ebx = arg1

if (esi s< 0 || esi s>= *(ebx + 0x1c))
    ebx, esi, edi = sub_41b52c(esi, data_4ac394)

return sub_404bdc(edi, *(*(ebx + 0x18) + (esi << 3)))
