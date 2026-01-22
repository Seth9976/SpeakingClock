// 函数: sub_48c73e
// 地址: 0x48c73e
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char* eax = arg1 - 1
char temp1 = *arg5
*arg5 += eax.b
char** var_8
char* var_4
int32_t eflags
char* entry_ebx
void* esp
void* const __return_addr_1
void* esi_10
void** gsbase
bool c_1
bool z
bool o

if (temp1 + eax.b u>= temp1)
    int16_t temp0_1
    temp0_1, arg6 = __insd(arg6, arg2.w, eflags)
    *arg6 = temp0_1
    uint16_t* esi_4 = __outsd(arg2.w, *(arg5 - 1), arg5 - 1, eflags)
    int32_t esi_5 = __outsb(arg2.w, *esi_4, esi_4, eflags)
    char temp2_1 = *(gsbase + arg4 * 3 + 0x43)
    *(gsbase + arg4 * 3 + 0x43) |= arg2:1.b
    c_1 = false
    z = (temp2_1 | arg2:1.b) == 0
    __return_addr_1 = __outsb(arg2.w, *(gsbase + esi_5), esi_5, eflags)
    
    if (z)
        esp = &__return_addr | *(gsbase + arg6 + 0x73)
        z = (&__return_addr | *(gsbase + arg6 + 0x73)) == 0
        
        if (z)
            if (z)
                char temp8_1 = *__return_addr_1
                *__return_addr_1 += eax.b - 1
                z = temp8_1 == neg.b(eax.b - 1)
                goto label_48c8af
            
            *(arg3 + 0x67)
            bool c_4 = unimplemented  {imul esp, dword [ecx+0x67], 0x6c616e6f}
            bool z_2 = adc.d(*(arg3 + 0x67) * 0x6c616e6f, *(arg6 + 0x73), c_4) == 0
            bool o_2 = unimplemented  {adc esp, dword [edi+0x73]}
            
            if (z_2)
                if (z_2)
                    jump(0x48c92e)
                
                jump(sub_48c7f6+0xd4)
            
            __outsd(arg2.w, *__return_addr_1, __return_addr_1, eflags)
            
            if (o_2)
                jump(0x48c8c9)
            
            jump(sub_48c7f6+0x81)
        
        uint8_t* edi_3
        uint8_t temp0_2
        temp0_2, edi_3 = __insb(arg6, arg2.w, eflags)
        *edi_3 = temp0_2
        uint8_t temp0_3
        temp0_3, arg6 = __insb(edi_3, arg2.w, eflags)
        *arg6 = temp0_3
    label_48c823:
        *(eax + 0x74)
        __return_addr_1 = *(eax + 0x74) * 0x670a6369
        c_1 = unimplemented  {imul esi, dword [eax+0x74], 0x670a6369}
        o = unimplemented  {imul esi, dword [eax+0x74], 0x670a6369}
        
        if (not(c_1))
            goto label_48c8a0
        
        *(esp - 4) = esp
        esp -= 4
        __return_addr_1 = __outsd(arg2.w, *__return_addr_1, __return_addr_1, eflags)
        
        if (o)
            *(arg3 + 0x67)
            char temp20 = *(arg4 + (arg3 << 1) + 0x44) | arg3.b
            *(arg4 + (arg3 << 1) + 0x44) = temp20
            
            if (temp20 u< 0)
                jump(sub_48c7f6+0xf5)
            
            jump(sub_48c7f6+0x94)
    else
        if (z)
            int16_t temp0_4
            temp0_4, eflags = __arpl_memw_gpr16(*arg2, arg3.w)
            *arg2 = temp0_4
        label_48c8a0:
            *(gsbase + eax) = &eax[*(gsbase + eax)]
            *eax += eax.b
            *arg2 += arg3.b
            *eax += eax.b
            eax[(arg3 << 3) + 0x74060048] += arg3.b
            esi_10 = __return_addr_1 - 1
            goto label_48c8b2
        
        var_4 = entry_ebx
        esp = &var_4
        
        if (not(z))
            if (z)
                goto label_48c823
            
            goto label_48c7c0
        
        esp = &var_8:3
        z = &var_4 == 1
        o = add_overflow(&var_4, 0xffffffff)
    
