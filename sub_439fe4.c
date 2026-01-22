// 函数: sub_439fe4
// 地址: 0x439fe4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_28 = ebx
int32_t esi
int32_t var_2c = esi
int32_t edi
int32_t var_30 = edi
int64_t* i = nullptr
int32_t* lprc_1 = nullptr
int32_t ebx_1 = arg3
int32_t lprc_2 = arg2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*arg1 + 0x94))(ExceptionList, j_sub_40443c, &var_4)

if ((ebx_1:1.b & 4) != 0)
    if (i == 0)
        sub_404e54(&i, 0x43a2ec)
    else if (arg1[0x68].b != 0 && *i == 0x26 && *(i + 1) == 0)
        sub_404e54(&i, 0x43a2ec)

if (arg1[0x68].b == 0)
    ebx_1 |= 0x800

enum DRAW_TEXT_FORMAT lprc = sub_45a198(arg1, ebx_1)
arg1[0x1a]
sub_42c630(arg1[0x64])

if (*(arg1 + 0x1a2) != 0 && *(arg1 + 0x19d) == 0)
    sub_404c20(&lprc_1, i)
    lprc = (lprc & ~DT_EXPANDTABS) | *((zx.d(*(arg1 + 0x1a2)) << 2) + &data_4aaf7c)
    
    if (*(arg1 + 0x19f) != 0 && *(arg1 + 0x1a2) - 2 u< 2)
        do
            int32_t* lprc_4 = lprc_2
            int32_t var_24 = *lprc_4
            int32_t var_20
            int32_t* edi_1 = &var_20
            void* esi_1 = &lprc_4[1]
            *edi_1 = *esi_1
            void* edi_2 = &edi_1[1]
            void* esi_2 = esi_1 + 4
            *edi_2 = *esi_2
            *(edi_2 + 4) = *(esi_2 + 4)
            HDC hdc
            void* var_1c = hdc - sub_42c570(arg1[0x64], 0x43a2f8)
            HDC hdc_1 = sub_42c73c(arg1[0x64])
            int32_t lprc_3 = lprc_1
            
            if (lprc_3 != 0)
                lprc_3 = *(lprc_3 - 4)
            
            i = lprc | 0x400
            lprc_1 = &var_24
            lprc_2 = lprc_3
            uint8_t* lpchText = sub_405018(lprc_1)
            hdc = hdc_1
            DrawTextA(hdc, lpchText, lprc_2, lprc_1, i)
            void* esi_7 = lpchText - var_20
            
            if (esi_7 s<= sub_457190(arg1))
                break
            
            if (esi_7 s<= sub_42b550(*(arg1[0x64] + 0xc)))
                break
            
            int64_t* i_6 = sub_409a00(sub_43a2ff+5, i)
            
            if (i_6 == 0)
                int64_t* i_1 = i
                
                if (i_1 != 0)
                    i_1 = *(i_1 - 4)
                
                i_6 = i_1
            
            void* esi_8 = i_6 - 1
            
            if (sub_40d88c(i, esi_8) == 1)
                esi_8 -= 1
            
            i = &i
            sub_405080(esi_8, 1, i, i)
            sub_404ea0(&lprc_1, i, 0x43a2f8)
        while (i != 0)
    
    if (i != 0)
        sub_404c20(&i, lprc_1)

if ((*(*arg1 + 0x50))(arg1) != 0)
    HDC eax_63 = sub_42c73c(arg1[0x64])
    int64_t* i_2 = i
    
    if (i_2 != 0)
        i_2 = *(i_2 - 4)
    
    i = &var_4
    lprc_1 = lprc_2
    sub_439f2c(i_2, i, eax_63, lprc, lprc_1, i)
else
    i = 1
    lprc_1 = 1
    OffsetRect(lprc_2, lprc_1, i)
    sub_42b2b0(*(arg1[0x64] + 0xc), 0xff000014)
    HDC eax_49 = sub_42c73c(arg1[0x64])
    int64_t* i_3 = i
    int64_t* i_4 = i_3
    
    if (i_4 != 0)
        i_4 = *(i_4 - 4)
    
    i = &var_4
    lprc_1 = lprc_2
    sub_439f2c(i_4, i, eax_49, lprc, lprc_1, i)
    i = 0xffffffff
    lprc_1 = 0xffffffff
    OffsetRect(lprc, lprc_1, i)
    sub_42b2b0(*(arg1[0x64] + 0xc), 0xff000010)
    HDC eax_58 = sub_42c73c(arg1[0x64])
    int64_t* i_5 = i_3
    
    if (i_5 != 0)
        i_5 = *(i_5 - 4)
    
    i = &var_4
    lprc_1 = lprc
    sub_439f2c(i_5, i, eax_58, lprc, lprc_1, i)

fsbase->NtTib.ExceptionList = arg1
__return_addr = sub_43a2dc
return sub_404bac(&lprc_1, 2)
