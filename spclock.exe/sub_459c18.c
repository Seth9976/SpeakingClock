// 函数: sub_459c18
// 地址: 0x459c18
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_1c = *arg2
int32_t var_18
int32_t* edi = &var_18
void* esi_1 = &arg2[1]
*edi = *esi_1
void* edi_1 = &edi[1]
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
int32_t* result = nullptr

if ((*(*arg1 + 0x58))(var_1c) != 0 && (*(*arg1 + 0x58))() != sub_403b40(arg1))
    int32_t eax_7
    int32_t edx_3
    eax_7, edx_3 = (*(*arg1 + 0x58))()
    *data_4ac2fc
    edx_3.b = 1
    result = (*(eax_7 + 0x2c))()
    sub_456e94(result)
    sub_456e60(result)
    int32_t var_14
    sub_457164(result, var_14 - var_1c)
    int32_t var_10
    sub_4571a8(result, var_10 - var_18)

return result
