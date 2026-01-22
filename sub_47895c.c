// 函数: sub_47895c
// 地址: 0x47895c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t result = 0
int32_t ecx

if (*(arg1 + 8) != 0 && sub_433cec(ecx) != 0)
    result = zx.d(*(arg1 + 0x28))
    
    if (result.b == 0)
        (*(*arg2 + 0x44))()
        int32_t pt
        int32_t pt_2
        sub_45a3b8(arg2, &pt, *(arg1 + 4), &pt_2)
        pt = pt_2
        int32_t var_20
        int32_t eax_4 = var_20
        int32_t pt_1
        sub_45a3b8(arg2, &pt_1, *(arg1 + 4), &pt_2)
        pt_1 = pt_2
        int32_t var_38 = var_20
        (*(**(arg1 + 4) + 0x44))(pt, eax_4, pt_1, var_38)
        RECT lprc
        int32_t var_1c
        sub_418a64(lprc.right - *(arg1 + 0x14), *(arg1 + 0x10), *(arg1 + 0xc), &var_1c, 
            lprc.bottom - *(arg1 + 0x18))
        lprc.left = var_1c
        var_30
        void* edi_1 = &var_30
        void var_18
        void* esi_1 = &var_18
        *edi_1 = *esi_1
        void* edi_2 = edi_1 + 4
        void* esi_2 = esi_1 + 4
        *edi_2 = *esi_2
        *(edi_2 + 4) = *(esi_2 + 4)
        int32_t var_48_4 = eax_4
        
        if (PtInRect(&lprc, pt) != 0)
            int32_t var_48_5 = var_38
            
            if (PtInRect(&lprc, pt_1) != 0)
                return 0
        
        result.b = 1

return result
