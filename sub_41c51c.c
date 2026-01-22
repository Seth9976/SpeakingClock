// 函数: sub_41c51c
// 地址: 0x41c51c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
int32_t esi = arg2
int32_t* ebx = arg1
int32_t edi

if (ebx[9].b != 0)
    ebx, ebp, esi, edi = sub_41b52c(0, data_4ac1b0)

if (esi s< 0 || esi s> ebx[7])
    ebx, ebp, esi, edi = sub_41b52c(esi, data_4ac394)

return (*(*ebx + 0x88))(ebp[2])
