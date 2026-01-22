// 函数: sub_4163bc
// 地址: 0x4163bc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int64_t* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char eax = *arg1

if (eax == 1)
    sub_409340(arg3, arg3)
else
    char temp1_1 = eax - 1
    char temp2_1
    
    if (temp1_1 != 1)
        temp2_1 = eax - 2
    
    if (temp1_1 == 1 || temp2_1 == 7)
        sub_409340(arg3, &var_8)
        sub_404ea0(arg3, 0x416448, var_8)
    else
        ebp_1 = sub_416070(arg1, arg2, arg3)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_18_1)(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) = sub_416437
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]
