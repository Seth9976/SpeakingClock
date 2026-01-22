// 函数: sub_456f30
// 地址: 0x456f30
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t esi
int32_t var_20 = esi
int32_t edi
int32_t var_24 = edi
int32_t var_1c = *arg3
void var_18
void* edi_1 = &var_18
void* esi_2 = &arg3[1]
*edi_1 = *esi_2
void* edi_2 = edi_1 + 4
void* esi_3 = esi_2 + 4
*edi_2 = *esi_3
*(edi_2 + 4) = *(esi_3 + 4)

if (arg2 != arg1[0x25])
    void* eax_2 = arg1[0x25]
    
    if (eax_2 != 0 && *(eax_2 + 0x1ac) != 0)
        sub_41a290(*(eax_2 + 0x1ac))
        sub_423648(arg1[0x25], arg1)
    
    if (arg2 != 0 && arg2 != 0xffffffff && arg2[0x6b] != 0)
        sub_419f9c(arg2[0x6b], arg1)

arg1[0x15].w |= 0x400
int32_t* var_28 = &var_4
int32_t (* var_2c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi_5

if (arg2 != 0xffffffff)
    esi_5.w = 0xffe4
    sub_403e64(arg1, esi_5, arg2, &var_1c)

int32_t* eax_10 = arg1[0x25]

if (arg2 != eax_10)
    if (arg2 == 0xffffffff)
        arg1[0x25] = 0
    else
        arg1[0x25] = arg2
        
        if (arg2 != 0)
            esi_5.w = 0xffc4
            sub_403e64(arg2, esi_5, arg1, &var_1c)
            sub_423408(arg1[0x25], arg1)
    
    if (eax_10 != 0)
        esi_5.w = 0xffbe
        sub_403e64(eax_10, esi_5, arg1)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_28_1)(int32_t* arg1 @ ebp, int32_t arg2) = sub_457057
arg1[0x15].w &= 0xfbff
return arg1
