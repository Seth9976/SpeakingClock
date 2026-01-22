// 函数: sub_479f74
// 地址: 0x479f74
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx = 0

do
    int32_t edi_2 = ebx & 0x7f
    int32_t eax = *(arg1 + (edi_2 << 2) + 0xc)
    
    if (eax != 0xffffffff)
        sub_479d54(*(arg1 + 8), eax)
    
    *(arg1 + (edi_2 << 2) + 0xc) = 0xffffffff
    ebx += 1
while (ebx.b != 4)

sub_479e58(data_4abbe4, *(arg1 + 8))
*(arg1 + 8) = 0
return 0
