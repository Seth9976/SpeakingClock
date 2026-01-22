// 函数: sub_416794
// 地址: 0x416794
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int64_t* var_14 = nullptr
int32_t* var_8 = arg3
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
    sub_4054c8(sub_416724(&var_14, arg2), var_14)
else if (eax_2 == 0xb)
    int32_t eax_5 = arg2[1]
    int32_t edx_3 = eax_5 & 0xff000000
    
    if (edx_3 != 0xff000000)
        int32_t var_10_1
        
        if (edx_3 != 0xfe000000)
            var_10_1 = eax_5
        else
            var_10_1 = *(*arg1 + sx.d(eax_5.w))
        
        int32_t* var_c_1 = arg1
        
        if (arg2[4] != 0x80000000)
            var_10_1()
            esp = &var_8
        else
            var_10_1()
            esp = &var_8
    else
        sub_4053a4(var_8, *((eax_5 & 0xffffff) + arg1))
else
    sub_405368(var_8)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_416874
int64_t** result = &var_14
sub_404b88(result)
return result
