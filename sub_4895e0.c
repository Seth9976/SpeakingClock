// 函数: sub_4895e0
// 地址: 0x4895e0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi
int32_t var_8 = esi
int32_t edi_1 = *(arg1[0x16] + 8) - 1

if (edi_1 s>= 0)
    int32_t i_1 = edi_1 + 1
    esi = 0
    int32_t i
    
    do
        sub_403c68(sub_41a0f4(arg1[0x16], esi))
        sub_41a240(arg1[0x16], esi, 0)
        esi += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

(*(*arg1[0x16] + 8))()
esi.w = 0xffee
return sub_403e64(arg1, esi)
