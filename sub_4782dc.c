// 函数: sub_4782dc
// 地址: 0x4782dc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_14 = ecx
int32_t i

for (i = 0; i s< sub_405cb0(*(arg1 + 0xd0)); i += 1)
    int32_t edi_1 = i * 3
    
    if (arg2 == *(*(arg1 + 0xd0) + (edi_1 << 2) + 4))
        return *(*(arg1 + 0xd0) + (edi_1 << 2))
    
    if (*(*(arg1 + 0xd0) + (edi_1 << 2)) == 0xffffffff)
        break

int32_t result = *(arg1 + 0xcc)
*(arg1 + 0xcc) += 1

if (i s>= sub_405cb0(*(arg1 + 0xd0)))
    i = sub_405cb0(*(arg1 + 0xd0))
    int32_t var_18_1 = i + 1
    sub_405e6c()

int32_t eax_13 = i * 3
*(*(arg1 + 0xd0) + (eax_13 << 2)) = result
*(*(arg1 + 0xd0) + (eax_13 << 2) + 4) = arg2
int32_t ecx_2
ecx_2.b = *(arg2 + 0x344) != 0
*(*(arg1 + 0xd0) + (eax_13 << 2) + 8) = ecx_2.b
return result
