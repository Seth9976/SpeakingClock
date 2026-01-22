// 函数: sub_47aad8
// 地址: 0x47aad8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if ((arg4 & 2) == 2)
    if (arg9 == 0)
        arg9 = 1
    else if (arg9 == 1)
        arg9 = 0

int32_t var_1c
sub_418a3c(arg1[2] - *arg1, arg1[3] - arg1[1], &var_1c)
int32_t var_24

if (*(arg3 + 4) == 0)
    sub_418a3c(0, 0, &var_24)
else
    int32_t eax_7 = (*(**(arg3 + 4) + 0x20))()
    sub_418a3c(divs.dp.d(sx.q((*(**(arg3 + 4) + 0x2c))(eax_7)), zx.d(*(arg3 + 0x20))), eax_7, 
        &var_24)

int32_t eax_14 = arg10

if (eax_14 != 0)
    eax_14 = *(eax_14 - 4)

int32_t var_2c
int32_t* esi_5
int32_t* lprc
int32_t var_4c
void var_48

if (eax_14 s<= 0)
    sub_418a64(0, 0, 0, &var_4c, 0)
    *arg5 = var_4c
    void* edi_5 = &arg5[1]
    void* esi_6 = &var_48
    *edi_5 = *esi_6
    void* edi_6 = edi_5 + 4
    void* esi_7 = esi_6 + 4
    *edi_6 = *esi_7
    *(edi_6 + 4) = *(esi_7 + 4)
    lprc = arg5
    esi_5 = arg6
    sub_418a3c(0, 0, &var_2c)
else
    sub_418a64(arg1[2] - *arg1, 0, 0, &var_4c, 0)
    *arg5 = var_4c
    void* edi_1 = &arg5[1]
    void* esi_1 = &var_48
    *edi_1 = *esi_1
    void* edi_2 = edi_1 + 4
    void* esi_2 = esi_1 + 4
    *edi_2 = *esi_2
    *(edi_2 + 4) = *(esi_2 + 4)
    lprc = arg5
    esi_5 = arg6
    HDC hdc = sub_42c73c(arg2)
    int32_t cchText = arg10
    
    if (cchText != 0)
        cchText = *(cchText - 4)
    
    DrawTextA(hdc, sub_405018(arg10), cchText, lprc, arg4 | 0x400)
    sub_418a3c(lprc[2] - *lprc, lprc[3] - lprc[1], &var_2c)
int32_t var_28
int32_t var_20
int32_t var_18
int32_t var_14
int32_t var_10

if (arg9 u>= 2)
    int32_t eax_33 = var_1c
    int32_t edx_17 = (eax_33 - var_24 + 1) s>> 1
    bool c_2 = unimplemented  {sar edx, 0x1}
    
    if ((eax_33 - var_24 + 1) s>> 1 s< 0)
        edx_17 = adc.d(edx_17, 0, c_2)
    
    *esi_5 = edx_17
    int32_t eax_36 = (eax_33 - var_2c + 1) s>> 1
    bool c_3 = unimplemented  {sar eax, 0x1}
    
    if ((eax_33 - var_2c + 1) s>> 1 s< 0)
        eax_36 = adc.d(eax_36, 0, c_3)
    
    var_14 = eax_36
else
    int32_t edx_13 = (var_18 - var_20 + 1) s>> 1
    bool c = unimplemented  {sar edx, 0x1}
    
    if ((var_18 - var_20 + 1) s>> 1 s< 0)
        edx_13 = adc.d(edx_13, 0, c)
    
    esi_5[1] = edx_13
    int32_t eax_32 = (var_18 - var_28 + 1) s>> 1
    bool c_1 = unimplemented  {sar eax, 0x1}
    
    if ((var_18 - var_28 + 1) s>> 1 s< 0)
        eax_32 = adc.d(eax_32, 0, c_1)
    
    var_10 = eax_32

if (var_2c == 0 || var_24 == 0)
    arg7 = 0

int32_t var_34
int32_t var_30

if (arg8 != 0xffffffff)
    if (arg7 s< 0)
        sub_418a3c(var_1c - (arg8 + var_24), var_18 - (arg8 + var_20), &var_34)
        
        if (arg9 u>= 2)
            int32_t eax_72 = var_30 - var_28
            int32_t eax_73 = eax_72 s>> 1
            bool c_7 = unimplemented  {sar eax, 0x1}
            
            if (eax_72 s>> 1 s< 0)
                eax_73 = adc.d(eax_73, 0, c_7)
            
            arg7 = eax_73
        else
            int32_t eax_69 = var_34 - var_2c
            int32_t eax_70 = eax_69 s>> 1
            bool c_6 = unimplemented  {sar eax, 0x1}
            
            if (eax_69 s>> 1 s< 0)
                eax_70 = adc.d(eax_70, 0, c_6)
            
            arg7 = eax_70
else if (arg7 s>= 0)
    sub_418a3c(var_24 + arg7 + var_2c, var_20 + arg7 + var_28, &var_34)
    
    if (arg9 u>= 2)
        int32_t eax_60 = (var_18 - var_30 + 1) s>> 1
        bool c_5 = unimplemented  {sar eax, 0x1}
        
        if ((var_18 - var_30 + 1) s>> 1 s< 0)
            eax_60 = adc.d(eax_60, 0, c_5)
        
        arg8 = eax_60
    else
        int32_t eax_56 = (var_1c - var_34 + 1) s>> 1
        bool c_4 = unimplemented  {sar eax, 0x1}
        
        if ((var_1c - var_34 + 1) s>> 1 s< 0)
            eax_56 = adc.d(eax_56, 0, c_4)
        
        arg8 = eax_56
else
    sub_418a3c(var_24 + var_2c, var_20 + var_28, &var_34)
    
    if (arg9 u>= 2)
        arg8 = divs.dp.d(sx.q(var_18 - var_30), 3)
    else
        arg8 = divs.dp.d(sx.q(var_1c - var_34), 3)
    
    arg7 = arg8

if (arg9 u< 1)
    *esi_5 = arg8
    var_14 = arg8 + var_24 + arg7
else if (arg9 == 1)
    int32_t eax_80 = var_1c - arg8 - var_24
    *esi_5 = eax_80
    var_14 = eax_80 - arg7 - var_2c
else if (arg9 == 2)
    esi_5[1] = arg8
    var_10 = arg8 + var_20 + arg7
else if (arg9 == 3)
    int32_t eax_88 = var_18 - arg8 - var_20
    esi_5[1] = eax_88
    var_10 = eax_88 - arg7 - var_28

*esi_5 += *arg1 + *arg11
esi_5[1] += arg1[1] + *(arg11 + 4)

if (sub_465ac4(sub_4659bc()) == 0)
    return OffsetRect(lprc, *arg1 + var_14 + *arg11, arg1[1] + var_10 + *(arg11 + 4))

return OffsetRect(lprc, *arg1 + var_14, arg1[1] + var_10)
