// 函数: sub_42e2f8
// 地址: 0x42e2f8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_110 = ebx
int32_t esi
int32_t var_114 = esi
int32_t edi
int32_t var_118 = edi
char* var_c = nullptr
int32_t* var_11c = &var_4
int32_t (* var_120)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t i = arg1[2] - 1
bool cond:0 = i == 0

if (i s>= 0)
    do
        char var_10c[0x100]
        sub_404dec(sub_403b48(*sub_41a0f4(arg1, i), &var_10c), &var_10c)
        sub_404fb0(var_c, arg2)
        
        if (cond:0)
            break
        
        i -= 1
        cond:0 = i == 0xffffffff
    while (i != 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_11c_1)(int32_t* arg1 @ ebp, int32_t arg2 @ esi, int32_t arg3, int32_t arg4) =
    sub_42e37d
char** result = &var_c
sub_404b88(result)
return result
