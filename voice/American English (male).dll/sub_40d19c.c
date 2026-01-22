// 函数: sub_40d19c
// 地址: 0x40d19c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ecx
int32_t var_30c = ecx
VARIANT* pvargDest = arg1

if ((*(arg2 + 1) & 0x20) == 0)
    sub_40cddc(0x80070057)

arg1.w = *arg2
char i_2

if ((arg1.w & 0xfff) != 0xc)
    i_2 = sub_40cddc(VariantCopy(pvargDest, arg2))
else
    SAFEARRAY* psa
    
    if ((arg1:1.b & 0x40) == 0)
        psa = *(arg2 + 8)
    else
        psa = **(arg2 + 8)
    
    uint32_t cDims = zx.d(*psa)
    SAFEARRAYBOUND rgsabound[0x60]
    
    if (cDims - 1 s>= 0)
        int32_t ebx_3 = cDims
        int32_t edi_1 = 0
        SAFEARRAYBOUND (* esi_1)[0x60] = &rgsabound
        int32_t i
        
        do
            sub_40cddc(SafeArrayGetLBound(psa, edi_1 + 1, esi_1 + 4))
            int32_t plUbound
            sub_40cddc(SafeArrayGetUBound(psa, edi_1 + 1, &plUbound))
            *esi_1 = plUbound - *(esi_1 + 4) + 1
            edi_1 += 1
            esi_1 = &(*esi_1)[1]
            i = ebx_3
            ebx_3 -= 1
        while (i != 1)
    
    SAFEARRAY* psa_1 = SafeArrayCreate(VT_VARIANT, cDims, &rgsabound)
    
    if (psa_1 == 0)
        ebp_1 = sub_40cb34()
    
    void* edx_4 = sub_40d0f4(ebp_1[-0xc1])
    *ebp_1[-0xc1] = 0x200c
    *(ebp_1[-0xc1] + 8) = psa_1
    int32_t ebx_5 = ebp_1[-0xc4] - 1
    
    if (ebx_5 s>= 0)
        int32_t i_3 = ebx_5 + 1
        void* eax_19 = &ebp_1[-0xbf]
        edx_4 = &ebp_1[-0x40]
        int32_t i_1
        
        do
            *edx_4 = *eax_19
            edx_4 += 4
            eax_19 += 8
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    do
        int32_t* var_334_4 = ebp_1
        int32_t ebx_7 = ebp_1[-0xc4] - 1
        char eax_21
        int32_t edx_5
        eax_21, edx_5 = sub_40d110(ebx_7, edx_4)
        
        if (eax_21 != 0)
            sub_40cddc(SafeArrayPtrOfIndex(ebp_1[-0xc5], &ebp_1[-0x40], &ebp_1[-0xc6]))
            sub_40cddc(SafeArrayPtrOfIndex(psa_1, &ebp_1[-0x40], &ebp_1[-0xc7]))
            ebp_1[-0xc6]
            ebp_1[-0xc7]
            edx_5 = ebp_1[-0xc2]()
        
        int32_t* var_334_7 = ebp_1
        i_2, edx_4 = sub_40d140(ebx_7, edx_5)
    while (i_2 != 0)

*ebp_1
return i_2
