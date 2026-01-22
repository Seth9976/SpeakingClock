// 函数: sub_40e407
// 地址: 0x40e407
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += 1
*arg1 += arg1.b
char temp3 = *arg1
*arg1 += arg3.b
bool c = temp3 + arg3.b u< temp3
int32_t entry_ebx
int32_t var_4 = entry_ebx
int32_t* esp = &var_4

if (temp3 + arg3.b s>= 0)
    arg1.b = adc.b(arg1.b, 0x24, c)
label_40e485:
    
    if (*esp != 0)
        arg1 = *esp
    label_40e492:
        
        if (arg1[5] != 0)
            char* ebx_1 = *(*esp + 0x14)
            
            if (*ebx_1 == 0)
                esp[2] = 0x4b091c
            else
                esp[2] = 0x4af928
            
            *(ebx_1 + 4)
            int32_t eax_5 = sub_405cb8()
            
            if (eax_5 s>= 0)
                int32_t i_1 = eax_5 + 1
                int32_t esi_4 = 0
                int32_t i
                
                do
                    int32_t edi_1 = esi_4 * 3
                    
                    if (*(*(ebx_1 + 4) + (edi_1 << 3) + 4) != 0)
                        **(*(ebx_1 + 4) + esi_4 * 0x18 + 4) = *(*(ebx_1 + 4) + (edi_1 << 3))
                    else if (*(*(ebx_1 + 4) + (edi_1 << 3) + 0xc) != 0)
                        esp[1] =
                            modu.dp.d(0:(sub_40e43c(*(*(ebx_1 + 4) + esi_4 * 0x18 + 0xc))), 0x3fd)
                        
                        if (*(esp[2] + (esp[1] << 2)) == *(ebx_1 + 4) + (edi_1 << 3))
                            *(esp[2] + (esp[1] << 2)) = *(*(ebx_1 + 4) + (edi_1 << 3))
                    
                    if (*(*(ebx_1 + 4) + (edi_1 << 3)) != 0)
                        *(*(*(ebx_1 + 4) + esi_4 * 0x18) + 4) = *(*(ebx_1 + 4) + (edi_1 << 3) + 4)
                    
                    esi_4 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            sub_405a5c(ebx_1)
            (*esp)[5] = 0
    
    esp[3]
    esp[4]
    esp[5]
    esp[6]
    return 

void* var_8 = arg4
esp = &var_8

if (temp3 == neg.b(arg3.b))
    do
        arg2 = *arg2
        
        if (arg2 == 0)
            break
    while (arg1 != *(arg2 + 4))
    
    var_8 = arg2
    goto label_40e485

int32_t eflags
uint8_t* edi
uint8_t temp0_1
temp0_1, edi = __insb(arg6, arg2.w, eflags)
*edi = temp0_1

if (not(c))
    while (true)
        sub_405080(arg3, arg2, arg1, var_8)
        
        if (*(arg4 - 4) == 0)
            goto label_40e3b7
        
        void* eax_22 = sub_40dc14(*(arg4 - 8), *(arg4 - 4))
        
        if (eax_22 == 0)
            sub_404e54(arg5, *(arg4 - 0xc))
        label_40e3b7:
            TEB* fsbase
            fsbase->NtTib.ExceptionList = var_4
            arg7 = sub_40e3dc
            return sub_40e3bf(arg4) __tailcall
        
        var_8 = *arg5
        sub_405080(eax_22 - 1, 1, *(arg4 - 0xc), arg4 - 0x1c)
        int32_t var_c_2 = *(arg4 - 0x1c)
        int32_t var_10_1 = *(arg4 - 0x14)
        sub_404f1c(arg5, 3)
        void* edi_3 = *(arg4 - 0x10)
        
        if (edi_3 != 0)
            edi_3 = *(edi_3 - 4)
        
        var_8 = arg4 - 0xc
        sub_405080(0x7fffffff, edi_3 + eax_22, *(arg4 - 0xc), var_8)
        
        if ((*(arg4 + 0xc) & 1) == 0)
            sub_404e54(arg5, *(arg4 - 0xc))
            goto label_40e3b7
        
        *(arg4 - 0x18) = *(arg4 - 8)
        
        if (*(arg4 - 0x18) != 0)
            *(arg4 - 0x18) = *(*(arg4 - 0x18) - 4)
        
        var_8 = arg4 - 4
        arg2 = *(arg4 - 0x18) + eax_22
        arg3 = 0x7fffffff
        arg1 = *(arg4 - 4)
else
    var_8.b += entry_ebx.b
    *arg5 += arg3.b
    int32_t edx = arg2 | *(arg4 + (arg3 << 1) + 0x6f)
    
    if (edx == 0)
        uint16_t* esi = __outsb(edx.w, *arg5, arg5, eflags)
        __outsw(edx.w, *esi, esi, eflags)
        *(arg1 + 2) |= (arg1 + 2).b
        *(arg1 + 2) += (arg1 + 2).b
        *(arg1 + 2) += arg1 + 2
        *(arg1 + 2) += (arg1 + 2).b
        char* eax_1
        char ecx_1
        eax_1, ecx_1 = 0x4412519()
        *eax_1 += eax_1.b
        *(arg4 + 0x53560040) += ecx_1
        char* esi_2 = eax_1
        int32_t eax_2 = 0
        
        while (true)
            entry_ebx.b = *esi_2
            
            if (entry_ebx.b == 0)
                break
            
            if (entry_ebx.b s>= 0x41 && entry_ebx.b s<= 0x5a)
                entry_ebx.b |= 0x20
            
            eax_2.b = rol.d(eax_2, 5).b ^ entry_ebx.b
            esi_2 = &esi_2[1]
        
        return 
    
    arg1.b = (arg1 + 2).b + 0x24

goto label_40e492
