// 函数: sub_491558
// 地址: 0x491558
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if ((*(arg1 + 0x1c) & 0x10) == 0)
    if ((*(arg1 + 0x4c) == 0 & arg2) != 0)
        esp = &ExceptionList
        *(arg1 + 0x4c) = sub_424ad0(sub_491618, arg1.w, ExceptionList)
    
    *(arg1 + 0x48) = 0
    HWND hWnd = *(arg1 + 0x4c)
    
    if (hWnd != 0)
        KillTimer(hWnd, 1)
        esp = &ExceptionList
    
    if (arg2 != 0 && sub_4914d4(arg1) s> 0)
        esp = &ExceptionList
        
        if (SetTimer(*(arg1 + 0x4c), 1, zx.d(*(arg1 + 0x54)), nullptr) != 0)
            *(arg1 + 0x50) = 1
            *(arg1 + 0x48) = 1
        else
            sub_406a30(data_4ac4b0, &var_8)
            int32_t edx_1
            edx_1.b = 1
            sub_40451c(sub_40ceb0(sub_4175f8+0x48, edx_1, var_8))
            esp = &var_8

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_491613
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_404b88(result)
return result
