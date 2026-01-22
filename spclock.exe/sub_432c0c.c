// 函数: sub_432c0c
// 地址: 0x432c0c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx = arg2
arg2.b = 1
int32_t* result = sub_430618(sub_42a104+0x140, arg2)
int32_t __saved_ebp
int32_t* var_2c = &__saved_ebp
int32_t (* var_30)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
(*(*result + 0x40))(ExceptionList, var_30, var_2c)
(*(*result + 0x34))()
int32_t* eax_3 = sub_430bec(result)
sub_42bcec(eax_3[5], 0)
sub_42bbb0(eax_3[5], ebx)
RECT var_1c
sub_418a64((*(*result + 0x2c))(&var_1c, (*(*result + 0x20))()), 0, 0)
sub_42c258(eax_3, &var_1c)

for (int32_t i = 0; i != 9; i += 1)
    for (int32_t j = 0; j != 9; j += 1)
        int32_t eax_12 = i & 0x80000001
        
        if (eax_12 s< 0)
            eax_12 = ((eax_12 - 1) | 0xfffffffe) + 1
        
        int32_t edx_7 = j & 0x80000001
        
        if (edx_7 s< 0)
            edx_7 = ((edx_7 - 1) | 0xfffffffe) + 1
        
        if (eax_12 == edx_7)
            sub_42c6cc(i, j, eax_3, arg1)

sub_4308a8(result)
fsbase->NtTib.ExceptionList = ExceptionList
return result
