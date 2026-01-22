// 函数: sub_44e61c
// 地址: 0x44e61c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t esi = arg3
int32_t edi = arg2
int32_t ebx = arg1

if (*(esi + 0x64) != 0)
    arg3, arg2, ebx = sub_44a8ec(data_4ac4cc)

if (*(ebx + 0x5c) == 0)
    arg2.b = 1
    *(ebx + 0x5c) = sub_403c38(arg3, arg2)

if (edi - 1 s>= 0 && edi - 1 s< *(*(ebx + 0x5c) + 8)
        && *(sub_41a0f4(*(ebx + 0x5c), edi - 1) + 0x3f) u> *(esi + 0x3f))
    sub_44e434(esi, zx.d(*(sub_41a0f4(*(ebx + 0x5c), edi - 1) + 0x3f)))

sub_44b8e4(ebx, edi, zx.d(*(esi + 0x3f)))
sub_41a170(*(ebx + 0x5c), edi, esi)
*(esi + 0x64) = ebx
*(esi + 0x84) = ebx
*(esi + 0x80) = sub_44e898

if (*(ebx + 0x34) != 0)
    sub_44b814(ebx)

int32_t eax_14
int32_t edx_5
eax_14, edx_5 = sub_44e490(ebx)
edx_5.b = eax_14 == 1
return (*(*ebx + 0x3c))()
