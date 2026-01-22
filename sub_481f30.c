// 函数: sub_481f30
// 地址: 0x481f30
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404074(arg1, arg2)
int32_t ebp_1 = *(arg1[0xac] + 8) - 1

if (ebp_1 s>= 0)
    int32_t i_1 = ebp_1 + 1
    int32_t edi_1 = 0
    int32_t i
    
    do
        *(sub_41a0f4(arg1[0xac], edi_1) + 0x254) = 0
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_403c68(arg1[0xac])
int32_t edx_1
edx_1.b = arg2.b & 0xfc
int32_t result = sub_480bcc(arg1, edx_1)

if (arg2.b s<= 0)
    return result

return sub_40401c(arg1)
