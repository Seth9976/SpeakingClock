// 函数: sub_41c648
// 地址: 0x41c648
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edi = arg3
int32_t esi = arg2
int32_t* ebx = arg1

if (esi s< 0 || esi s>= ebx[7])
    ebx, esi, edi = sub_41b52c(esi, data_4ac394)

(*(*ebx + 0x84))()
*(ebx[6] + (esi << 3) + 4) = edi
return (*(*ebx + 0x80))()