label_48c830:
    
    if (z)
        goto label_48c83f
    
    goto label_48c834

uint16_t* esi_1 = __outsd(arg2.w, *(arg5 - 1), arg5 - 1, eflags)
__return_addr_1 = __outsb(arg2.w, *esi_1, esi_1, eflags)
char* temp3_1 = eax
eax |= 0x72426673
c_1 = false
z = (temp3_1 | 0x72426673) == 0
o = false

if (z)
    __builtin_strncpy(&var_4, "Bitm", 4)
    arg6 = var_4
    __return_addr_1 = __return_addr
    arg4 = arg9
    entry_ebx = arg10
    arg2 = arg11
    arg3 = arg12
    eax = arg13
    void arg_1c
    esp = &arg_1c
    
    if (z)
        goto label_48c823
    
label_48c7c0:
    *(esp - 4) = 0x546d7406
    esp -= 4
    goto label_48c7c5

int16_t es
var_4 = zx.d(es)
esp = &var_4

if (z)
    bool cond:9
    
    if (z)
    label_48c83f:
        int32_t eax_3 = eax | 0x42747367
        cond:9 = eax_3 == 0
        uint16_t* esi_7 = __outsd(arg2.w, *__return_addr_1, __return_addr_1, eflags)
        
        if (eax_3 == 0)
            goto label_48c8bb
        
        __outsd(arg2.w, *esi_7, esi_7, eflags)
        int16_t* edi_4
        int16_t temp0_5
        temp0_5, edi_4 = __insd(arg6, arg2.w, eflags)
        *edi_4 = temp0_5
        
        if (esp == 1)
            jump(0x48c85c)
        
        jump(0x48c84e)
    
label_48c834:
    
    if (not(c_1))
        unimplemented  {enter 0x48, 0x6}
    label_48c8af:
        
        if (z)
            int32_t temp18 = *(gsbase + esp + 0x45) | __return_addr_1
            *(gsbase + esp + 0x45) = temp18
            
            if (temp18 s< 0)
                jump(sub_48c8fe+0x92)
            
            jump(sub_48c8fe+0x1e)
        
        esi_10 = __return_addr_1 - 1
    label_48c8b2:
        uint16_t* esi_11 = __outsd(arg2.w, *esi_10, esi_10, eflags)
        uint16_t* esi_12 = __outsb(arg2.w, *esi_11, esi_11, eflags)
        char temp19_1 = *(gsbase + esp + 0x53) | arg2:1.b
        *(gsbase + esp + 0x53) = temp19_1
        cond:9 = temp19_1 == 0
        
        if (temp19_1 != 0)
            __outsb(arg2.w, *esi_12, esi_12, eflags)
            *(esp - 4) = 0x444d4c08
            
            if (temp19_1 u< 0)
                jump(sub_48c8fe+0x97)
            
            jump(sub_48c7f6+0x13e)
        
    label_48c8bb:
        *(arg4 + 0x6e)
        
        if (cond:9)
            jump(sub_48c8fe+0x27)
        
        jump(0x48c8c1)
    
    *(esp - 4) = esp
    __outsd(arg2.w, *__return_addr_1, __return_addr_1, eflags)
else
    var_8 = &var_4
    esp = &var_8
label_48c7c5:
    *(arg4 + 8)
    arg4 = *(arg4 + 8) * 0x47444d4c
    c_1 = unimplemented  {imul ebp, dword [ebp+0x8], 0x47444d4c}
    o = unimplemented  {imul ebp, dword [ebp+0x8], 0x47444d4c}
    
    if (c_1)
        goto label_48c830
    
    if (not(o))
        char temp21_1 = *entry_ebx
        *entry_ebx += eax.b - 1
        bool c_3 = temp21_1 + eax.b - 1 u< temp21_1
        int32_t temp22_1 = *(esp + (arg3 << 1) + 0x4d)
        *(esp + (arg3 << 1) + 0x4d) = adc.d(temp22_1, arg2, c_3)
        
        if (adc.d(temp22_1, arg2, c_3) u< temp22_1
                || (c_3 && adc.d(temp22_1, arg2, c_3) == temp22_1))
            jump(0x48c842)
        
        jump(sub_48c683+0x15e)

if (o)
    jump(sub_48c7f6+0x97)

jump(0x48c83b)
