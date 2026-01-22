// 函数: sub_49b6d4
// 地址: 0x49b6d4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* ebx = arg1

if ((*(ebx + 0x1c) & 0x10) != 0 || *(ebx + 0x1da) == 0)
    return 

arg1.w = 3 & *(ebx + 0x1c)

if (0 != arg1.w)
    return 

int32_t edi_2 = sub_45b7f4(ebx) - 1

if (edi_2 s>= 0)
    int32_t i_1 = edi_2 + 1
    int32_t esi_1 = 0
    int32_t i
    
    do
        if (sub_403df4(sub_45b7b8(ebx, esi_1), 0x453644) != 0)
            sub_458ac8(sub_45b7b8(ebx, esi_1), 0)
        
        esi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_45c168(ebx)
