// 函数: sub_454c7c
// 地址: 0x454c7c
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
int32_t eax = *(arg1 + 0x10)
int32_t var_14
int32_t esi_5

if (eax s< var_1c || eax s> var_14)
    esi_5 = sub_454c58(var_1c - eax, var_14 - eax)
else
    esi_5 = 0

int32_t eax_4 = *(arg1 + 0x14)
int32_t edx_3 = var_18
int32_t var_10
BOOL result

if (eax_4 s< edx_3 || eax_4 s> var_10)
    result = sub_454c58(edx_3 - eax_4, var_10 - eax_4)
else
    result = 0

if (esi_5 == 0 && result == 0)
    return result

int32_t dy = neg.d(result)
return OffsetRect(arg1 + 0x4c, neg.d(esi_5), dy)
