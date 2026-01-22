// 函数: sub_44e6d4
// 地址: 0x44e6d4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx = arg1
int32_t eax_1

if (arg2 s>= 0 && *(ebx + 0x5c) != 0)
    eax_1 = sub_44e490(ebx)

if (arg2 s< 0 || *(ebx + 0x5c) == 0 || arg2 s>= eax_1)
    ebx = sub_44a8ec(data_4ac194)

void* eax_4 = sub_41a0f4(*(ebx + 0x5c), arg2)
sub_419fe8(*(ebx + 0x5c), arg2)
*(eax_4 + 0x64) = 0
*(eax_4 + 0x80) = 0
*(eax_4 + 0x84) = 0

if (*(ebx + 0x34) != 0)
    sub_44b814(ebx)

int32_t eax_8
int32_t edx_2
eax_8, edx_2 = sub_44e490(ebx)
edx_2.b = eax_8 == 0
return (*(*ebx + 0x3c))()
