// 函数: sub_47bb74
// 地址: 0x47bb74
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t result = *(arg2 + 4)

if (result == arg1[0x66])
    void* esi_1 = *(arg2 + 8)
    
    if (arg1 != esi_1)
        if (*(esi_1 + 0x1a0) != 0 && arg1[0x68].b != 0)
            arg1[0x68].b = 0
            *(arg1 + 0x1b2) = 0
            
            if (sub_403df4((*(*arg1 + 0x3c))(), &data_468718) != 0)
                struct _EXCEPTION_REGISTRATION_RECORD* eax_4
                struct _EXCEPTION_REGISTRATION_RECORD* ecx_1
                eax_4, ecx_1 = (*(*arg1 + 0x3c))()
                sub_469170(eax_4, 0, ecx_1)
            
            (*(*arg1 + 0x80))()
        
        result = zx.d(*(esi_1 + 0x1a2))
        *(arg1 + 0x1a2) = result.b

return result
