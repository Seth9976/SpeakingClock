// 函数: sub_410858
// 地址: 0x410858
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ecx
int32_t var_30c = ecx

if ((*(arg2 + 1) & 0x20) == 0)
    sub_410400(0x80070057)

int16_t eax = *arg2
char i_2

if ((eax & 0xfff) != 0xc)
    i_2 = sub_410400(VariantCopy(arg1, arg2))
else
    SAFEARRAY* psa
    
    if ((eax:1.b & 0x40) == 0)
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
            sub_410400(SafeArrayGetLBound(psa, edi_1 + 1, esi_1 + 4))
            int32_t plUbound
            sub_410400(SafeArrayGetUBound(psa, edi_1 + 1, &plUbound))
            *esi_1 = plUbound - *(esi_1 + 4) + 1
            edi_1 += 1
            esi_1 = &(*esi_1)[1]
            i = ebx_3
            ebx_3 -= 1
        while (i != 1)
    
    SAFEARRAY* psa_1 = SafeArrayCreate(VT_VARIANT, cDims, &rgsabound)
    
    if (psa_1 == 0)
        ebp_1 = sub_410158()
    
    void* edx_4 = sub_4107b0(ebp_1[-0xc1])
    *ebp_1[-0xc1] = 0x200c
    *(ebp_1[-0xc1] + 8) = psa_1
    int32_t ebx_5 = ebp_1[-0xc4] - 1
    
    if (ebx_5 s>= 0)
        int32_t i_3 = ebx_5 + 1
        void* eax_20 = &ebp_1[-0xbf]
        edx_4 = &ebp_1[-0x40]
        int32_t i_1
        
        do
            *edx_4 = *eax_20
            edx_4 += 4
            eax_20 += 8
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    do
        int32_t* var_334_4 = ebp_1
        int32_t ebx_7 = ebp_1[-0xc4] - 1
        char eax_22
        int32_t edx_5
        eax_22, edx_5 = sub_4107cc(ebx_7, edx_4)
        
        if (eax_22 != 0)
            sub_410400(SafeArrayPtrOfIndex(ebp_1[-0xc5], &ebp_1[-0x40], &ebp_1[-0xc6]))
            sub_410400(SafeArrayPtrOfIndex(psa_1, &ebp_1[-0x40], &ebp_1[-0xc7]))
            ebp_1[-0xc6]
            ebp_1[-0xc7]
            edx_5 = ebp_1[-0xc2]()
        
        int32_t* var_334_7 = ebp_1
        i_2, edx_4 = sub_4107fc(ebx_7, edx_5)
    while (i_2 != 0)

*ebp_1
return i_2
