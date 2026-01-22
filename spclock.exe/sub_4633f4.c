// 函数: sub_4633f4
// 地址: 0x4633f4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t eax_1 = sub_45e2d0(*(arg2 + 0x14))
void* esi_5
int32_t var_20
void var_1c

if (arg1 == 0 || *(arg1 + 0x90) == 0 || eax_1 s< 2)
    int32_t eax_3 = sub_457190(*(arg2 + 0x14))
    sub_418a64(sub_45714c(*(arg2 + 0x14)), 0, 0, &var_20, eax_3)
    *arg3 = var_20
    void* edi_2 = &arg3[1]
    void* esi_1 = &var_1c
    *edi_2 = *esi_1
    void* edi_3 = edi_2 + 4
    void* esi_2 = esi_1 + 4
    *edi_3 = *esi_2
    *(edi_3 + 4) = *(esi_2 + 4)
    esi_5 = arg2
    
    if (eax_1 s> 0)
        if (arg4 == 1)
            arg3[3] = divs.dp.d(sx.q(arg3[3]), 2)
        else if (arg4 == 2)
            int32_t eax_22 = arg3[3]
            int32_t eax_23 = eax_22 s>> 1
            bool c_2 = unimplemented  {sar eax, 0x1}
            
            if (eax_22 s>> 1 s< 0)
                eax_23 = adc.d(eax_23, 0, c_2)
            
            arg3[1] = eax_23
        else if (arg4 == 3)
            arg3[2] = divs.dp.d(sx.q(arg3[2]), 2)
        else if (arg4 == 4)
            int32_t eax_14 = arg3[2]
            int32_t eax_15 = eax_14 s>> 1
            bool c_1 = unimplemented  {sar eax, 0x1}
            
            if (eax_14 s>> 1 s< 0)
                eax_15 = adc.d(eax_15, 0, c_1)
            
            *arg3 = eax_15
else
    int32_t var_8_1 = *(arg1 + 0x40)
    int32_t var_c_1 = *(arg1 + 0x44)
    int32_t eax_26 = *(arg1 + 0x48)
    int32_t edi_7 = eax_26
    int32_t var_10_1 = *(arg1 + 0x4c)
    
    if (arg4 - 3 u< 2)
        edi_7 = eax_26 s>> 1
        bool c_3 = unimplemented  {sar edi, 0x1}
        
        if (eax_26 s>> 1 s< 0)
            edi_7 = adc.d(edi_7, 0, c_3)
    else if (arg4 - 1 u< 2)
        int32_t eax_29 = *(arg1 + 0x4c)
        int32_t eax_30 = eax_29 s>> 1
        bool c_4 = unimplemented  {sar eax, 0x1}
        
        if (eax_29 s>> 1 s< 0)
            eax_30 = adc.d(eax_30, 0, c_4)
        
        var_10_1 = eax_30
    
    if (arg4 == 2)
        var_c_1 += var_10_1
    else if (arg4 == 4)
        var_8_1 += edi_7
    
    sub_418a8c(edi_7, var_c_1, var_8_1, &var_20, var_10_1)
    *arg3 = var_20
    void* edi_10 = &arg3[1]
    void* esi_6 = &var_1c
    *edi_10 = *esi_6
    void* edi_11 = edi_10 + 4
    void* esi_7 = esi_6 + 4
    *edi_11 = *esi_7
    *(edi_11 + 4) = *(esi_7 + 4)
    esi_5 = arg2
return MapWindowPoints(sub_45f888(*(esi_5 + 0x14)), nullptr, arg3, 2)
