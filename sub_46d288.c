// 函数: sub_46d288
// 地址: 0x46d288
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* var_20 = arg2
int32_t eax_1 = sub_45714c(arg1)
int32_t edx_1 = *(arg1[0x94] + 0x10)
int32_t esi

esi = eax_1 s>= edx_1 ? eax_1 : edx_1

int32_t eax_3 = sub_457190(arg1)
int32_t edx_3 = *(arg1[0x95] + 0x10)
int32_t edi

edi = eax_3 s<= edx_3 ? edx_3 : eax_3

int32_t var_1c
sub_418a8c(esi, neg.d(*(arg1[0x95] + 0xc)), neg.d(*(arg1[0x94] + 0xc)), &var_1c, edi)
int32_t* eax_8 = var_20
*eax_8 = var_1c
void* edi_2 = &eax_8[1]
void var_18
void* esi_1 = &var_18
*edi_2 = *esi_1
void* edi_3 = edi_2 + 4
void* esi_2 = esi_1 + 4
*edi_3 = *esi_2
*(edi_3 + 4) = *(esi_2 + 4)
return sub_45a9b0(arg1, var_20)
