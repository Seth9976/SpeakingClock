// 函数: sub_41c474
// 地址: 0x41c474
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi = arg2
void* ebx = arg1

if (esi s< 0 || esi s>= *(ebx + 0x1c))
    ebx, esi = sub_41b52c(esi, data_4ac394)

return *(*(ebx + 0x18) + (esi << 3) + 4)
