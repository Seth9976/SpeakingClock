// 函数: sub_415da0
// 地址: 0x415da0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_118 = ebx
int32_t esi
int32_t var_11c = esi
int32_t edi
int32_t var_120 = edi
int32_t var_14 = 0
int32_t* var_124 = &var_4
int32_t (* var_128)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
char var_d = 0
EnterCriticalSection(&data_4b1998)
int32_t* var_130_1 = &var_4
int32_t (* var_134)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
data_4b1994
int32_t eax_1 = sub_405cb8()

if (eax_1 s>= 0)
    int32_t i_1 = eax_1 + 1
    int32_t edi_1 = 0
    int32_t i
    
    do
        void** ebx_1 = *(data_4b1994 + (edi_1 << 2))
        
        if (ebx_1 != 0 && ebx_1 != data_4aaa38)
            char var_114[0x100]
            sub_404dec(sub_403b48(*ebx_1, &var_114), &var_114)
            
            if (sub_408f64(var_14, arg1) != 0)
                *arg2 = ebx_1
                char var_d_1 = 1
                break
        
        edi_1 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
uint32_t (* var_130_2)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
    int32_t arg5) = sub_415e60
return LeaveCriticalSection(&data_4b1998)
