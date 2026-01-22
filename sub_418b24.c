// 函数: sub_418b24
// 地址: 0x418b24
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char* esp
void* ebp
int32_t esi_1

while (true)
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    *arg1 += arg1.b
    int32_t eflags
    uint8_t* edi
    uint8_t temp0_1
    temp0_1, edi = __insb(arg6, arg2.w, eflags)
    *edi = temp0_1
    *arg3
    char* eax
    eax.b = 0
    *eax = *eax
    arg7 f- fconvert.t(*eax)
    eax[0xbc00403f] += arg2:1.b
    void* eax_2
    eax_2.b = (&eax[2]).b * 2
    void* eax_3
    eax_3:1.b = (eax_2 + 1):1.b + (eax_2 + 1).b
    int32_t entry_ebx
    *(eax_3 + 0x403f) += entry_ebx:1.b
    *(esp + edi) += entry_ebx.b
    *(eax_3 + 2 + (arg2 << 2)) += arg3.b
    arg3 += 1
    char temp1_1 = *arg2
    *arg2 += arg3.b
    bool c_1 = temp1_1 + arg3.b u< temp1_1
    *(esp - 4) = esp
    *(esp - 8) = arg2
    
    if (c_1)
        return sub_418be4(arg3, arg2) __tailcall
    
    if (edi == 0xffffffff)
        if (not(c_1))
            *((eax_3 + 2) * 3) += entry_ebx:1.b
            *(esp - 8 + &edi[1]) += entry_ebx.b
            char temp3_1 = *(eax_3 + 0x900418f)
            *(eax_3 + 0x900418f) += arg2:1.b
            *(esp - 0xc) = esp - 8
            *(esp - 0x10) = arg2
            esp -= 0x10
            
            if (temp3_1 + arg2:1.b u< temp3_1)
                *(esp + 4) = arg2
                *esp = eax_3 + 3
            else if (edi != 0xfffffffe)
                void* eax_7
                eax_7.b = (eax_3 + 3).b - 0x77
                eax_7.b += 0x24
            else
                uint8_t temp0_3
                temp0_3, arg6 = __insb(&edi[2], arg2.w, eflags)
                *arg6 = temp0_3
                arg1 = *arg3
                continue
            
            ebp = nullptr
            esi_1 = *(*(*esp + 0xc) + 8) - 1
            break
        
        return sub_418b78(eax_3 + 2) __tailcall
    
    void* eax_5
    eax_5.b = __in_al_dx(arg2.w, eflags)
    *(esp - 0xc) = arg3
    *(esp - 0x10) = entry_ebx
    *(esp - 0x14) = arg5
    *(esp - 0x18) = &edi[1]
    *(arg4 - 4) = arg3
    void* ebx_2 = *(arg4 + 8)
    void* const esi_3
    
    if (arg2 == 0)
        esi_3 = nullptr
    else
        esi_3 = sub_418b84(arg2, ebx_2)
    
    void* const ebx_3
    
    if (*(arg4 - 4) == 0)
        ebx_3 = nullptr
    else
        ebx_3 = sub_418b84(*(arg4 - 4), ebx_2)
    
    char* eax_23
    
    if (esi_3 != 0)
        if (ebx_3 != 0)
            if (sub_403e94(esi_3, ebx_3) == 0)
                eax_23 = *(arg4 - 4)
            else
                eax_23 = arg2
        else
            eax_23 = arg2
    else if (ebx_3 != 0)
        eax_23 = *(arg4 - 4)
    else
        eax_23 = nullptr
    
    *(esp - 0x18)
    *(esp - 0x14)
    *(esp - 0x10)
    *(esp - 0xc)
    *(esp - 8)
    return eax_23

if (esi_1 s>= 0)
    int32_t i_1 = esi_1 + 1
    int32_t edi_2 = 0
    int32_t i
    
    do
        void* eax_12 = sub_41a0f4(*(*esp + 0xc), edi_2)
        
        if (sub_403e94(*(esp + 4), eax_12) != 0)
            char eax_16
            
            if (ebp != 0)
                eax_16 = sub_403e94(eax_12, ebp)
            
            if (ebp == 0 || eax_16 != 0)
                ebp = eax_12
        
        edi_2 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

*esp
*(esp + 4)
*(esp + 8)
*(esp + 0xc)
*(esp + 0x10)
*(esp + 0x14)
return ebp
