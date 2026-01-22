// 函数: sub_415a40
// 地址: 0x415a40
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_8 = ebx
int32_t esi
int32_t var_c = esi
EnterCriticalSection(&data_4b1998)
int32_t* var_10_1 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = sub_405cb0(data_4b1994) - 1

if (i s>= 0)
    do
        int32_t* eax_3 = *(data_4b1994 + (i << 2))
        
        if (eax_3 != data_4aaa38)
            sub_403c68(eax_3)
        
        i -= 1
    while (i != 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
void* const var_10_2 = &data_415aa8
return LeaveCriticalSection(&data_4b1998)
