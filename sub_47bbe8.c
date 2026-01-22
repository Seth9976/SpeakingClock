// 函数: sub_47bbe8
// 地址: 0x47bbe8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = nullptr
int32_t __saved_eax
int32_t __saved_eax_2 = __saved_eax
int32_t edi
int32_t var_10 = edi
int32_t* var_14 = &var_4
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = sub_4577d8(arg1, &var_8)
*(arg2 + 4)
char eax_1
void* ebp_1
int32_t* __saved_eax_1
eax_1, ebp_1, __saved_eax_1 = sub_46be60(ecx, var_8)
char eax_3

if (eax_1 != 0)
    eax_3 = (*(*__saved_eax_1 + 0x50))()

if (eax_1 == 0 || eax_3 == 0 || *(__saved_eax_1 + 0x57) == 0 || __saved_eax_1[0xc] == 0
        || *(__saved_eax_1[0xc] + 0x1da) == 0)
    (*(*__saved_eax_1 - 0x10))()
else
    int32_t* __saved_eax_3 = __saved_eax_1
    __saved_eax_1.w = 0xffeb
    sub_403e64(__saved_eax_3, __saved_eax_1)
    *(arg2 + 0xc) = 1

fsbase->NtTib.ExceptionList = var_8
__return_addr = sub_47bc78
sub_404b88(ebp_1 - 4)
return ebp_1 - 4
