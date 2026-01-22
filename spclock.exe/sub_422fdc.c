// 函数: sub_422fdc
// 地址: 0x422fdc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_8 = ebx
int32_t esi
int32_t var_c = esi
int32_t edi
int32_t var_10 = edi
EnterCriticalSection(&data_4b19d4)
int32_t* var_14_1 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (data_4aac00 != 0)
    int32_t i = *(data_4aac00 + 8) - 1
    
    if (i s>= 0)
        do
            int32_t* eax_2 = sub_41a0f4(data_4aac00, i)
            
            if (eax_2[2] == 0)
                if (arg2 != 0 && arg2 == **eax_2)
                label_423053:
                    sub_419fe8(data_4aac00, i)
                    sub_402ec4(*eax_2)
                    sub_402ec4(eax_2)
                else if (arg4 != 0 && *(*eax_2 + 8) == arg3 && *(*eax_2 + 0xc) == arg5)
                    goto label_423053
            
            i -= 1
        while (i != 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_14_2)(int32_t arg1, int32_t arg2, int32_t arg3) = sub_423095
return LeaveCriticalSection(&data_4b19d4)
