// 函数: sub_43e808
// 地址: 0x43e808
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
void* result = *(*(arg1 - 4) + 0x30)

if (result != 0)
    result = sub_45b7f4(result)
    
    if (result - 1 s>= 0)
        void* esi_3 = result
        int32_t var_8 = 0
        void* i
        
        do
            int32_t* eax_4 = sub_45b7b8(ebp[-2], ebp[-1])
            result = ebp[2]
            
            if (eax_4 != *(result - 4))
                result = sub_403df4(eax_4, 0x438480)
                
                if (result.b != 0)
                    if ((*(*eax_4 + 0x3c))() != 0
                            && sub_403df4((*(*eax_4 + 0x3c))(), &data_468718) != 0
                            && *((*(*eax_4 + 0x3c))() + 0x95) != 0)
                        struct _EXCEPTION_REGISTRATION_RECORD* eax_14
                        struct _EXCEPTION_REGISTRATION_RECORD* ecx_1
                        eax_14, ecx_1 = (*(*eax_4 + 0x3c))()
                        ebp = sub_469170(eax_14, 0, ecx_1)
                    
                    result = (*(*eax_4 + 0xdc))()
            
            ebp[-1] += 1
            i = esi_3
            esi_3 -= 1
        while (i != 1)

return result
