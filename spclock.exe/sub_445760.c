// 函数: sub_445760
// 地址: 0x445760
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char* eax
eax.b = *arg4
void* esi = &arg4[1]
uint8_t* var_4 = arg5
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
*eax += eax.b
eax[0xc004457] += arg2:1.b
*eax += eax.b
char temp1 = eax.b
void* entry_ebx
eax.b += entry_ebx.b
*eax = adc.b(*eax, eax.b, temp1 + entry_ebx.b u< temp1)
eax.b = 0x3e
*(esi + arg5 + 0x3ec00040) += entry_ebx:1.b
void* eax_2
eax_2:1.b = (&eax[2]):1.b + (&eax[2]).b
*(eax_2 + 0x403f) += entry_ebx:1.b
*(&var_4:1 + arg5) += entry_ebx.b
void* eax_4 = var_4
*(eax_4 + 0x12004033) += eax_4:1.b
var_4 = &__return_addr:2
void* esi_1 = esi + 1
bool cond:0 = esi == 0xffffffff
bool cond:1 = esi + 1 s< 0
*(arg3 + 0x44)
void* ebp = *(arg3 + 0x44) * 0x6f6c6169
bool c_1 = unimplemented  {imul ebp, dword [ebp+0x44], 0x6f6c6169}
bool o = unimplemented  {imul ebp, dword [ebp+0x44], 0x6f6c6169}
uint8_t* var_6 = arg5
int32_t* esp_1 = &var_6

