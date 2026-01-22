// 函数: sub_45a9e0
// 地址: 0x45a9e0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t var_28 = *arg5
void var_24
void* edi = &var_24
void* esi_1 = &arg5[1]
*edi = *esi_1
void* edi_1 = edi + 4
void* esi_2 = esi_1 + 4
*edi_1 = *esi_2
*(edi_1 + 4) = *(esi_2 + 4)
void* esi_5 = arg2
uint32_t eax
uint32_t var_8 = eax
int32_t* edi_4 = arg4

if (arg6 == 0 || *(zx.d(arg6) + 0x4ab868) != *(esi_5 + 0x61))
    if (*(esi_5 + 0x175) != 0 && *(esi_5 + 0x179) != 0)
        int32_t var_c_1 = (*(**(esi_5 + 0x78) + 0x10))()
        int32_t var_10_1 = (*(**(esi_5 + 0x78) + 0x10))()
        int32_t var_14_1 = (*(**(esi_5 + 0x78) + 0x10))()
        int32_t var_18_1 = (*(**(esi_5 + 0x78) + 0x10))()
        
        if ((*(esi_5 + 0x61) & 4) == 0)
            if ((*(esi_5 + 0x61) & 1) == 0)
                int32_t eax_17 = MulDiv(*(esi_5 + 0x165), *arg1, *(esi_5 + 0x175))
                int32_t edx_9 = var_14_1 s>> 1
                bool c_1 = unimplemented  {sar edx, 0x1}
                
                if (var_14_1 s>> 1 s< 0)
                    edx_9 = adc.d(edx_9, 0, c_1)
                
                var_c_1 = eax_17 - edx_9
        else if ((*(esi_5 + 0x61) & 1) == 0)
            var_c_1 = *arg1 - (*(esi_5 + 0x175) - *(esi_5 + 0x165))
        else
            var_14_1 = *arg1 - (*(esi_5 + 0x175) - *(esi_5 + 0x165))
        
        if ((*(esi_5 + 0x61) & 8) == 0)
            if ((*(esi_5 + 0x61) & 2) == 0)
                int32_t eax_26 = MulDiv(*(esi_5 + 0x169), arg1[1], *(esi_5 + 0x179))
                int32_t edx_15 = var_18_1 s>> 1
                bool c_2 = unimplemented  {sar edx, 0x1}
                
                if (var_18_1 s>> 1 s< 0)
                    edx_15 = adc.d(edx_15, 0, c_2)
                
                var_10_1 = eax_26 - edx_15
        else if ((*(esi_5 + 0x61) & 2) == 0)
            var_10_1 = arg1[1] - (*(esi_5 + 0x179) - *(esi_5 + 0x169))
        else
            var_18_1 = arg1[1] - (*(esi_5 + 0x179) - *(esi_5 + 0x169))
        
        if (arg3 != 0)
            if (0 != (5 & *(esi_5 + 0x61)))
                int32_t eax_32 = MulDiv(*(esi_5 + 0x16d), *arg1, *(esi_5 + 0x175))
                int32_t edx_17 = var_14_1 s>> 1
                bool c_3 = unimplemented  {sar edx, 0x1}
                
                if (var_14_1 s>> 1 s< 0)
                    edx_17 = adc.d(edx_17, 0, c_3)
                
                var_c_1 = eax_32 - edx_17
            
            if (0 != (0xa & *(esi_5 + 0x61)))
                int32_t eax_38 = MulDiv(*(esi_5 + 0x171), arg1[1], *(esi_5 + 0x179))
                int32_t edx_19 = var_18_1 s>> 1
                bool c_4 = unimplemented  {sar edx, 0x1}
                
                if (var_18_1 s>> 1 s< 0)
                    edx_19 = adc.d(edx_19, 0, c_4)
                
                var_10_1 = eax_38 - edx_19
        
        eax, ebp_1, esi_5, edi_4 =
            sub_465420(var_10_1, var_c_1, *(esi_5 + 0x78), 1, var_18_1, var_14_1)
    
    if (ebp_1[5].b != 0)
        goto label_45abd5
else
label_45abd5:
    ebp_1[-4] = edi_4[2] - *edi_4
    
    if (ebp_1[-4] s< 0)
        ebp_1[-4] = (*(**(esi_5 + 0x78) + 0x10))()
    else
        char eax_45 = ebp_1[5].b - 3
        
        if (eax_45 u< 2)
            ebp_1[-4] = (*(**(esi_5 + 0x78) + 0x10))()
        else if (eax_45 == 3)
            ebp_1[-4] = (*(**(esi_5 + 0x78) + 0x10))()
    
    ebp_1[-5] = edi_4[3] - edi_4[1]
    
    if (ebp_1[-5] s< 0)
        ebp_1[-5] = (*(**(esi_5 + 0x78) + 0x10))()
    else
        char eax_51 = ebp_1[5].b - 1
        
        if (eax_51 u< 2)
            ebp_1[-5] = (*(**(esi_5 + 0x78) + 0x10))()
        else if (eax_51 == 5)
            ebp_1[-5] = (*(**(esi_5 + 0x78) + 0x10))()
    
    ebp_1[-2] = *edi_4
    ebp_1[-3] = edi_4[1]
    
    switch (zx.d(ebp_1[5].b))
        case 1
            edi_4[1] += ebp_1[-5]
        case 2
            edi_4[3] -= ebp_1[-5]
            ebp_1[-3] = edi_4[3]
        case 3
            *edi_4 += ebp_1[-4]
        case 4
            edi_4[2] -= ebp_1[-4]
            ebp_1[-2] = edi_4[2]
        case 6
            ebp_1[-2] = *(esi_5 + 0x40)
            ebp_1[-3] = *(esi_5 + 0x44)
            (*(*ebp_1[-1] + 0xac))(&ebp_1[-9], edi_4, &ebp_1[-5], &ebp_1[-4], &ebp_1[-3])
    
    void* esi_6
    int32_t* edi_5
    ebp_1, esi_6, edi_5 = sub_465420(ebp_1[-3], ebp_1[-2], *(esi_5 + 0x78), 1, ebp_1[-5], ebp_1[-4])
    int32_t eax_74 = (*(**(esi_6 + 0x78) + 0x10))()
    
    if (eax_74 == ebp_1[-4])
        eax = (*(**(esi_6 + 0x78) + 0x10))()
    
    if (eax_74 != ebp_1[-4] || eax != ebp_1[-5])
        switch (zx.d(ebp_1[5].b))
            case 1
                eax = (*(**(esi_6 + 0x78) + 0x10))()
                edi_5[1] -= ebp_1[-5] - eax
            case 2
                eax = (*(**(esi_6 + 0x78) + 0x10))()
                edi_5[3] += ebp_1[-5] - eax
            case 3
                eax = (*(**(esi_6 + 0x78) + 0x10))()
                *edi_5 -= ebp_1[-4] - eax
            case 4
                eax = (*(**(esi_6 + 0x78) + 0x10))()
                edi_5[2] += ebp_1[-4] - eax
            case 5
                int32_t eax_81 = (*(**(esi_6 + 0x78) + 0x10))()
                edi_5[2] += ebp_1[-4] - eax_81
                eax = (*(**(esi_6 + 0x78) + 0x10))()
                edi_5[3] += ebp_1[-5] - eax

*ebp_1
