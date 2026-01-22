// 函数: sub_41db48
// 地址: 0x41db48
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
char result
int32_t ecx
result, ecx = sub_408f64(arg2, arg3->__offset(0x80).d)

if (result == 0 || arg5 == 0)
    return result

char eax_3
int32_t ecx_1
int32_t edx_1
eax_3, ecx_1, edx_1 = sub_41fbb4(ecx)

if (eax_3 != 0xa)
    arg3->__offset(0x10).d -= 1
    sub_41fcc4(arg3)
    arg3->__offset(0x88).b = 1
    ecx_1, edx_1 = sub_41da5c()

edx_1.b = 1
int32_t var_c = sub_403c38(ecx_1, edx_1)
int32_t* var_c_1 = &var_4
int32_t (* var_10)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* __saved_ebx_1 = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
fsbase->NtTib.ExceptionList = &__saved_ebx
sub_41e04c(arg3, &var_10, 4)
(*(*var_c_1 + 4))(__saved_ebx_1, var_10, var_c_1)
sub_41e04c(arg3, var_c_1[1], var_10)
arg3->__offset(0x88).b = 1
arg4(arg3)
fsbase->NtTib.ExceptionList = arg3
__return_addr = sub_41dc19
return sub_403c68(var_c_1)
