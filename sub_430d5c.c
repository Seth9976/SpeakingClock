// 函数: sub_430d5c
// 地址: 0x430d5c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t edi = arg2
sub_430878(arg1)

if (edi s< 0 || edi s>= *(arg1 + 0x20))
    sub_42c9f0(data_4ac38c)

sub_430e14(arg1)
GdiFlush()
int32_t eax_5 = *(arg1 + 0x38)

if (eax_5 s> 0)
    edi = eax_5 - edi - 1

return sub_42ccd0(*(arg1 + 0x34), zx.d(*(arg1 + 0x3e)), 0x20) * edi + *(arg1 + 0x2c)
