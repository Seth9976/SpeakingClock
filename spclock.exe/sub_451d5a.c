// 函数: sub_451d5a
// 地址: 0x451d5a
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eflags
uint16_t* esi_12 = __outsd(arg2.w, *arg5, arg5, eflags)
int16_t* edi
int16_t temp0
temp0, edi = __insd(arg6, arg2.w, eflags)
*edi = temp0
void** entry_ebx
char temp1 = *(entry_ebx + 0x6f) | arg1.b
*(entry_ebx + 0x6f) = temp1
uint16_t* esi = __outsb(arg2.w, *esi_12, esi_12, eflags)
int32_t* eax
void* esi_1
uint8_t* edi_1

if (temp1 == 0)
    void* edi_2
    int16_t es_1
    edi_2, es_1 = __les_gprz_memp(*esi)
    *(arg1 + 0x403f) += entry_ebx:1.b
    *(&__return_addr + edi_2) += entry_ebx.b
    eax.b = (arg1 + 2).b + (arg1 + 2):1.b
    *esi - *edi_2
    esi_1 = esi + 1
    edi_1 = edi_2 + 1
    arg3 += 1
    eax:1.b += entry_ebx:1.b
else
    esi_1 = __outsd(arg2.w, *esi, esi, eflags)
    uint8_t temp0_1
    temp0_1, edi_1 = __insb(edi, arg2.w, eflags)
    *edi_1 = temp0_1
    
    while (true)
        if (temp1 u< 0)
            eax = arg1 + 1
            *(arg4 + entry_ebx + 0x45) += arg3:1.b
            *esi_1 += eax.b
            char temp2_1 = *(arg3 + (eax << 1) + 0x6e) | arg2.b
            *(arg3 + (eax << 1) + 0x6e) = temp2_1
            int16_t temp0_2
            temp0_2, eflags = __arpl_memw_gpr16(*(eax + 0x6f), arg4.w)
            *(eax + 0x6f) = temp0_2
            
            if (temp2_1 u< 0)
                break
            
            *eax
            *eax += &__return_addr
            unimplemented  {sbb eax, 0x80900045}
            bool c_2 = unimplemented  {sbb eax, 0xf010045}
            uint16_t* esi_2 = __outsd(arg2.w, *esi_1, esi_1, eflags)
            __outsb(arg2.w, *esi_2, esi_2, eflags)
            
            if (not(c_2))
                jump(0x451dfc)
            
            jump(sub_45171c+0x66c)
        
        if (temp1 u>= 0)
            uint8_t* edi_10
            uint8_t temp0_3
            temp0_3, edi_10 = __insb(edi_1, arg2.w, eflags)
            *edi_10 = temp0_3
            
            if (temp1 u>= 0)
                jump(sub_45171c+0x56c)
            
            jump(sub_45171c+0x5dc)

char* var_c = arg2
void** var_10 = entry_ebx
void** var_14 = &var_10
uint8_t* var_20 = edi_1
*esi_1 - *edi_1
void* edi_3 = &edi_1[4]
*edi_3 += arg3.b + 1
uint8_t* edi_4 = var_20
char* ebx_1 = var_10
char* edx = var_c
int32_t* eax_4
eax_4.b = eax.b * 2
int32_t* var_4_1 = eax_4
int32_t var_8_1 = arg3
var_c = edx
var_10 = ebx_1
void** var_14_1 = &var_10
void* var_1c_1 = esi_1
var_20 = edi_4
char temp6 = *eax_4
*eax_4 += edx.b
uint8_t** var_24 = &var_20
*(edx + 0x65)
*(edx + 0x65)
bool c_3 = unimplemented  {imul edi, dword [edx+0x65], 0x736e6f43}

if (temp6 != neg.b(edx.b))
    var_24[0x1d]
    var_24[0x1d]
    bool c_4 = unimplemented  {imul ebp, dword [esi+0x74], 0x408d73}
    char eax_5 = adc.b(var_c.b, 0x1e, c_4)
    char temp10 = *ebx_1
    *ebx_1 += eax_5
    bool c_5 = temp10 + eax_5 u< temp10
    char temp11 = (arg4 + 1)[(var_14_1 << 1) + 0x69]
    (arg4 + 1)[(var_14_1 << 1) + 0x69] = adc.b(temp11, var_14_1.b, c_5)
    bool p = unimplemented  {adc byte [ebx+edx*2+0x69], dl}
    
    if (p)
        if (adc.b(temp11, var_14_1.b, c_5) == 0)
            jump(&data_451ee8:2)
        
        jump(0x451e82)
    
    uint16_t* esi_7 = __outsd(var_14_1.w, *var_24, var_24, eflags)
    __outsb(var_14_1.w, *esi_7, esi_7, eflags)
    
    if (adc.b(temp11, var_14_1.b, c_5) u>= temp11
            && (not(c_5) || adc.b(temp11, var_14_1.b, c_5) != temp11))
        jump(0x451e94)
    
    jump("raints")

char* eax_6 = var_c

if (arg4 + 1 s< 0)
    if (not(c_3))
        *(var_24 + 0x53)
        *eax_6 += eax_6.b
        *eax_6 += eax_6.b
        undefined
    
    int16_t ecx_5 = var_10.w + 1
    (arg4 + 1)[(var_14_1 << 1) + 0x550c0046] += var_14_1.b
    eax_6[0x8004653] += ecx_5:1.b
    var_c = arg4 + 1
    char temp14 = *eax_6
    *eax_6 += ecx_5.b
    var_10 = &var_c
    
    if (temp14 + ecx_5.b u< temp14)
        jump(sub_451eec+0xd1)
    
    jump(sub_451eec+0x6a)

void arg_60
*(&arg_60 + (var_24 << 1))
void* esp = *(&arg_60 + (var_24 << 1)) * 0x451d7c
bool c_7 = unimplemented  {imul esp, dword [esp+esi*2+0x68], 0x451d7c}
*eax_6 = adc.b(*eax_6, eax_6.b, c_7)
*(esp + 1)
void* esi_10 = *(esp + 5)
*(esp + 0x11)
char* edx_3 = *(esp + 0x15)
char* ecx_4 = *(esp + 0x19)
char* eax_7 = *(esp + 0x1d)
int32_t ebp_7 = *(esp + 9) + 1
*ecx_4 += eax_7.b
*eax_7 += eax_7.b
*edx_3 += eax_7.b
*eax_7 += eax_7.b
*eax_7 += eax_7.b
*eax_7 += eax_7.b
*edx_3 += eax_7.b
*ecx_4 += ecx_4.b
*(esi_10 + 0x48)

if (ebp_7 == 1)
    jump(sub_451eec+0x37)

jump(0x451ea7)
