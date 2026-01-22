// 函数: sub_4253a4
// 地址: 0x4253a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
int32_t edi_1 = *(arg1[4] + 8) - 1

if (edi_1 s>= 0)
    int32_t i_1 = edi_1 + 1
    int32_t i
    
    do
        int32_t* esi_1 = arg1[4]
        int32_t* eax_2 = sub_41a0f4(esi_1, esi_1[2] - 1)
        (*(*eax_2[1] + 0x2c))()
        sub_403c68(eax_2)
        i = i_1
        i_1 -= 1
    while (i != 1)

if (arg1[3] != 0)
    sub_406550(&arg1[3])

sub_403c68(arg1[5])
int32_t edx_3
edx_3.b = arg2.b & 0xfc
int32_t result = sub_403c58(sub_403c68(arg1[4]), edx_3)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
