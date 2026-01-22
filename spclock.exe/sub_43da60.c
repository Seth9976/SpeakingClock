// 函数: sub_43da60
// 地址: 0x43da60
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx = *(arg2 + 8)
uint32_t edi = zx.d(*(ebx + 0x10))
int32_t ebp = *(ebx + 0x10)

if ((ebp & 0x1000) != 0)
    edi.w |= 0x1000

if ((ebp & 0x20) != 0)
    edi.w |= 0x20

sub_42c7c4(arg1[0x94], *(ebx + 0x18))
arg1[0x1a]
sub_42c630(arg1[0x94])
arg1[0x69]
sub_42c64c(arg1[0x94])

if (*(ebx + 8) s>= 0 && (edi.w & 1) != 0)
    sub_42bbb0(*(arg1[0x94] + 0x14), 0xff00000d)
    sub_42b2b0(*(arg1[0x94] + 0xc), 0xff00000e)

if (*(ebx + 8) s< 0)
    sub_42c258(arg1[0x94], ebx + 0x1c)
else
    (*(*arg1 + 0x124))(edi)

if ((edi.w & 0x10) != 0)
    DrawFocusRect(*(ebx + 0x18), ebx + 0x1c)

return sub_42c7c4(arg1[0x94], 0)
