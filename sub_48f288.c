// 函数: sub_48f288
// 地址: 0x48f288
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t var_34 = *arg1
int32_t var_30
int32_t* edi = &var_30
void* esi_1 = &arg1[1]
*edi = *esi_1
void* edi_1 = &edi[1]
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
int32_t var_24 = *arg2
void var_20
void* edi_4 = &var_20
void* esi_6 = &arg2[1]
*edi_4 = *esi_6
void* edi_5 = edi_4 + 4
void* esi_7 = esi_6 + 4
*edi_5 = *esi_7
*(edi_5 + 4) = *(esi_7 + 4)
int32_t var_c
int32_t var_8
sub_49024c(&var_24, &var_8, &var_c)
int32_t var_14
int32_t var_10
sub_49024c(&var_34, &var_10, &var_14)

if (arg3 u< 3)
    arg4[1] = 0
else if (arg3 - 3 u< 3)
    int32_t eax_4 = var_14 - var_c
    int32_t eax_5 = eax_4 s>> 1
    bool c_1 = unimplemented  {sar eax, 0x1}
    
    if (eax_4 s>> 1 s< 0)
        eax_5 = adc.d(eax_5, 0, c_1)
    
    arg4[1] = eax_5
else if (arg3 - 6 u< 3)
    arg4[1] = var_14 - var_c

switch (zx.d(arg3))
    case 0, 3, 6
        *arg4 = 0
    case 1, 4, 7
        int32_t eax_11 = var_10 - var_8
        int32_t eax_12 = eax_11 s>> 1
        bool c_2 = unimplemented  {sar eax, 0x1}
        
        if (eax_11 s>> 1 s< 0)
            eax_12 = adc.d(eax_12, 0, c_2)
        
        *arg4 = eax_12
    case 2, 5, 8
        *arg4 = var_10 - var_8

int32_t result = *arg4 + var_34
int32_t var_44
sub_406ce8(var_8, arg4[1] + var_30, result, &var_44, var_c)
*arg4 = var_44
void* edi_9 = &arg4[1]
void var_40
void* esi_11 = &var_40
*edi_9 = *esi_11
void* edi_10 = edi_9 + 4
void* esi_12 = esi_11 + 4
*edi_10 = *esi_12
*(edi_10 + 4) = *(esi_12 + 4)
return result
