// 函数: sub_4779c0
// 地址: 0x4779c0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* result = arg1

if (*(result + 0x30) != 0)
    int32_t esi_2 = sub_474128(data_4b1ce4) - 1
    int32_t __saved_ebp
    void* edx
    
    if (esi_2 s< 0)
    label_477a36:
        int32_t* var_18_3 = &__saved_ebp
        result = sub_477928(0, edx)
    else
        int32_t esi_3 = esi_2 + 1
        int32_t edi_1 = 0
        
        while (true)
            BOOL eax_3
            eax_3, edx = sub_474114(data_4b1ce4, edi_1)
            BOOL ebx_1 = eax_3
            
            if (*(ebx_1 + 0x57) != 0)
                if (*(ebx_1 + 0x1c4) == 0)
                label_477a27:
                    int32_t* var_18_2 = &__saved_ebp
                    eax_3.b = 1
                    result = sub_477928(eax_3.b, edx)
                    break
                
                if (sub_45fc28(ebx_1).b == 0)
                    goto label_477a27
                
                eax_3, edx = IsChild(sub_45f888(ebx_1), *(ebx_1 + 0x1c4))
                
                if (eax_3 == 0)
                    goto label_477a27
            
            edi_1 += 1
            int32_t temp0_1 = esi_3
            esi_3 -= 1
            
            if (temp0_1 == 1)
                goto label_477a36

return result
