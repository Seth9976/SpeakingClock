// 函数: sub_4105b8
// 地址: 0x4105b8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if ((*(arg1 + 1) & 0x20) == 0)
    sub_410400(0x80070057)

int16_t eax_2 = *arg1

if ((eax_2 & 0xfff) == 0xc)
    int16_t* edx_1 = arg1
    SAFEARRAY* psa
    
    if ((eax_2:1.b & 0x40) == 0)
        psa = *(arg1 + 8)
    else
        psa = **(arg1 + 8)
    
    uint32_t i_5 = zx.d(*psa)
    
    if (i_5 - 1 s>= 0)
        int32_t i_3 = i_5
        int32_t edi_1 = 0
        void var_304
        void* esi_1 = &var_304
        int32_t i
        
        do
            sub_410400(SafeArrayGetLBound(psa, edi_1 + 1, esi_1 + 4))
            int32_t plUbound
            sub_410400(SafeArrayGetUBound(psa, edi_1 + 1, &plUbound))
            edx_1 = plUbound - *(esi_1 + 4) + 1
            *esi_1 = edx_1
            edi_1 += 1
            esi_1 += 8
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t rgIndices[0x40]
    
    if (i_5 - 1 s>= 0)
        int32_t i_4 = i_5
        void var_300
        void* eax_20 = &var_300
        edx_1 = &rgIndices
        int32_t i_1
        
        do
            *edx_1 = *eax_20
            edx_1 = &edx_1[2]
            eax_20 += 8
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    char i_2
    
    do
        int32_t __saved_ebp
        int32_t* var_32c_3 = &__saved_ebp
        char eax_22
        int32_t edx_4
        eax_22, edx_4 = sub_41052c(i_5 - 1, edx_1)
        
        if (eax_22 != 0)
            int16_t* ppvData
            sub_410400(SafeArrayPtrOfIndex(psa, &rgIndices, &ppvData))
            edx_4 = sub_4107b0(ppvData)
        
        int32_t* var_32c_5 = &__saved_ebp
        i_2, edx_1 = sub_41055c(i_5 - 1, edx_4)
    while (i_2 != 0)

return sub_410400(VariantClear(arg1))
