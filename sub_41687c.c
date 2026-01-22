// 函数: sub_41687c
// 地址: 0x41687c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
int64_t* var_10 = nullptr
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char eax_2 = ***arg2
char temp1_1

if (eax_2 != 5)
    temp1_1 = eax_2 - 5

if (eax_2 == 5 || temp1_1 == 5)
    sub_404e10(arg3, arg3)
    sub_416764(var_10, arg2)
else if (eax_2 == 0xb)
    int32_t eax_4 = arg2[2]
    int32_t edx_3 = eax_4 & 0xff000000
    
    if (edx_3 != 0xff000000)
        int32_t var_c_1
        
        if (edx_3 != 0xfe000000)
            var_c_1 = eax_4
        else
            var_c_1 = *(arg1->Next + sx.d(eax_4.w))
        
        struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg1
        
        if (arg2[4] != 0x80000000)
            var_c_1()
            esp = &var_8
        else
            var_c_1()
            esp = &var_8
    else
        sub_4053a4((eax_4 & 0xffffff) + arg1, arg3)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_41694a
int64_t** result = &var_10
sub_404b88(result)
return result
