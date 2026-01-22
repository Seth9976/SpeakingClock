// 函数: sub_49cfb2
// 地址: 0x49cfb2
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t* var_10 = &var_4
int32_t (* var_14)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char eax_1
int32_t ecx
eax_1, ecx = sub_49c2a0(arg1)

if (eax_1 != 0)
    sub_4577d8(ecx, &var_8)
    
    if (var_8 == 0)
        esp = &var_8
        int32_t eax_5
        
        if (sub_4944c8((*(*arg1 + 0x138))()).b != 0)
            eax_5.b = 1

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_49d01d
return sub_49d00d(&var_4) __tailcall
