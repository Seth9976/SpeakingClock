// 函数: sub_4a2a8b
// 地址: 0x4a2a8b
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg3.b -= *arg2
void* entry_ebx
char temp1 = *(arg5 + 0x6f) | (arg1 + entry_ebx:1.b)
*(arg5 + 0x6f) = temp1

if (temp1 u< 0)
    goto label_4a2b04

uint16_t* var_4_1 = entry_ebx
int32_t var_8_1 = 0x17776f
bool c_1 = arg3 u< *arg2
char temp4_1 = *(entry_ebx + 0x74)
*(entry_ebx + 0x74) = adc.b(temp4_1, arg2.b, c_1)
bool c_2 = adc.b(temp4_1, arg2.b, c_1) u< temp4_1 || (c_1 && adc.b(temp4_1, arg2.b, c_1) == temp4_1)
bool z_1 = adc.b(temp4_1, arg2.b, c_1) == 0
uint8_t* edi_1 = 0x17776f
arg4 = __return_addr
entry_ebx = arg6
int32_t* edx = arg7
char* eax = arg9
void arg_18
void* esp_1 = &arg_18

if (z_1)
    *eax = &arg_18
    goto label_4a2b15

int32_t eflags_1
int16_t temp0_1
temp0_1, eflags_1 = __arpl_memw_gpr16(*(arg4 + 0x78), edx.w)
*(arg4 + 0x78) = temp0_1
void* esi_6

if (z_1)
    esi_6 = __outsd(edx.w, *var_4_1, var_4_1, eflags_1)
else
    void* temp5_1 = entry_ebx
    entry_ebx += 1
    uint8_t* edi_2
    uint8_t temp0_2
    temp0_2, edi_2 = __insb(0x17776f, edx.w, eflags_1)
    *edi_2 = temp0_2
    *(entry_ebx + 0x6b)
    esp_1 = *(entry_ebx + 0x6b) * 0x6c44540c
    bool c_3 = unimplemented  {imul esp, dword [ebx+0x6b], 0x6c44540c}
    
    if (temp5_1 + 1 s< 0)
        goto label_4a2aff
    
    uint16_t* esi_1 = __outsb(edx.w, *var_4_1, var_4_1, eflags_1)
    uint16_t* esi_3 = __outsw(edx.w, *esi_1, esi_1, eflags_1) + 1
    uint16_t* esi_4 = __outsd(edx.w, *esi_3, esi_3, eflags_1)
    
    if (c_3)
        *edx
        goto label_4a2b2d
    
    eax.b = eax.b
    __out_dx_al(edx.w, eax.b, eflags_1)
    *((edx << 2) + 0x40c80047) += eax.b
    entry_ebx += 1
    char temp0_3
    char temp1_1
    temp0_3, temp1_1, eflags_1 = __aam_immb(0x2a, entry_ebx.b)
    eax.b = temp0_3
    eax:1.b = temp1_1
    edx -= 1
    edi_2[1] += eax.b
    eax.b |= 0x54
    c_2 = false
    void* temp9_1 = esp_1
    esp_1 += 1
    uint8_t temp0_4
    temp0_4, edi_1 = __insb(&edi_2[1], edx.w, eflags_1)
    *edi_1 = temp0_4
    
    if (temp9_1 + 1 s< 0)
        *(arg4 - 0x7b4503bb) -= 1
        *edx
        goto label_4a2b2d
    
    uint16_t* esi_5 = __outsb(edx.w, *esi_4, esi_4, eflags_1)
    esi_6 = __outsw(edx.w, *esi_5, esi_5, eflags_1)

uint16_t* esi_8 = __outsd(edx.w, *(esi_6 + 1), esi_6 + 1, eflags_1)

if (c_2)
    int32_t eflags_2
    char temp0_7
    char temp1_2
    temp0_7, temp1_2, eflags_2 = __aam_immb(0, edx.b)
    char* eax_5
    eax_5.b = temp0_7
    eax_5:1.b = temp1_2
    *eax_5 += eax_5.b
    goto label_4a2b58

*arg8 -= arg8:1.b
char temp7_1 = *(arg4 + 0x680046)
*(arg4 + 0x680046) += eax:1.b
*esp_1
void* esp_2 = esp_1 + 2
uint8_t* edi_4
uint8_t temp0_5
temp0_5, edi_4 = __insb(edi_1, (edx - 1).w, eflags_1)
*edi_4 = temp0_5

if (temp7_1 + eax:1.b s< 0)
    *eax = edx - 1
else
    uint16_t* esi_9 = __outsb((edx - 1).w, *esi_8, esi_8, eflags_1)
    __outsw((edx - 1).w, *esi_9, esi_9, eflags_1)
    *eax += eax.b
    *(esp_2 - 4) = arg4
    arg4 = esp_2 - 4
    *(esp_2 - 8) = 0
    *(esp_2 - 0xc) = 0
    esp_1 = esp_2 - 0xc
label_4a2aff:
    *(esp_1 - 4) = entry_ebx
    void* esp = esp_1 - 4
    entry_ebx = eax
label_4a2b04:
    *(esp - 4) = arg4
    *(esp - 8) = j_sub_40443c
    TEB* fsbase
    *(esp - 0xc) = fsbase->NtTib.ExceptionList
    esp_1 = esp - 0xc
    fsbase->NtTib.ExceptionList = esp_1
label_4a2b15:
    sub_4032cc(0, arg4 - 8)
    sub_409ae8(*(arg4 - 8), arg4 - 4)
    eax = arg4 - 4
    edx = "info.dat"
label_4a2b2d:
    sub_404e54(eax, edx)
    *(arg4 - 4)
    (*(**(*(entry_ebx + 0x360) + 0x298) + 0x68))()
    (*(**(entry_ebx + 0x364) + 0xd4))()
label_4a2b58:
    *(esp_1 + 8)
    esp_2 = esp_1 + 0xc
    fsbase->NtTib.ExceptionList = *esp_1

*(esp_2 - 4) = sub_4a2b76
return sub_404bac(arg4 - 8, 2)
