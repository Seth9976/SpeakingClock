// 函数: sub_47a954
// 地址: 0x47a954
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_2c = ebx
int32_t esi
int32_t var_30 = esi
int32_t edi
int32_t var_34 = edi
uint8_t* var_28 = nullptr
int32_t var_24 = 0
uint8_t* var_20 = nullptr
RECT lprc
lprc.left = *arg6
var_18
void* edi_1 = &var_18
void* esi_2 = &arg6[1]
*edi_1 = *esi_2
void* edi_2 = edi_1 + 4
void* esi_3 = esi_2 + 4
*edi_2 = *esi_3
*(edi_2 + 4) = *(esi_3 + 4)
int32_t* var_c = arg2
int32_t ebx_1 = arg5
int32_t* var_38 = &var_4
int32_t (* var_3c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if ((ebx_1 & 4) == 4)
    ebx_1.b &= 3

arg2.b = 1
sub_42bcec(var_c[5], arg2.b)
void* esp
void* ebp_2

if (ebx_1.b != 1)
    HDC eax_26
    int32_t ecx_6
    eax_26, ecx_6 = sub_42c73c(var_c)
    int32_t ebx_6 = arg3
    
    if (ebx_6 != 0)
        ebx_6 = *(ebx_6 - 4)
    
    sub_404d80(ecx_6, sub_405018(arg3))
    ebp_2 = sub_47a850(eax_26, var_28, ebx_6, arg4 | 5, &lprc, &var_4)
    void var_8
    esp = &var_8
else
    OffsetRect(&lprc, 1, 1)
    sub_42b2b0(var_c[3], 0xff000014)
    HDC eax_7
    int32_t ecx
    eax_7, ecx = sub_42c73c(var_c)
    int32_t ebx_2 = arg3
    
    if (ebx_2 != 0)
        ebx_2 = *(ebx_2 - 4)
    
    sub_404d80(ecx, sub_405018(arg3))
    void* ebp_1
    int32_t esi_7
    ebp_1, esi_7 = sub_47a850(eax_7, var_20, ebx_2, arg4 | 5, &lprc, &var_4)
    lprc.bottom = 0xffffffff
    lprc.right = ebp_1 - 0x18
    OffsetRect(lprc.right, lprc.bottom, 0xffffffff)
    sub_42b2b0(*(*(ebp_1 - 8) + 0xc), 0xff000010)
    HDC eax_17
    int32_t ecx_3
    eax_17, ecx_3 = sub_42c73c(*(ebp_1 - 8))
    int32_t ebx_4 = esi_7
    
    if (ebx_4 != 0)
        ebx_4 = *(ebx_4 - 4)
    
    lprc.bottom = ebp_1 - 0x18
    lprc.right = *(ebp_1 + 8) | 5
    sub_404d80(ecx_3, sub_405018(esi_7))
    ebp_2 = sub_47a850(eax_17, *(ebp_1 - 0x20), ebx_4, lprc.right, lprc.bottom, ebp_1)
    void arg_30
    esp = &arg_30

*(esp + 8)
fsbase->NtTib.ExceptionList = *esp
*(esp + 8) = sub_47aace
return sub_404bac(ebp_2 - 0x24, 3)
