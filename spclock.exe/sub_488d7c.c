// 函数: sub_488d7c
// 地址: 0x488d7c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
*arg2 = 0xffffffff
char var_d = 6
int32_t* edx
edx.b = 1
int32_t* eax = sub_41cd8c(arg1, edx, &data_417f68, 0x20)
int32_t* var_2c_1 = &var_4
int32_t (* var_30)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*eax + 0xc))(ExceptionList, var_30, var_2c_1)
int32_t ebx_1 = 0
void* esi = &data_4abcfc
int32_t ecx_4
int32_t edx_2

do
    char var_1d
    uint32_t ecx_2 = zx.d(var_1d)
    ecx_4, edx_2 = sub_403508(&var_1d, esi, ecx_2 + 1)
    
    if (ecx_2 == 0xffffffff)
        var_d = ebx_1.b
        break
    
    ebx_1 += 1
    esi += 9
while (ebx_1.b != 6)

*arg2 = sub_4888b8(eax, edx_2, ecx_4)

if (var_d == 6 || arg3 == 0)
    sub_4045c8(ExceptionList)
    return zx.d(var_d)

(*(*arg3 + 8))()
int32_t ecx_5
int32_t edx_7
ecx_5, edx_7 = sub_41a2b0(arg3, *arg2)
int32_t ebx_4 = *arg2 - 1

if (ebx_4 s>= 0)
    int32_t i_1 = ebx_4 + 1
    int32_t i
    
    do
        ecx_5, edx_7 = sub_419f9c(arg3, sub_4888b8(eax, edx_7, ecx_5))
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = arg2
__return_addr = &data_488e5f
return sub_403c68(eax)
