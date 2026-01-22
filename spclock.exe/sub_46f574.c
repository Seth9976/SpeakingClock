// 函数: sub_46f574
// 地址: 0x46f574
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_1c = *arg3
void var_18
void* edi = &var_18
void* esi_1 = &arg3[1]
*edi = *esi_1
void* edi_1 = edi + 4
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
arg1[0xc]
int32_t esi_5 = arg1[0x25]
int32_t edi_5 = sub_456f30(arg1, arg2, &var_1c)
int32_t result = arg1[0xc]

if (result != 0 && edi_5 == result && esi_5 != arg1[0x25])
    return sub_45c168(arg1)

return result
