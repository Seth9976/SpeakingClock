// 函数: sub_476bac
// 地址: 0x476bac
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t edi
int32_t var_18 = edi
int32_t* result = (*(arg2 - 0xc))()
*arg3 = result

if (*(arg1 + 0x44) == 0 && sub_403df4(result, 0x46a498) != 0)
    result[0x15].w |= 0x8000

int32_t* var_18_1 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
int32_t* var_24 = &var_4
int32_t (* var_28)() = j_sub_404188
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*result + 0x2c))(ExceptionList, var_28, var_24, ExceptionList_1, var_1c, var_18_1)
fsbase->NtTib.ExceptionList = arg4

if (*(arg1 + 0x44) == 0 && sub_403df4(result, 0x46a498) != 0)
    sub_45f864(result)
    *(arg1 + 0x44) = result
    
    if (sub_478b08() != 0)
        HWND hWnd = *(arg1 + 0x30)
        SetWindowLongA(hWnd, 0xffffffec, GetWindowLongA(hWnd, 0xffffffec) | 0x8000000)
    
    uint32_t result_1
    result_1.b = sub_478b08().b ^ 1
    result = result_1
    char edx_4 = sub_478b08() ^ 1
    sub_46b93c(*(arg1 + 0x30), edx_4, result)

fsbase->NtTib.ExceptionList = arg3
__return_addr = sub_476cda

if ((result[0x15].w & 0x8000) == 0x8000)
    result[0x15].w &= 0x7fff

return result
