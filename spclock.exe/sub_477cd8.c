// 函数: sub_477cd8
// 地址: 0x477cd8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = (*data_4ac140)(0xe)
ICONINFO piconinfo

if (GetIconInfo(GetCursor(), &piconinfo) == 0)
    return result

int32_t __saved_ebp
int32_t* var_3c_2 = &__saved_ebp
int32_t (* var_40_1)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_42d9fc()
int32_t var_10
int32_t var_c
void* eax_7 = sub_402e90(var_c + var_10)
int32_t* var_48 = &__saved_ebp
int32_t (* var_4c)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx_1 = eax_7 + var_c

if (sub_42dab8(ebx_1) != 0 && *(eax_7 + 0xe) == 1)
    int32_t eax_11 = *(eax_7 + 4)
    int32_t edx_4 = (eax_11 * zx.d(*(eax_7 + 0xe)) + 0x1f) & 0xffffffe0
    
    if (edx_4 s< 0)
        edx_4 += 7
    
    int32_t edx_5 = edx_4 s>> 3
    int32_t __saved_edi_1 = eax_11 * edx_5
    void* ebx_3 = ebx_1 + var_10 - __saved_edi_1
    int32_t var_8_1 = sub_477cc8(ebx_3, __saved_edi_1, 0xff)
    
    if (var_8_1 == 0 && *(eax_7 + 8) s>= *(eax_7 + 4) * 2)
        var_8_1 = sub_477cc8(ebx_3 - __saved_edi_1, __saved_edi_1, 0)
    
    int32_t var_8_3 = divs.dp.d(sx.q(var_8_1), edx_5) - piconinfo.yHotspot

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_48_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) =
    sub_477df4
return sub_402ec4(eax_7)
