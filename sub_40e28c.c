// 函数: sub_40e28c
// 地址: 0x40e28c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
void* var_20
__builtin_memset(&var_20, 0, 0x1c)
int32_t* var_30 = &var_4
int32_t (* var_34)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_c
void* i

if ((arg4 & 2) == 0)
    sub_404c20(&i, arg1)
    sub_404c20(&var_c, arg2)
else
    sub_408f88(arg1, &i)
    sub_408f88(arg2, &var_c)

int64_t* var_10
sub_404c20(&var_10, arg1)
sub_404b88(arg3)

while (i != 0)
    void* eax_7 = sub_40dc14(var_c, i)
    
    if (eax_7 == 0)
        sub_404e54(arg3, var_10)
        break
    
    int32_t var_3c_1 = *arg3
    sub_405080(eax_7 - 1, 1, var_10, &var_20)
    void* var_40_2 = var_20
    int32_t ecx
    int32_t var_44_1 = ecx
    sub_404f1c(arg3, 3)
    uint32_t edi_1 = arg2
    
    if (edi_1 != 0)
        edi_1 = *(edi_1 - 4)
    
    sub_405080(0x7fffffff, edi_1 + eax_7, var_10, &var_10)
    
    if ((arg4 & 1) == 0)
        sub_404e54(arg3, var_10)
        break
    
    void* var_1c_1 = var_c
    
    if (var_1c_1 != 0)
        var_1c_1 = *(var_1c_1 - 4)
    
    sub_405080(0x7fffffff, var_1c_1 + eax_7, i, &i)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_30_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_40e3dc
return sub_40e3bf(&var_4) __tailcall
