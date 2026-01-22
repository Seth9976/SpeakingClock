// 函数: sub_492875
// 地址: 0x492875
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 ^= arg3
int16_t cs
uint32_t var_4 = zx.d(cs)
uint32_t* var_8 = &var_4
int32_t esi = *((arg4 - 1) * 3 + 0x61) * 0x73694c70
int32_t eflags
void* entry_ebx

if (arg2 == 0xffffffff)
    *(arg2 + 1)
    arg5[esi + 0x37b40042] += entry_ebx:1.b
    arg1.b += arg1:1.b
    *(arg2 + 3)
    arg1.b = 0x2e
    char temp2 = *arg1
    *arg1 += (arg2 + 3).b
    *(arg3 - 1) = sbb.d(*(arg3 - 1), arg3 - 1, temp2 + (arg2 + 3).b u< temp2)
    *(arg3 - 0x53ffb771) += (arg3 - 2):1.b
    *((arg2 + 3) * 5 - 0x6ca7ffb8) += entry_ebx.b
    arg5[arg4 + 0x48] += (arg3 - 2).b
    *(sx.d(arg1.w) + 0x2d) += (arg3 - 2):1.b
    (sx.d(arg1.w) - 2)[esi] += (arg3 - 3).b
    *(sx.d(arg1.w) + 0x2e) += (arg2 + 3).b
    char* eax_18
    eax_18.b = (sx.d(arg1.w) - 2).b + (sx.d(arg1.w) - 2):1.b
    int32_t eflags_1
    char temp0_6
    temp0_6, eflags_1 = __das(eax_18.b, eflags)
    eax_18.b = temp0_6
    eax_18[0xa800492f] += (arg2 + 3):1.b
    *(arg3 - 6) ^= (arg3 - 6).b
    *eax_18 ^= 0x49
    eax_18[esi + 0x30d80049] += (arg3 - 6):1.b
    *eax_18 += eax_18:1.b
    *(arg3 - 7) ^= arg3 - 7
    *(arg3 - 7) ^= arg3 - 7
    trap(0xd)

int16_t gs
*arg1 = gs
*arg5 += arg1.b
uint32_t var_c = zx.d(cs)
uint32_t* var_10 = &var_c
char* esi_1 = *((arg4 - 2) * 3 + 0x61) * 0x73694c70
void* eax_1
bool cond:2

if (arg2 == 0xfffffffe)
    *(entry_ebx + 0x74)
    arg5[0x60048] |= (arg2 + 1).b + 1
    eax_1 = arg1 | 0x42444d4c
    cond:2 = eax_1 == 0
else
    char temp0_1
    temp0_1, eflags = __daa(arg1.b, eflags)
    arg1.b = temp0_1
    *arg1 += arg3.b - 2
    eax_1 = arg5 - 1
    *esi_1 += eax_1.b
    char temp4_1 = *0x42444d4c
    *0x42444d4c += arg3.b - 2
    cond:2 = temp4_1 == neg.b(arg3.b - 2)

*((arg4 - 2) * 3 + 0x61)
*((arg4 - 2) * 3 + 0x61)
bool c = unimplemented  {imul esi, dword [ebp+ebp*2+0x61], 0x73694c70}

if (not(cond:2))
    char temp8_1 = *eax_1
    *eax_1 += eax_1.b
    c = temp8_1 + eax_1.b u< temp8_1

*eax_1 = adc.b(*eax_1, eax_1.b, c)
*eax_1 += eax_1.b
int32_t* eax_2 = (*eax_1)(eax_1, var_10)
*eax_2 += eax_2
*eax_2 += eax_2.b
*eax_2 += eax_2.b
*eax_2 += eax_2.b
char temp6 = eax_2.b
eax_2.b = eax_2.b
bool c_1 = temp6 u>= 0
int32_t temp7 = *(arg4 + 0x64)
*(arg4 + 0x64) = adc.d(temp7, eax_2, c_1)
bool z = adc.d(temp7, eax_2, c_1) == 0
bool o = unimplemented  {adc dword [ebp+0x66], eax}
void* edi_1 = eax_1
uint32_t ebp_2 = var_c
uint32_t ebx = var_4
void* const __return_addr_1 = __return_addr
uint32_t arg_8
uint32_t eax_3 = arg_8
void arg_c
uint32_t** esp_1 = &arg_c

if (not(z))
    goto label_492945

void* esp_2
TEB* fsbase
int32_t esi_5

if (z)
    ebx = eax_3
    __return_addr_1.b = 1
    int32_t* eax_5
    eax_5, __return_addr_1 = sub_492e0c(&data_4926b8, __return_addr_1)
    *(ebp_2 - 8) = eax_5
    arg_8 = ebp_2
    arg7 = j_sub_40443c
    __return_addr = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &__return_addr
    var_4 = var_10
    var_8 = *(ebp_2 - 8)
    esp_1 = &var_8
label_492945:
    __return_addr_1.b = 1
    char eax_8
    eax_8, ebp_2, esi_5 = sub_488ea4(ebx, __return_addr_1, 0)
    *(ebp_2 - 1) = eax_8
    eax_3 = *(ebp_2 - 8)
label_492954:
    sub_49299c(eax_3, esi_5)
    (*(*edi_1 + 8))()
    eax_3 = 0
    __return_addr_1 = *esp_1
    esp_1[2]
    esp_2 = &esp_1[3]
else
    esi_5 = __outsd(__return_addr_1.w, *var_10, var_10, eflags)
    int32_t temp0_3
    temp0_3, edi_1 = __insd(edi_1, __return_addr_1.w, eflags)
    *edi_1 = temp0_3
    
    if (not(o))
        if (adc.d(temp7, eax_2, c_1) u>= temp7 && (not(c_1) || adc.d(temp7, eax_2, c_1) != temp7))
            goto label_492954
        
        char* eax_4 = 0x6c4971b0()
        *eax_4 += eax_4.b
        undefined
    
    ebp_2 += 1
    *(ebx + 0x43e8f845) -= 1
    *eax_3 += eax_3.b
    *(ebx - 0x74387430) += arg7.b
    ebx:1.b = ebx:1.b
    arg_8 = arg7
    esp_2 = &arg_8
    *ebx
    *ebx |= __return_addr_1:1.b
    *(__return_addr_1 + 0x59) = rrc.b(*(__return_addr_1 + 0x59), 0x59, false)
*(fsbase + eax_3) = __return_addr_1
*(esp_2 - 4) = sub_49297f
return sub_403c68(*(ebp_2 - 8))
