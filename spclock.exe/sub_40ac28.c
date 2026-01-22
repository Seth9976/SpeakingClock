// 函数: sub_40ac28
// 地址: 0x40ac28
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int64_t var_10 = int.q(fconvert.t(arg2) * fconvert.t(data_4aa870))
int32_t eax = var_10.d
int32_t edx = var_10:4.d
int32_t eax_3
uint32_t edx_4

if (edx s>= 0)
    int32_t temp2_1 = data_4aa874
    eax_3 = divu.dp.d(edx:eax, temp2_1)
    edx_4 = modu.dp.d(edx:eax, temp2_1)
else
    int32_t eax_1 = neg.d(eax)
    int32_t edx_3 = sbb.d(neg.d(edx), 0, eax != 0)
    int32_t temp2 = data_4aa874
    edx_4 = modu.dp.d(edx_3:eax_1, temp2)
    eax_3 = neg.d(divu.dp.d(edx_3:eax_1, temp2))

*arg1 = edx_4
arg1[1] = eax_3 + 0xa955a
return eax_3 + 0xa955a