while (true)
    int32_t eflags
    void* esp_12
    
    if (c_1)
        uint16_t* esi_2 = esp_1[1]
        ebp = esp_1[2]
        entry_ebx = esp_1[4]
        arg2 = esp_1[5]
        arg1 = esp_1[6]
        eax_4 = esp_1[7]
        uint8_t temp0_1
        temp0_1, arg5 = __insb(*esp_1, arg2.w, eflags)
        *arg5 = temp0_1
        esi_1 = __outsd(arg2.w, *esi_2, esi_2, eflags)
        esp_1[7] = arg5
        esp_12 = &esp_1[7]
        goto label_445825
    
    if (o)
        break
    
    if (c_1)
        *(eax_4 + 0x5c)
        int32_t eax_20 = (*(eax_4 + 0x58))()
        *esp_1
        return eax_20
    
    *(eax_4 + 0x44) = adc.b(*(eax_4 + 0x44), entry_ebx.b, c_1)
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *eax_4 += eax_4.b
    *(eax_4 + (entry_ebx << 1)) += arg2.b
    *(eax_4 * 2) += arg1.b
    *eax_4 += eax_4.b
    *(esp_1 - 3) = eax_4
    *(esp_1 - 7) = arg1
    *(esp_1 - 0xb) = arg2
    *(esp_1 - 0xf) = entry_ebx
    *(esp_1 - 0x13) = esp_1 - 0xf
    *(esp_1 - 0x17) = ebp
    *(esp_1 - 0x1b) = esi_1
    *(esp_1 - 0x1f) = arg5
    *(esp_1 - 0x23) = arg5
    *(eax_4 - 0x43ffbfc2) += arg2:1.b
    void* eax_5
    eax_5.b = (eax_4 + 1).b * 2
    void* eax_6
    eax_6:1.b = (eax_5 + 1):1.b + (eax_5 + 1).b
    *(eax_6 + 0x403f) += entry_ebx:1.b
    *(esp_1 - 0x22 + arg5) += entry_ebx.b
    *esi_1 += arg2.b
    *(esp_1 - 0x1c) = esp_1 - 0x18
    cond:0 = esi_1 == 0xffffffff
    cond:1 = esi_1 + 1 s< 0
    *(arg1 + 0x6c)
    int32_t* esp_10 = *(arg1 + 0x6c) * 0x7257676f
    c_1 = unimplemented  {imul esp, dword [ecx+0x6c], 0x7257676f}
    o = unimplemented  {imul esp, dword [ecx+0x6c], 0x7257676f}
    arg5 = *esp_10
    esi_1 = esp_10[1]
    ebp = esp_10[2]
    entry_ebx = esp_10[4]
    arg2 = esp_10[5]
    arg1 = esp_10[6]
    eax_4 = esp_10[7]
    esp_12 = &esp_10[8]
    
    while (true)
        if (o)
            if (not(cond:0))
                esp_12 -= 0x10
                eax_4 = sub_403fcc(arg1, arg2)
            
            sub_403c38(arg1, 0)
            *(eax_4 + 8) = arg1
            *(eax_4 + 4) = (**eax_4)()
            
            if (arg2.b != 0)
                sub_404024(eax_4)
                TEB* fsbase
                fsbase->NtTib.ExceptionList = *esp_12
                esp_12 += 0x10
            
            *esp_12
            *(esp_12 + 4)
            *(esp_12 + 8)
            return eax_4
        
        if (c_1)
            *(esp_12 - 4) = arg5
            esp_1 = esp_12 - 4
            break
        
        if (cond:1)
            cond:0 = esp_12 == 0xffffffff
            cond:1 = esp_12 + 1 s< 0
        else
            esp_1 = esp_12 + 1
            *eax_4 += eax_4.b
        label_445831:
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *eax_4 += eax_4.b
            *(eax_4 + (entry_ebx << 1) + 0x44) += entry_ebx:1.b
            *(eax_4 * 2) += arg1.b
            *eax_4 += eax_4.b
            *(esp_1 - 4) = eax_4
            *(esp_1 - 8) = arg1
            *(esp_1 - 0xc) = arg2
            *(esp_1 - 0x10) = entry_ebx
            *(esp_1 - 0x14) = esp_1 - 0x10
            *(esp_1 - 0x18) = ebp
            *(esp_1 - 0x1c) = esi_1
            *(esp_1 - 0x20) = arg5
            *(esp_1 - 0x24) = arg5
            *(eax_4 - 0x43ffbfc2) += arg2:1.b
            void* eax_8
            eax_8.b = (eax_4 + 1).b * 2
            void* eax_9
            eax_9:1.b = (eax_8 + 1):1.b + (eax_8 + 1).b
            *(eax_9 + 0x403f) += entry_ebx:1.b
            *(esp_1 - 0x23 + arg5) += entry_ebx.b
            *(esp_1 - 0x23)
            *(esi_1 + (entry_ebx << 1) + 0x44) += arg2:1.b
            *esi_1 += arg2.b
            *(esp_1 - 0x22) = esp_1 - 0x1e
            cond:0 = esi_1 == 0xffffffff
            cond:1 = esi_1 + 1 s< 0
            *(ebp + 0x53)
        
        *(arg1 + 0x6c)
        int32_t* esp_21 = *(arg1 + 0x6c) * 0x7257676f
        c_1 = unimplemented  {imul esp, dword [ecx+0x6c], 0x7257676f}
        o = unimplemented  {imul esp, dword [ecx+0x6c], 0x7257676f}
        arg5 = *esp_21
        esi_1 = esp_21[1]
        ebp = esp_21[2]
        entry_ebx = esp_21[4]
        arg2 = esp_21[5]
        arg1 = esp_21[6]
        eax_4 = esp_21[7]
        void* esp_23 = &esp_21[8]
        
        while (true)
            int32_t eax_18
            
            if (o)
            label_445901:
                eax_18 = sub_40401c(eax_4)
            label_445906:
                *esp_23
                *(esp_23 + 4)
                return eax_18
            
            if (not(c_1))
                return sub_445894(eax_4, arg2, arg1) __tailcall
            
            *(esp_23 - 4) = arg5
            esp_12 = esp_23 - 4
        label_445825:
            
            if (not(c_1))
                break
            
            uint16_t* esi_4 = *(esp_12 + 4)
            ebp = *(esp_12 + 8)
            entry_ebx = *(esp_12 + 0x10)
            arg2 = *(esp_12 + 0x14)
            arg1 = *(esp_12 + 0x18)
            eax_4 = *(esp_12 + 0x1c)
            uint8_t temp0_2
            temp0_2, arg5 = __insb(*esp_12, arg2.w, eflags)
            *arg5 = temp0_2
            esi_1 = __outsd(arg2.w, *esi_4, esi_4, eflags)
            *(esp_12 + 0x1c) = arg5
            esp_23 = esp_12 + 0x1c
            
            if (c_1)
                *(eax_4 - 0x3974031e) = rol.d(*(eax_4 - 0x3974031e), arg1.b)
                eax_18 = sub_403c58(arg1, arg2)
                
                if (entry_ebx.b s<= 0)
                    goto label_445906
                
                eax_4 = esi_1
                goto label_445901

goto label_445831
