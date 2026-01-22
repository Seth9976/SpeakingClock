// 函数: sub_48fcfc
// 地址: 0x48fcfc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_50 = ebx
int32_t esi
int32_t var_54 = esi
int32_t edi
int32_t var_58 = edi
char* var_c = nullptr
int32_t* var_5c = &var_4
int32_t (* var_60)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
char ebx_1 = 0

if (sub_403df4(arg3, 0x48742c) != 0)
    if (arg3[0xc].w != 0)
        ebx_1 = 2
    else
        ebx_1 = 1

sub_404c20(&var_c, arg2)
HDC hDC = GetDC(nullptr)
int32_t* var_68_1 = &var_4
int32_t (* var_6c)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_42c7c4(arg1, hDC)
sub_42c630(arg1)

if (ebx_1 u>= 2)
    int32_t ebx_2
    int32_t esi_2
    
    if (arg3[0xa] == 0)
        ebx_2 = sub_42c570(arg1, arg2)
        esi_2 = sub_42c58c(arg1, arg2)
    else
        SetTextCharacterExtra(sub_42c73c(arg1), arg3[0xa])
        ebx_2 = sub_42c570(arg1, arg2)
        esi_2 = sub_42c58c(arg1, arg2)
    
    int32_t var_44
    sub_406c1c(ebx_2, 0, 0, &var_44, esi_2)
    *arg9 = var_44
    void* edi_3 = &arg9[1]
    void var_40
    void* esi_3 = &var_40
    *edi_3 = *esi_3
    void* edi_4 = edi_3 + 4
    void* esi_4 = esi_3 + 4
    *edi_4 = *esi_4
    *(edi_4 + 4) = *(esi_4 + 4)
    int32_t temp0_1 = divs.dp.d(sx.q(ebx_2), 2)
    int32_t temp0_2 = divs.dp.d(sx.q(esi_2), 2)
    sub_48fb58(&var_4)
    int16_t var_32_1
    
    if (sub_403df4(arg3, 0x48742c) == 0)
        var_32_1 = 0
    else
        var_32_1 = arg3[0xc].w
    
    double var_24
    double var_1c
    
    if (var_32_1 != 0)
        sub_490290(arg9, zx.d(var_32_1))
        int32_t var_7c
        var_7c.t = float.t(var_32_1) * data_49010c / fconvert.t(180f)
        var_1c = fconvert.d(sub_403360(var_7c))
        var_7c.t = float.t(var_32_1) * data_49010c / fconvert.t(180f)
        var_24 = fconvert.d(sub_403350(var_7c))
    else
        var_1c.d = 0
        var_1c:4.d = 0
        var_24.d = 0
        var_24:4.d = 0x3ff00000
    
    char eax_53 = arg3[9].b - 1
    int32_t var_30_1
    
    if (eax_53 u< 2)
        var_30_1 = (zx.d(*(arg3 + 0x19)) u>> 1) - 1
    else
        char temp4_1 = eax_53 - 2
        
        if (temp4_1 u< 4)
            var_30_1 = ((zx.d(*(arg3 + 0x19)) + zx.d(*(arg3 + 0x1a))) u>> 1) - 1
        else
            char temp6_1
            
            if (temp4_1 != 4)
                temp6_1 = eax_53 - 8
            
            if (temp4_1 == 4 || temp6_1 u< 2)
                var_30_1 = (zx.d(*(arg3 + 0x1a)) u>> 1) - 1
            else
                var_30_1 = 0
    
    if (var_30_1 s< 0)
        var_30_1 = 0
    
    int32_t eax_68 = *arg9
    int32_t edx_17 = arg9[2] - eax_68
    int32_t edx_18 = edx_17 s>> 1
    bool c_1 = unimplemented  {sar edx, 0x1}
    
    if (edx_17 s>> 1 s< 0)
        edx_18 = adc.d(edx_18, 0, c_1)
    
    int32_t eax_70 = arg9[1]
    int32_t edx_22 = arg9[3] - eax_70
    int32_t edx_23 = edx_22 s>> 1
    bool c_2 = unimplemented  {sar edx, 0x1}
    
    if (edx_22 s>> 1 s< 0)
        edx_23 = adc.d(edx_23, 0, c_2)
    
    if (sub_403df4(arg3, 0x48742c) != 0)
        int32_t var_48 = temp0_1
        sub_487508(arg3, 0, 
            sub_403370(float.t(edx_18 + eax_68) - float.t(var_48) * fconvert.t(var_24)
                - float.t(temp0_2) * fconvert.t(var_1c)) - var_30_1.w)
        var_48 = temp0_1
        sub_487508(arg3, 1, 
            sub_403370(float.t(var_48) * fconvert.t(var_1c) + float.t(edx_23 + eax_70)
                - float.t(temp0_2) * fconvert.t(var_24)) - var_30_1.w)
    
    int32_t eax_78 = (arg5 + 1) * 2
    arg9[2] += eax_78
    arg9[3] += eax_78
else
    if (ebx_1 == 1 && sub_403df4(arg3, 0x48742c) != 0)
        sub_48757c(arg3, 0, 0)
    
    arg4 |= DT_CALCRECT | DT_EXPANDTABS
    
    if (arg7 != 0)
        arg4 |= DT_WORDBREAK
    
    if (sub_404e48(var_c) == 0)
        sub_404c20(&var_c, 0x490108)
    else if (arg6 != 0)
        sub_404fb0(var_c, U"&")
        
        if (arg6 == 0)
            sub_404c20(&var_c, 0x490108)
    
    if (arg6 == 0)
        arg4 |= DT_NOPREFIX
    
    if (arg3 != 0 && arg3[0xa] != 0)
        SetTextCharacterExtra(sub_42c73c(arg1), arg3[0xa])
    
    int32_t cchText = sub_404e48(var_c)
    uint8_t* lpchText = sub_490140(var_c)
    DrawTextExA(sub_42c73c(arg1), lpchText, cchText, arg9, arg4, nullptr)
    
    if (arg3 != 0)
        sub_48fb58(&var_4)
    
    int32_t eax_25 = (arg5 + 1) * 2
    arg9[2] += eax_25
    arg9[3] += eax_25

fsbase->NtTib.ExceptionList = ExceptionList
int32_t* (__stdcall* var_68_2)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
    int32_t arg5) = sub_4900cc
sub_42c7c4(arg1, 0)
ExceptionList = nullptr
return ReleaseDC(ExceptionList, hDC)
