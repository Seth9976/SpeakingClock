// 函数: sub_43b578
// 地址: 0x43b578
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t var_8 = 0
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 s>= 0)
    LRESULT ebx_1 = SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xbb, arg2, 0)
    
    if (ebx_1 s< 0)
        LRESULT wParam = SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xbb, arg2 - 1, 0)
        
        if (wParam s>= 0)
            LRESULT eax_8 = SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xc1, wParam, 0)
            
            if (eax_8 != 0)
                ebx_1 = wParam + eax_8
                sub_404ea0(&var_8, sub_43b677+5, arg3)
                goto label_43b62a
    else
        sub_404ea0(&var_8, arg3, sub_43b677+5)
    label_43b62a:
        SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xb1, ebx_1, ebx_1)
        LPARAM lParam = sub_405018(var_8)
        SendMessageA(sub_45f888(*(arg1 + 0x18)), 0xc2, 0, lParam)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_1c_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_43b66a
int32_t* result = &var_8
sub_404b88(result)
return result
