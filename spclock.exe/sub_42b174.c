// 函数: sub_42b174
// 地址: 0x42b174
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx

if (sub_403df4(arg2, 0x42987c) == 0)
    return sub_41a70c(ecx, arg2)
sub_42ae28(arg1)
int32_t __saved_ebp
int32_t* var_14 = &__saved_ebp
int32_t (* var_18)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList_1
sub_42ae28(arg2)
int32_t* var_20 = &__saved_ebp
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_42a7b4(data_4b1a94, arg1, arg2[4])
sub_42b2b0(arg1, arg2[6])

if (arg1[7] != arg2[7])
    sub_42b618(arg1, sub_42b5fc(arg2))

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (__stdcall* var_20_1)(void* arg1 @ ebp, int32_t arg2, int32_t arg3, int32_t arg4, 
    int32_t arg5) = sub_42b219
return sub_42ae38(arg2)
